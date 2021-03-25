/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:05:08 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/03 10:19:38 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 4096

void	ft_display(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = 1;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_error("Cannot read file.\n");
	else
	{
		while (ret > 0)
		{
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_error("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_error("Too many arguments.\n");
		return (1);
	}
	if (argc == 2)
		ft_display(argv[1]);
	return (0);
}
