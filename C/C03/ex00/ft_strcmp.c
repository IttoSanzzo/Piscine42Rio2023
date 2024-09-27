/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:10:32 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/03 16:31:15 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	primeira[] = "chariot";
	char	segunda[] = "chariot1";
	printf("--- %d ---", ft_strcmp(segunda, primeira));
}
*/
