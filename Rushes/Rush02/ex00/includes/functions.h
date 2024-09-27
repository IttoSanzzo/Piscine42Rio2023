/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:22:52 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/17 11:34:52 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	long int	nb;
	char		*val;
}	t_list;
t_list	*ft_get_dict(char *dict, int i);
long	int	get_google(long int nb);
long	int	get_dec(long int nb);
long	int	ft_get_num(int fd);
long	int	ft_atoi(char *nb);
int		ft_str_no_space(char *str);
int		ft_test_print(long int nbr, t_list *tab, long int *first);
int		ft_start(char *dict_addr, char *nb);
int		ft_print_error(int cod);
int		ft_check_num(char *cod);
int		ft_check_dict(char *dict, int fd);
int		ft_strlen(char *str);
char	*ft_get_val(int fd, char *c);
char	*ft_strdcpy(char *src);
char	*ft_strdcpy(char *src);
void	ft_print(long int nbr, t_list *tab, long int *first);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_free_all(t_list *tab);
