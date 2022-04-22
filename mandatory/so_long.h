/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:18:24 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/22 17:23:04 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_map {
	
	int		fd;
	int		i;
	int		tmp;
	int		tmp2;
	int		line;
	char	**map;
	size_t	len;
	int		c;
	int		e;
	int		p;
	int		j;
	
	
}				t_map;

typedef struct s_game {
	
	void	*mlx;
	int		j;
	int		i;
	int		len;
	int		count;
	void	*wall;
	void	*back;
	void	*play;
	void	*coll;
	void	*exit;
	int		num;
	char	**map;
	int		width;
	int		height;
	void	*mlx_win;
}				t_game;

void	check_extention(char	*av);
char	**map_fill(char	**av);
int 	num_of_lines(char **av);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_read(char *leftxt, int fd);
char	*ft_get_line(char	*leftxt);
char	*get_next_line(int fd);
char	*ft_stock(char *leftxt);
int		rectungular(char	**map);
int		component(char	**map);
int		imposters(char	**map);
int		map_checking(char	**map);
int		upline(char	**map);
int		bottomline(char	**map);
int		leftline(char	**map);
int		rightline(char	**map);
int		checkone(char	**map);
int		lines(char	**map);
void 	mlx_print(t_game *g);
void	mlx_start(char	**map);

#endif