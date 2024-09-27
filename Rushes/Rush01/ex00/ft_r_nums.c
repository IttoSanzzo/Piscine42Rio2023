/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:49:25 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/10 18:53:40 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky_fun.h"
#include <stdlib.h>

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (!(tab))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '4')
			&& (j + 1) != 17)
			tab[j++] = ft_atoi(str + i);
		else if (str[i] != ' ' || ft_strlen(str) > 31)
		{
			str[i--] = '\0';
			tab[0] = 0;
		}
	}
	return (tab);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	nbrminus;

	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			nbrminus++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	if (nbrminus % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}
