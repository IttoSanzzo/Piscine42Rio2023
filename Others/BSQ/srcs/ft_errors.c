/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 05:16:55 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/20 05:18:08 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
}

void	ft_error_map(void)
{
	write (2, "map error\n", 10);
}

void	ft_exit(void)
{
	ft_error_map();
	exit(1);
}
