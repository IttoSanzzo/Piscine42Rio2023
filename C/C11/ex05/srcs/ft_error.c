/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/04 23:15:47 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/05 00:20:18 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

int	ft_check_sym(char *sym)
{
	if (sym[1] != 0)
		return (3);
	if (sym[0] != '+' && sym[0] != '-' && sym[0] != '*'
		&& sym[0] != '/' && sym[0] != '%')
		return (3);
	return (0);
}

int	ft_check_dmz(char **argv)
{
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
		return (1);
	if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
		return (2);
	return (0);
}

int	ft_err(int cherr)
{
	if (cherr == 1)
		ft_putstr(ERR_MSS_DZ);
	if (cherr == 2)
		ft_putstr(ERR_MSS_MZ);
	if (cherr == 3)
		ft_putstr("0");
	return (cherr);
}
