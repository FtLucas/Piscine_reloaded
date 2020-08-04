/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 07:13:28 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/07 22:54:50 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int		ft_display_file(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	if (ac == 1)
		write(1, "File name missing.\n", 19);
	if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (0);
		else
			while ((ret = read(fd, buff, BUFF_SIZE)))
				write(1, buff, ret);
	}
	return (0);
}

int		main(int ac, char **av)
{
	ft_display_file(ac, av);
	return (0);
}
