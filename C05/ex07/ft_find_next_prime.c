/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:40:18 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/15 09:24:35 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	nb -= 1;
	while (++nb)
	{
		i = 0;
		while (++i && i <= nb)
		{
			if (i == nb)
				return (nb);
			if (nb % i == 0 && i != 1)
				break ;
		}
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/
