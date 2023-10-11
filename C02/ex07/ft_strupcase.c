/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:30:45 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/02 13:15:53 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += -32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *teste;
	char cont[] = "chariot";
	
	teste = cont;
	printf("%s", ft_strupcase(teste));
}
*/
