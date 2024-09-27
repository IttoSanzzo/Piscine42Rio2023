/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:45:21 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/18 15:59:51 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>
void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int	main(int argc, char *argv[])
{
	char	*teste;

	teste = ft_strdup(argv[1]);
	if (argc == 2)
		ft_putstr(teste);
	free(teste);
	return (0);
}
*/
