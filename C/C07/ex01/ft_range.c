/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:56:19 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/18 18:50:55 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	tab = (int *) malloc(sizeof(int) * range);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	if (nb >= 0)
		ft_putchar(nb % 10 + 48);
}

int	ft_atoi(char *nb)
{
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	if (*nb == '-' || *nb == '+')
		if (*nb++ == '-')
			sign = -1;
	while (*nb >= '0' && *nb <= '9')
		nbr = nbr * 10 + (*nb++ - '0');
	return (nbr * sign);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	int	*tab;
	int	i;

	if (argc == 3)
	{
		tab = ft_range(ft_atoi(argv[1]), ft_atoi(argv[2]));
		printf("%p", tab);
		i = 0;
		while (i < 40)
			printf("\n%d", tab[i++]);
		free(tab);
	}
	return (0);
}
*/
