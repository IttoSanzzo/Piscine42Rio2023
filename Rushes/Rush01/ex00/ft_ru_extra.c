/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:52:04 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/10 14:15:30 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky_fun.h"

int	check_double(int tab[4][4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (tab[pos / 4][i] == num)
			return (1);
	return (0);
}

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	return (0);
}
