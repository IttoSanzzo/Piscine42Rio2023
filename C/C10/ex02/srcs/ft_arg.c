/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/04 03:30:53 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/04 03:34:21 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

int	ft_locate_c(int argc, char **argv, int *loc)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (ft_strncmp(argv[i], "-c", 1) == 0)
		{
			loc[0] = i;
			loc[2] = 1;
			if (i + 1 < argc && argv[i][2] == 0
					&& ft_isnum(argv[i + 1]))
			{
				loc[1] = ft_atoi(argv[i + 1]);
				loc[2] = 2;
				return (2);
			}
			return (1);
		}
	}
	loc[0] = 0;
	loc[1] = NBP;
	loc[2] = 0;
	return (0);
}

int	*ft_handle_c(int argc, char **argv)
{
	int	*loc;

	loc = (int *)malloc(sizeof(int) * 3);
	if (ft_locate_c(argc, argv, loc) == 0
		|| ft_locate_c(argc, argv, loc) == 2)
		return (loc);
	else if (argv[loc[0]][2] == 0 || !(ft_isnum(argv[loc[0]] + 2)))
		loc[0] = -1;
	else
		loc[1] = ft_atoi(argv[loc[0]] + 2);
	return (loc);
}
