/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/04 18:00:37 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/04 22:03:20 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

void ft_foreach(int *tab, int length, void(*f)(int))
{
	if (length > 1)
		ft_foreach(tab, length - 1, f);
	f(tab[length - 1]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM 6

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	if (nb >= 0)
		c = nb % 10 + 48;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	tab[argc - 1];
	int	i;

	i = -1;
	while (++i < argc - 1)
		tab[i] = atoi(argv[i + 1]);
	ft_foreach(tab, argc - 1, &ft_putnbr);
	return (0);
}
*/
