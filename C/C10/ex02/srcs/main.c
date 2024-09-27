/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/03 21:01:23 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/04 03:32:13 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

char	*ft_filedup(char *fn, int fd)
{
	int		i;
	char	c[1];
	char	*dest;

	i = 0;
	while (read(fd, &c, 1) != 0)
		i++;
	close(fd);
	fd = open(fn, O_RDONLY);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (read(fd, &c, 1) != 0)
		dest[i++] = c[0];
	dest[i] = 0;
	close(fd);
	return (dest);
}

void	ft_puthed(char *fn, int argc, int i)
{
	if (argc > 2)
	{
		if (i > 1)
			ft_putstr("\n");
		ft_putstr("==> ");
		ft_putstr(fn);
		ft_putstr(" <==\n");
	}
}

int	ft_start(char *fn, int nb, int argc, int i)
{
	int		fd;
	char	*file;

	fd = open(fn, O_RDONLY);
	if (fd == -1)
		return (-1);
	file = ft_filedup(fn, fd);
	if (nb < 0)
		nb = -nb;
	else if (nb > ft_strlen(file))
		nb = ft_strlen(file);
	ft_puthed(fn, argc, i);
	ft_putstr(file + (ft_strlen(file) - nb));
	free(file);
	return (0);
}

int	main(int ac, char **av)
{
	int	*loc;
	int	i;

	if (ac == 1)
		ft_loop(1);
	loc = ft_handle_c(ac, av);
	if (loc[0] == -1)
	{
		ft_err(1, NULL);
		return (1);
	}
	i = 0;
	while (++i < ac)
		if (i != loc[0] && !(i == loc[0] + 1 && loc[2] == 2))
			ft_err(ft_start(av[i], loc[1], ac - loc[2], i), av[i]);
	free(loc);
	return (0);
}
