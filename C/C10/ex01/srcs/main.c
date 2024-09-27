/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/03 21:01:23 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/03 22:38:25 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

void	ft_loop(int i)
{
	while (i)
		i = 1;
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		ft_loop(1);
	i = 0;
	while (++i < argc)
		ft_errors(ft_start(argv[i]), argv[i]);
	return (0);
}

int	ft_start(char *fn)
{
	int		fd;
	char	c[1];

	fd = open(fn, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (read(fd, &c, 1) != 0)
		write(1, &c, 1);
	close(fd);
	return (0);
}

void	ft_putstr_error(char *str)
{
	while (*str)
		write(2, &*str++, 1);
}

void	ft_errors(int cherr, char *fn)
{
	if (cherr == -1)
	{
		ft_putstr_error("ft_cat: ");
		ft_putstr_error(fn);
		ft_putstr_error(": No such file or directory\n");
	}
}
