/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 22:07:39 by marcosv2          #+#    #+#             */
/*   Updated: 2023/08/31 22:07:58 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	store;

	i = 0;
	while (i != size / 2)
	{
		store = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = store;
		i++;
	}
}
