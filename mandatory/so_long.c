/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:18:21 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/22 17:12:18 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map	m;

	if (ac != 2)
	{
		write(2, "Number of arguments not valid", 29);
		return (1);
	}
	check_extention(av[1]);
	m.fd = open(av[1], O_RDONLY);
	if (m.fd == -1)
	{
		write(2, "File is not valid", 18);
		return (close(m.fd), 1);
	}
	m.map = map_fill(av);
	if (map_checking(m.map))
		mlx_start(m.map);
	return (0);
}
