/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:06:31 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/16 17:15:13 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	error;

	error = 0;
	if (argc < 2 || argc > 3)
		error = 1;
	if (argc == 2)
		error = ft_start("numbers.dict", argv[1]);
	else if (argc == 3)
		error = ft_start(argv[1], argv[2]);
	return (ft_print_error(error));
}
