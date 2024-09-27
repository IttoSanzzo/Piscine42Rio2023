/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/04 22:58:04 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/05 00:13:38 by marcosv2	      ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

int	ft_start(char **argv)
{
	if (argv[2][0] == '+')
		ft_putnbr(ft_plus(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '-')
		ft_putnbr(ft_less(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '*')
		ft_putnbr(ft_time(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '/')
		ft_putnbr(ft_divi(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '%')
		ft_putnbr(ft_modu(ft_atoi(argv[1]), ft_atoi(argv[3])));
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_check_sym(argv[2]) != 0)
		return (ft_err(ft_check_sym(argv[2])));
	if (ft_check_dmz(argv) != 0)
		return (ft_err(ft_check_dmz(argv)));
	return (ft_err(ft_start(argv)));
}
