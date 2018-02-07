/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibenoit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 18:46:37 by pibenoit          #+#    #+#             */
/*   Updated: 2016/03/04 13:40:24 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../get_next_line.h"
#include "../libft/libft.h"

void		ft_readi(int fd)
{
	char	*line;
	int		r;

	fd = 0;
	while ((r = get_next_line(fd, &line)) > 0)
	{
		printf("%d - |%s| ", r, line);
		printf("\n");
		line = 0;
		free(line);
	}
	printf("LAST %d - |%s|\n", r, line);
}

int			main(int ac, char **av)
{
	int		fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		ft_readi(fd);
	}
	else
		ft_readi(0);
	return (0);
}
