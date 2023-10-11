/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/04 23:04:19 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/05 00:19:08 by marcosv2	      ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

// pre-processors
# define ERR_MSS_DZ "Stop : division by zero\n"
# define ERR_MSS_MZ "Stop : modulo by zero\n"

// main.c
int		ft_start(char **argv);
int		main(int argc, char **argv);

// ft_calcs.c
int		ft_plus(int i1, int i2);
int		ft_less(int i1, int i2);
int		ft_time(int i1, int i2);
int		ft_divi(int i1, int i2);
int		ft_modu(int i1, int i2);

// ft_error.c
int		ft_check_sym(char *symb);
int		ft_check_dmz(char **argv);
int		ft_err(int cherr);

// ft_utils.c
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
