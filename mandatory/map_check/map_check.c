/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 05:14:27 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/25 17:41:09 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) <= len)
		len = ft_strlen(s);
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		new_str[i] = s[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int	num_of_lines(char **av)
{
	t_map	m;

	m.i = 0;
	m.fd = open(av[1], O_RDONLY);
	while (1)
	{
		m.tmp = get_next_line(m.fd);
		free(m.tmp);
		if (!m.tmp)
			break ;
		m.i++;
	}
	return (close(m.fd), m.i);
}

char	**map_fill(char	**av)
{
	t_map	m;

	m.line = num_of_lines(av);
	m.map = (char **)malloc(sizeof(char *) * (m.line + 1));
	if (!m.map)
		return (NULL);
	m.fd = open (av[1], O_RDONLY);
	m.i = -1;
	while (++m.i < m.line)
		m.map[m.i] = get_next_line(m.fd);
	m.i = -1;
	while (++m.i < m.line - 1)
	{
		m.tmp2 = m.map[m.i];
		m.map[m.i] = ft_substr(m.tmp2, 0, ft_strlen(m.tmp2) - 1);
		free(m.tmp2);
	}
	m.i++;
	m.map[m.i] = NULL;
	if (!m.map)
		return (NULL);
	return (close(m.fd), m.map);
}

void	check_extention(char *av)
{
	size_t	i;

	i = ft_strlen(av);
	if (av[i - 1] == 'r' && av[i - 2] == 'e' \
		&& av[i - 3] == 'b' && av[i - 4] == '.')
	{
		return ;
	}
	else
	{
		write(1, "Extention error 404", 20);
		exit(1);
	}
}
