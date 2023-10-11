/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:40:57 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/18 18:49:03 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_f_len(char **strings, int size, int sep_len)
{
	int	f_len;
	int	i;

	f_len = 0;
	i = 0;
	while (i < size)
	{
		f_len += ft_strlen(strings[i++]);
		f_len += sep_len;
	}
	f_len -= sep_len;
	return (f_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*string;
	char	*chan;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = ft_f_len(strs, size, ft_strlen(sep));
	string = (char *)malloc((full_len + 1) * sizeof(char));
	chan = string;
	if (!chan)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(chan, strs[i]);
		chan += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(chan, sep);
			chan += ft_strlen(sep);
		}
	}
	*chan = '\0';
	return (string);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**strs;
	char	*output;

	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 3 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[0] = "Bananas";
	strs[1] = "sao";
	strs[2] = "delicisas";
	output = ft_strjoin(3, strs, " ");
	printf("%s\n", output);
	free(strs);
	free(output);
}
*/
