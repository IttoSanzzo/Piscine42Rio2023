/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:40:18 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/14 17:52:11 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 0;
	while (++i < nb)
		if (nb % i == 0 && i != 1)
			return (0);
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_is_prime(atoi(argv[1])));
	return (0);
}
*/
