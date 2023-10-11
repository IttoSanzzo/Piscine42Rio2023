/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/03 21:08:47 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/04 03:30:38 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

// pre_processors
# define OTP 1
# define ERR 2
# define NBP 10
# define BY_NAME_SPC "ft_tail: "
# define NO_FILE_DIR ": No such file or directory\n"
# define NO_C_ARG_NUM "ft_tail: option requires an argument -- 'c'\n"

// main.c
char	*ft_filedup(char *fn, int fd);
void	ft_puthed(char *fn, int argc, int i);
int		ft_start(char *fn, int nb, int argc, int i);
int		main(int argc, char **argv);

// ft_arg.c
int		ft_locate_c(int argc, char **argv, int *loc);
int		*ft_handle_c(int argc, char **argv);

// ft_errors.c
void	ft_loop(int i);
void	ft_err(int cherr, char *fn);
void	ft_putstr_error(char *str);

// ft_utils.c
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, int n);
int		ft_isnum(char *str);
void	ft_putstr(char *str);

#endif
