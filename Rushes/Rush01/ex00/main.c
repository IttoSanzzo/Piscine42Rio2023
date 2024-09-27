/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:15:13 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/10 18:53:10 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky_fun.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	*entry;

	ft_form_blank(4, tab);
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	entry = get_numbers(argv[1]);
	if (solve(tab, entry, 0) == 1)
	{
		display_solution(tab);
		free(entry);
		return (0);
	}
	free(entry);
	ft_putstr("Error\n");
	return (1);
}
