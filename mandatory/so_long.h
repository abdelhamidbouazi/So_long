/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:18:24 by abouazi           #+#    #+#             */
/*   Updated: 2022/04/23 16:22:06 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define A 0
# define S 1
# define D 2
# define W 13
# define ESC 53

# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_map {
	
	int		fd;
	int		i;
	char	*tmp;
	char	*tmp2;
	char	line;
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
	int		x;
	int		y;
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
int		player_move(int	key, void	*param);
int		player_y(char	**map);
int		player_x(char	**map);
int		coin_count(t_game	*g);
int		ft_exit(t_game	*g);
int		you_win(t_game	*g);
void	ft_free(t_game	*g);
int		you_lost(t_game	*g);
int		you_left(t_game	*g);
void	ft_free(t_game	*g);
void 	move_right(t_game *g);
void 	move_left(t_game *g);
void 	move_up(t_game *g);
void 	move_down(t_game *g);
int		coin_count(t_game	*g);
char	*ft_strchr(const char *s, int c);
void	ft_strcpy(char *dst, const char *src);
void	ft_bzero(char *s, size_t n);

#endif