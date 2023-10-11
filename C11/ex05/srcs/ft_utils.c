/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/04 23:17:23 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/05 00:19:57 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -sign;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + (*str++ - 48);
	return (nbr * sign);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

void	ft_putnbr(int nb)
{
	int	nbr;

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
	{
		nbr = nb % 10 + 48;
		write(1, &nbr, 1);
	}
}
