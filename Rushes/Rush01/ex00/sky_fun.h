/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky_fun.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:08:03 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/10 14:09:49 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_form_blank(int n, int tab[n][n]);
void	display_solution(int tab[4][4]);
int		solve(int tab[4][4], int entry[16], int pos);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		check_double(int tab[4][4], int pos, int num);
int		check_case(int tab[4][4], int pos, int entry[16]);
int		check_col_up(int tab[4][4], int pos, int entry[16]);
int		check_row_right(int tab[4][4], int pos, int entry[16]);
int		check_col_down(int tab[4][4], int pos, int entry[16]);
int		check_row_left(int tab[4][4], int pos, int entry[16]);
