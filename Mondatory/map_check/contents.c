/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contents.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:13:05 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/19 16:16:49 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_checking(char	**map)
{
	if (!rectungular(map) && !component(map) 
	&& imposters(map) && !checkone(map))
		return (1);
	return (0);
}