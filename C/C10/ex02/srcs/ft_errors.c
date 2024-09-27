/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/03 23:03:22 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/04 01:42:15 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

void	ft_loop(int i)
{
	while (i)
		i = 1;
}

void	ft_putstr_error(char *str)
{
	while (*str)
		write(ERR, &*str++, 1);
}

void	ft_err(int cherr, char *fn)
{
	if (cherr == -1)
	{
		ft_putstr_error(BY_NAME_SPC);
		ft_putstr_error(fn);
		ft_putstr_error(NO_FILE_DIR);
	}
	else if (cherr == 1)
		ft_putstr_error(NO_C_ARG_NUM);
}
