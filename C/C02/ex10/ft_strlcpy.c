/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:29:04 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/02 13:45:01 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (*(str + ++i))
		;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	if (size == 0)
		return (ft_strlen(src));
	len = 0;
	while (size > 1 && *src)
	{
		*dest = *src;
		++dest;
		++src;
		--size;
		++len;
	}
	*dest = 0;
	while ((*dest || *src) && *src)
	{
		++src;
		++len;
	}
	return (len);
}
/*
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int main(){
	char	destino[] = "String a se trocar.";
	char	*dest;
	dest = destino;

	char	inicio[] = "Essa é a string que deverá aparecer.";
	char	*src;
	src = inicio;

	unsigned int valt;


	printf("\n\nAntes da troca:\n");
	printf("Destino: %s\n", destino);
	printf("Source:  %s\n\n", inicio);
	valt = ft_strlcpy(dest, src, 14);
	printf("Depois da troca:\n");
	printf("Destino: %s\n", destino);
	printf("Source:  %s\n\n", inicio);
	printf("Returno: %d\n", valt);

	ft_strlcpy(dest, src, 13);
	return (0);
}
*/
