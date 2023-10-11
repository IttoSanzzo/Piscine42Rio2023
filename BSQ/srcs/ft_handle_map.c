/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:43:08 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/20 03:43:25 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_check_map_line_len(char **array_map)
{
	int	i;
	int	j;
	int	line_len;
	int	diff_len;

	i = 0;
	j = 0;
	line_len = 0;
	diff_len = 0;
	array_map++;
	while (array_map[i])
	{
		j = ft_strprintable_len(array_map[i]);
		if (line_len != j)
			diff_len++;
		line_len = j;
		j = 0;
		i++;
	}
	if (diff_len > 1)
		return (0);
	return (1);
}

int	ft_check_map_line_value(char **array_map, t_map map)
{
	int	i;
	int	j;
	int	line_count;

	i = 0;
	j = 0;
	line_count = ft_atoi(array_map[0]);
	array_map++;
	while (array_map[i])
	{
		while (ft_is_printable(array_map[i][j]))
		{
			if ((array_map[i][j] != map.empty && array_map[i][j] != map.obs))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	if (line_count != i)
		return (0);
	return (1);
}

int	ft_is_map_valid(char **array_map, t_map map)
{
	if (!ft_check_map_line_len(array_map)
		|| !ft_check_map_line_value(array_map, map))
		return (0);
	return (1);
}

void	ft_get_parameters(char *empty, char *obs, char *full, char *first_line)
{
	int	i;

	i = 0;
	while (ft_is_printable(first_line[i]))
		i++;
	i--;
	if (ft_is_printable(first_line[i]))
	{
		*full = first_line[i];
		i--;
	}
	if (ft_is_printable(first_line[i]))
	{
		*obs = first_line[i];
		i--;
	}
	if (ft_is_printable(first_line[i]))
	{
		*empty = first_line[i];
		i--;
	}
	if (!ft_is_number(first_line[i]))
		*full = 0;
}

t_map	ft_get_map(int argc, char *argv)
{
	t_map	map;
	char	**array_map;
	char	**only_map;

	if (!argc)
		array_map = ft_read_stdin();
	else
		array_map = ft_read_file(argv);
	if (!array_map)
	{
		map.is_valid = -1;
		return (map);
	}
	ft_get_parameters(&map.empty, &map.obs, &map.full, array_map[0]);
	map.is_valid = ft_is_map_valid(array_map, map);
	only_map = ft_copy(array_map + 1);
	map.matrix = only_map;
	if (!map.empty || !map.obs || !map.full)
		map.is_valid = 0;
	if (map.empty == map.obs || map.empty == map.full || map.full == map.obs)
		map.is_valid = 0;
	ft_free(array_map);
	return (map);
}
