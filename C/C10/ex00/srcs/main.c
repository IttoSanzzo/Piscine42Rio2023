/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/03 21:01:23 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/03 21:58:38 by marcosv2	      ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (ft_errors(1));
	else if (argc > 2)
		return (ft_errors(2));
	return (ft_errors(ft_start(argv[1])));
}

int	ft_start(char *fn)
{
	int		fd;
	char	c[1];

	fd = open(fn, O_RDONLY);
	if (fd == -1)
		return (3);
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

int	ft_errors(int cherr)
{
	if (cherr == 1)
		ft_putstr_error("File name missing.\n");
	else if (cherr == 2)
		ft_putstr_error("Too many arguments.\n");
	else if (cherr == 3)
		ft_putstr_error("Cannot read file.\n");
	return (cherr);
}
