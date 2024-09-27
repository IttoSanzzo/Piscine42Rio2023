/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:22:56 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/02 13:26:15 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		if (c < '0' || c > '9')
			return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[i] != '\0')
		str[i] = ft_upcase(str[i]);
	while (str[++i] != '\0')
	{
		if (!ft_alpha(str[i - 1]) && ft_alpha(str[i]))
			str[i] = ft_upcase(str[i]);
		else
			str[i] = ft_lowcase(str[i]);
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *teste;
	char cont[] = "charIOt";
	
	teste = cont;
	printf("%s", ft_strcapitalize(teste));
}
*/
