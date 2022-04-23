/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:32:27 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/23 15:46:43 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_exit(t_game	*g)
{
	write(1, "you quit!\n", 11);
	ft_free(g);
	exit(0);
}

int	you_win(t_game	*g)
{
	write(1, "you win!\n", 10);
	ft_free(g);
	exit(0);
}

int	you_lost(t_game	*g)
{
	write(1, "you lost!\n", 11);
	ft_free(g);
	exit(0);
}

int	you_left(t_game	*g)
{
	write(1, "you left!\n", 11);
	ft_free(g);
	exit(0);
}

void	ft_free(t_game	*g)
{
	int	i;

	i = 0;
	mlx_destroy_image(g->mlx, g->coll);
	mlx_destroy_image(g->mlx, g->back);
	mlx_destroy_image(g->mlx, g->exit);
	mlx_destroy_image(g->mlx, g->play);
	mlx_destroy_image(g->mlx, g->wall);
	while (g->map[i])
	{
		free(g->map[i]);
		i++;
	}
	free(g->map);
}
