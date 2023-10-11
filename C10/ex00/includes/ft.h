/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/03 21:08:47 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/03 21:35:27 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>

int		ft_start(char *fn);
int		ft_errors(int cherr);
void	ft_putstr_error(char *str);

#endif
