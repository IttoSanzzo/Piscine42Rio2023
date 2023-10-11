/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:38:19 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/20 03:42:18 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
	ft_putchar('\n');
}

char	**ft_copy(char **array_map)
{
	char	**new_array;
	int		i;
	int		array_len;

	i = 0;
	array_len = 0;
	while (array_map[array_len])
		array_len++;
	new_array = malloc(sizeof(char *) * (array_len + 1));
	while (array_map[i])
	{
		new_array[i] = ft_strdup(array_map[i]);
		i++;
	}
	new_array[array_len] = 0;
	return (new_array);
}

int	x_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[size])
		size++;
	return (size);
}

int	y_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[0][size])
		size++;
	return (size);
}
