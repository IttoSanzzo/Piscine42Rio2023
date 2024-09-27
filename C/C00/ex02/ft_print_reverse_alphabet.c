/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:32:10 by marcosv2          #+#    #+#             */
/*   Updated: 2023/08/31 16:38:36 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		alpha;

	alpha = 122;
	while (alpha >= 97)
	{
		write(1, &alpha, 1);
		alpha--;
	}
}
