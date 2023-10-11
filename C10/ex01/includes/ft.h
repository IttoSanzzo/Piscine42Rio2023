/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/03 21:08:47 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/03 22:37:23 by marcosv2	      ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>

int		ft_start(char *fn);
void	ft_errors(int cherr, char *fn);
void	ft_putstr_error(char *str);

#endif
