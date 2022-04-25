/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:20:52 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/25 00:21:40 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	coin_count(t_game	*g)
{
	g->count = 0;
	g->i = 0;
	while (g->map[g->i])
	{
		g->j = 0;
		while (g->map[g->i][g->j])
		{
			if (g->map[g->i][g->j] == 'C')
				g->count++;
			g->j++;
		}
		g->i++;
	}
	return (g->count);
}

void move_right(t_game *g)
{
	if (g->map[g->x][g->y + 1] != '1' && g->map[g->x][g->y + 1] != 'E')
	{
		g->map[g->x][g->y] = '0';
		g->map[g->x][g->y + 1] = 'P';
		g->num++;
		ft_printf("%d\n", g->num);
	}
	else if (g->map[g->x][g->y + 1] == 'E' && coin_count(g) == 0)
		you_win(g);
	if(coin_count(g) == 0)
		g->exit = mlx_xpm_file_to_image(g->mlx, "img/exit1.xpm", &g->width, &g->height);
	mlx_print(g);
}

void move_left(t_game *g)
{	
	if (g->map[g->x][g->y - 1] != '1' && g->map[g->x][g->y - 1] != 'E')
	{
		g->map[g->x][g->y] = '0';
		g->map[g->x][g->y - 1] = 'P';
		g->num++;
		ft_printf("%d\n", g->num);
	}
	else if (g->map[g->x][g->y - 1] == 'E' && coin_count(g) == 0)
		you_win(g);
	if (coin_count(g) == 0)
		g->exit = mlx_xpm_file_to_image(g->mlx, "img/exit1.xpm", &g->width, &g->height);
	mlx_print(g);

}
void move_up(t_game *g)
{	
	if (g->map[g->x - 1][g->y] != '1' && g->map[g->x - 1][g->y] != 'E')
	{
		g->map[g->x][g->y] = '0';
		g->map[g->x - 1][g->y] = 'P';
		g->num++;
		ft_printf("%d\n", g->num);
	}
	else if (g->map[g->x - 1][g->y] == 'E' && coin_count(g) == 0)
		you_win(g);
	if (coin_count(g) == 0)
		g->exit = mlx_xpm_file_to_image(g->mlx, "img/exit1.xpm", &g->width, &g->height);
	mlx_print(g);
}
void move_down(t_game *g)
{	
	if (g->map[g->x + 1][g->y] != '1' && g->map[g->x + 1][g->y] != 'E')
	{
		g->map[g->x][g->y] = '0';
		g->map[g->x + 1][g->y] = 'P';
		g->num++;
		ft_printf("%d\n", g->num);
	}
	else if (g->map[g->x + 1][g->y] == 'E' && coin_count(g) == 0)
		you_win(g);
	if (coin_count(g) == 0)
		g->exit = mlx_xpm_file_to_image(g->mlx, "img/exit1.xpm", &g->width, &g->height);
	mlx_print(g);
}