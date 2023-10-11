/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/03 23:40:47 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/04 03:23:46 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <ft.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -sign;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			nbr = nbr * 10 + (*str++ - 48);
		else
			return (0);
	}
	return (nbr * sign);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i]) && i < n)
		i++;
	return (s1[i] - s2[i]);
}

int	ft_isnum(char *str)
{
	while (*str)
	{
		if (!((*str >= '0' && *str <= '9')
				|| (*str == '-' || *str == '+')))
			return (0);
		str++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(OTP, &*str++, 1);
}
