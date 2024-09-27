/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:24:12 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/17 11:29:32 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

t_list	*ft_get_dict(char *dict, int i)
{
	int		fd;
	char	c[1];
	char	*tmp;
	t_list	*tab;

	fd = open(dict, O_RDONLY);
	tab = malloc(sizeof(t_list) * 42);
	while (i < 41)
	{
		tab[i].nb = ft_get_num(fd);
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_get_val(fd, c);
		tab[i].val = ft_strdcpy(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}

long int	ft_get_num(int fd)
{
	long int	temp;
	int			i;
	int			sign;
	char		c[1];
	char		*str;

	sign = 1;
	str = malloc(sizeof(char) * 128);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n' || c[0] == '-' || c[0] == '+')
	{
		if (c[0] == '-')
			sign = -1;
		read(fd, c, 1);
	}
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	temp = ft_atoi(str);
	free(str);
	return (temp * sign);
}

char	*ft_get_val(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (c[0] == '\n')
	{
		str[0] = 'X';
		str[1] = 'Q';
		return (str);
	}
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_strdcpy(char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
