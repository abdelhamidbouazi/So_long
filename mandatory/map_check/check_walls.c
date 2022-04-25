/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:18:31 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/25 17:37:33 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	upline(char	**map)
{
	int	i;

	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	bottomline(char	**map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
		i++;
	while (map[i - 1][j])
	{
		if (map[i - 1][j] != '1')
			return (1);
		j++;
	}
	return (0);
}

int	leftline(char	**map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	rightline(char	**map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (map[i][ft_strlen(map[i]) - 1] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	checkone(char	**map)
{
	if (!upline(map) && !bottomline(map)
		&& !leftline(map) && !rightline(map))
		return (0);
	write(1, "not surronded by walls", 23);
	return (1);
}
