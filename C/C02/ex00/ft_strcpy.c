/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:27:35 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/02 19:27:33 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(){
	char inicio[] = "Chariot.";
//	char *src;
//	src = inicio;
	char destino[] = "Copiar aqui.";
	char *dest;
	printf("\nAntes da troca:\nInicio:  %s\nDestino: %s\n", inicio, destino);
    dest = ft_strcpy(destino, inicio);
	printf("\nDepois da troca:\n%s\n\n", dest);
	return (0);
}
*/
