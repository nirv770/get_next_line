/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nirvine <nirvine@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:40:10 by nirvine           #+#    #+#             */
/*   Updated: 2024/10/04 11:51:21 by nirvine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int			fd;
	char		*line;
	static int	i;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("line [%i] : %s\n", i++, line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
