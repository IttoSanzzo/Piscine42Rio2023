/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:22:24 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/17 11:39:09 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>
#include <fcntl.h>

int	ft_print_error(int cod)
{
	if (cod == 0)
		return (0);
	else if (cod == 1)
		ft_putstr("Error\n");
	else
		ft_putstr("Dict Error\n");
	return (1);
}

int	ft_check_num(char *cod)
{
	if (cod[1] == '-' || cod[1] == '+'
		|| ft_atoi(cod) < 0)
		return (1);
	if ((ft_strlen(cod) >= 20 && cod[0] != '+' )
		|| (ft_strlen(cod) >= 21 && cod[0] == '+'))
		return (1);
	while (*cod)
	{
		if (!((*cod >= '0' && *cod <= '9')
				|| (*cod == '-' || *cod == '+')))
			return (1);
		cod++;
	}
	return (0);
}

int	ft_check_dict(char *dict, int fd)
{
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (1);
	close(fd);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
