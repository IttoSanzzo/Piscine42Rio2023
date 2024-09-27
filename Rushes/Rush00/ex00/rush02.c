/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:25:17 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/03 10:39:02 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int l, int a)
{
	int	lc;
	int	ac;

	ac = 1;
	while (ac <= a && (l > 0 && a > 0))
	{
		lc = 1;
		while (lc <= l)
		{
			if ((ac == 1 && lc == 1) || (ac == 1 && lc == l))
				ft_putchar('A');
			else if ((ac == a && lc == 1) || (ac == a && lc == l))
				ft_putchar('C');
			else if ((ac > 1 && ac < a) && (lc == 1 || lc == l))
				ft_putchar('B');
			else if (lc == 1 || lc == l || ac == 1 || ac == a)
				ft_putchar('B');
			else
				ft_putchar(' ');
			lc++;
		}
		ft_putchar('\n');
		ac++;
	}
}
