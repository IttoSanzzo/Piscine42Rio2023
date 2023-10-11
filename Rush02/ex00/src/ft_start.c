/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:16:16 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/17 10:17:55 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int	ft_start(char *dict_addr, char *nb)
{
	t_list		*tab;
	long int	*first;
	long int	first_v;

	first_v = 1;
	first = &first_v;
	if (ft_check_num(nb) == 1)
		return (1);
	else if (ft_check_dict(dict_addr, 0) == 1)
		return (2);
	tab = ft_get_dict(dict_addr, 0);
	if (ft_test_print(ft_atoi(nb), tab, first) == 2)
	{
		ft_free_all(tab);
		return (2);
	}
	first_v = 1;
	ft_print(ft_atoi(nb), tab, first);
	ft_putchar('\n');
	ft_free_all(tab);
	return (0);
}

void	ft_free_all(t_list *tab)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (tab[i].val)
			free(tab[i].val);
		i++;
	}
	free(tab);
}
