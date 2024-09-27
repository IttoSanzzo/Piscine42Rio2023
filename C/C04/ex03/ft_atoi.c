/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:26:48 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/13 14:35:30 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -sign;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + (*str++ - '0');
	return (nbr * sign);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void) argc;
	int	nbr = ft_atoi(argv[1]);
	printf("%d", nbr);
}
*/
