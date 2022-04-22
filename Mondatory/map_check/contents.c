/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contents.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:13:05 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/22 13:35:12 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	rectungular(char	**map)
{
	t_map	data;
	
	data.len = ft_strlen(map[0]);
	data.i = 0;
	while (map[data.i])
	{
		if(data.len != ft_strlen(map[data.i]))
		{
			write(2, "not rectungular", 16);
			return (1);
		}
		data.i++;
	}
	return (0);
}

int	component(char	**map)
{
	t_map	content;

	content.i = 0;
	content.c = 0;
	content.e = 0;
	content.p = 0;
	while (map[content.i])
	{
		content.j = 0;
		while (map[content.i][content.j])
		{
		if (map[content.i][content.j] == 'C')
			content.c++;
		if (map[content.i][content.j] == 'E')
			content.e++;
		if (map[content.i][content.j] == 'P')
			content.p++;
		content.j++;
		}
		content.i++;
	}
	if (content.c > 0 && content.e > 0 && content.p == 1)
		return (0);
	write(2, "invalid content", 16);
	return (1);	
}

int	imposters(char	**map)
{
	t_map	char;
	
	char.i = 0;
	while (map[char.i])
	{
		char.j = 0;
		while (map[char.i][char.j])
		{
			if (map[char.i][char.j] != 'E' && map[char.i][char.j] != 'C'
				map[char.i][char.j] != '0' && ma[char.i][char.j] != '1'
				&& map[char.i][char.j] != 'P')
			{
				write(2, "invalid characters", 19);
				return (1);
			}
			char.j++;
		}
		char.i++;
	}
	return (0);
}

int	map_checking(char	**map)
{
	if (!rectungular(map) && !component(map)
		&& imposters(map) && !checkone(map))
		return (1);
	return (0);
}
