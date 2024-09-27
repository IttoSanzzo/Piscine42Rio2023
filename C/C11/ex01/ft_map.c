/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/04 22:03:40 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/04 22:43:59 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
/*
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*dest;
	int	i;

	dest = (int *)malloc(sizeof(int) * length);
	if (!(dest))
		return (NULL);
	i = -1;
	while (++i < length)
		dest[i] = f(tab[i]);
	return (dest);
}
*/
/*
#include <stdio.h>

int	ft_numplus(int nb)
{
	return (nb + 1);
}

int	main(int argc, char **argv)
{
	int	tab[argc - 1];
	int	*dest;
	int	i;

	i = -1;
	while (++i < argc)
		tab[i] = atoi(argv[i]);
	dest = ft_map(tab, argc, &ft_numplus);
	i = -1;
	while (dest[++i] < argc)
		printf("%d", dest[i]);
	free(dest);
	return (0);
}
*/
