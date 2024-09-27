/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/02 23:54:28 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/03 20:47:22 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = (char *) malloc(sizeof(char) * (i + 1));
	if (!(dest))
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

int	ft_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int	ft_wc(char *str, char *sep)
{
	int	i;
	int	wc;

	wc = 0;
	i = -1;
	while (str[++i])
		if ((i == 0 && !(ft_sep(str[i], sep)))
			|| (!(ft_sep(str[i], sep)) && ft_sep(str[i - 1], sep)))
			wc++;
	return (wc);
}

char	**just_do_it(char *str, char *sep, char **tab, int wc)
{
	int		i;
	int		y;
	int		w;
	char	temp[10000];

	w = 0;
	i = 0;
	while (w < wc)
	{
		y = 0;
		while (ft_sep(str[i], sep))
			i++;
		while (str[i] && !(ft_sep(str[i], sep)))
			temp[y++] = str[i++];
		temp[y] = 0;
		tab[w] = ft_strdup(temp);
		w++;
	}
	tab[w] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		wc;
	char	**tab;

	wc = ft_wc(str, charset);
	tab = (char **) malloc(sizeof(char *) * (wc + 1));
	if (!(tab))
		return (NULL);
	tab = just_do_it(str, charset, tab, wc);
	return (tab);
}
/*
#include <stdio.h>

void	ft_free(char **dest)
{
	int	y;

	y = 0;
	while (dest[y])
	{
		printf("%s\n", dest[y]);
		free(dest[y++]);
	}
	free(dest);
}

int	main(int argc, char *argv[])
{
	char	**dest;

	if (argc == 3)
	{
		dest = ft_split(argv[1], argv[2]);
		ft_free(dest);
	}
	return (0);
}
*/	
