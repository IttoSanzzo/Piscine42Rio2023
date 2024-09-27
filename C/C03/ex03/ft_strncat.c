/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:46:35 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/03 14:19:58 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[b]) && b < nb)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	source[] = "colado aqui";
	char	destino[101] = "Sera ";
	printf("-- Primeira original : %s\n", destino);
	printf("-- Segunda original : %s\n\n", source);
	ft_strncat(destino, source, 8);
	printf("-- Resultado gerado :%s", destino);
}
*/
