/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:14:15 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/13 19:14:24 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_putstr(argv[0]);
	return (0);
}
