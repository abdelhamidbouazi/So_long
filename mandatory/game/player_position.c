/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:03:58 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/23 15:19:57 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	player_x(char	**map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

int	player_y(char	**map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				return (j);
			j++;
		}
		i++;
	}
	return (0);
}

int	player_move(int	key, void	*param)
{
	t_game	*g;
	
	g = (t_game *)param;
	g->x = player_x(g->map);
	g->y = player_y(g->map);
	if (key == W)
		move_up(g);
	else if (key == A)
		move_left(g);
	else if (key == S)
		move_down(g);
	else if (key == D)
		move_right(g);
	else if (key == ESC)
		you_left(g);
	return (0);
}