#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../so_long.h"

int num_of_lines(char **av)
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
int main()
{
	int fd;

	fd = fopen("ab.txt", O_CREAT | O_WRONLY);
}