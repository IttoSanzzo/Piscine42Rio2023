/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:46:35 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/03 13:09:50 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (src[b])
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
	ft_strcat(destino, source);
	printf("-- Resultado gerado :%s", destino);
}
*/
