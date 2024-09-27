/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:33:19 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/20 03:36:31 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	while (ft_is_printable(str[i]))
		i++;
	i--;
	j = 0;
	while (str[i] && j < 2)
	{
		i--;
		j++;
	}
	j = 0;
	nb = 0;
	while (ft_is_number(str[j]) && j < i)
	{
		nb = nb * 10 + str[j] - '0';
		j++;
	}
	return (nb);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strprintable_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_printable(str[i]))
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
