/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:55:21 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/02 10:52:10 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char *dest;
	char source[] = "Chariot";
	char cont1[] = "Nada na verdade";
	
	char *src;
	char *destino;
	
	dest = cont1;
	src = source;
	
	destino = ft_strncpy(dest, src, 10);
	printf("--- %s ---",destino);
	return (0);
}
*/
