/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:51:53 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/20 03:52:08 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFFER_STDIN	1000000000

// STRUCTS
typedef struct s_map
{
	char	empty;
	char	obs;
	char	full;
	char	**matrix;
	int		is_valid;
}	t_map;

typedef struct s_square
{
	int	x_start;
	int	y_start;
	int	x_end;
	int	y_end;
}	t_square;

// FT_ERROR
void		ft_error(void);
void		ft_error_map(void);
void		ft_exit(void);

// FT_INIT
int			ft_init(int argc, char *argv);
char		**ft_split(char *str);

// FT_HANDLE_MAP
int			ft_check_map_line_len(char **array_map);
int			ft_check_map_line_value(char **array_map, t_map map);
int			ft_is_map_valid(char **array_map, t_map map);
// void	ft_get_parameters(char *empty, char *obs, char *full, char *first_line);
t_map		ft_get_map(int argc, char *argv);

// FT_SOLVER
t_map		ft_solver(t_map map);
t_square	find_square(t_map map, t_square square, int x_start, int y_start);
int			square_size(t_square square);
int			check_square(t_map map, t_square square);
t_map		fill_square(t_map map, t_square square);

// FT_MANAGE_FILE
char		**ft_read_file(char *dictpath);
char		**ft_read_stdin(void);
int			ft_get_file_size(char *dictpath, int *file);
void		ft_free(char **dict);
void		ft_free_map(t_map map);

// FT_CONDITIONS
int			ft_is_whitespace(char c);
int			ft_is_number(char c);
int			ft_is_alpha(char c);
int			ft_is_printable(char c);

// FT_UTILS
int			ft_atoi(char *str);
int			ft_strlen(char *str);
int			ft_strprintable_len(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *src);

// FT_UTILS_S
void		ft_putchar(char c);
char		**ft_copy(char **array_map);
void		ft_putstr(char *str);
int			x_size(char **matrix);
int			y_size(char **matrix);

#endif
