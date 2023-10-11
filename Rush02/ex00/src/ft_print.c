/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:33:46 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/17 11:22:41 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_test_print(long int nbr, t_list *tab, long int *first)
{
	long int	i;
	long int	mult;

	i = 0;
	mult = get_google(nbr);
	if (mult >= 100)
		if (ft_test_print(nbr / mult, tab, first) == 2)
			return (2);
	*first = 0;
	while (tab[i].nb != mult)
	{
		if (++i == 40)
			return (2);
	}
	if (tab[i].val[0] == 'X' && tab[i].val[1] == 'Q')
		return (2);
	if (mult != 0 && nbr % mult != 0)
		if (ft_test_print(nbr % mult, tab, first) == 2)
			return (2);
	return (0);
}

void	ft_print(long int nbr, t_list *tab, long int *first)
{
	long int	i;
	long int	mult;

	i = 0;
	mult = get_google(nbr);
	if (mult >= 100)
		ft_print(nbr / mult, tab, first);
	if (*first == 0)
		ft_putchar(' ');
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && nbr % mult != 0)
		ft_print(nbr % mult, tab, first);
}

long int	get_google(long int nb)
{
	if (nb >= 1000000000000000000)
		return (1000000000000000000);
	if (nb >= 1000000000000000000)
		return (1000000000000000000);
	if (nb >= 1000000000000000)
		return (1000000000000000);
	if (nb >= 1000000000000)
		return (1000000000000);
	else if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (get_dec(nb));
}

long int	get_dec(long int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20 && nb > 0)
		return (nb);
	else if (nb == 0)
		return (0);
	return (-1);
}
