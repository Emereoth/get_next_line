/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 15:01:04 by acottier          #+#    #+#             */
/*   Updated: 2016/03/07 15:03:22 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main()
{
	char 	*line;
	int		out;
	int		p[2];
	int		fd;

	out = dup(1);
	pipe(p);

	fd = 1;
	dup2(p[1], fd);
	write(fd, "abcdefgh\n", 9);
	write(fd, "ijklmnop\n", 9);
	close(p[1]);
	dup2(out, fd);
	get_next_line(p[0], &line);
	get_next_line(p[0], &line);
}
