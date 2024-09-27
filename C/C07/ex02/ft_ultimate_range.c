/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:56:19 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/18 15:55:57 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		rg;
	int		i;
	int		*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	rg = max - min;
	buffer = malloc(sizeof(int) * rg);
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < rg)
	{
		buffer[i] = min + i;
		i++;
	}
	return (rg);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*tab;
	int	size;
	int	i = 0;

	if (argc == 3)
	{
		size = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
		while(i < size)
			printf("%d\n", tab[i++]);
	}
	return (0);
}
*/
