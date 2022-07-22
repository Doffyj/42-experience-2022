/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:35:09 by aarrien-          #+#    #+#             */
/*   Updated: 2022/07/17 20:07:49 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_readnum(char c, int j, char **num, int fd)
{
	int	i;

	i = 0;
	while (c != ':' && c != ' ' && c != 9)
	{
		num[j][i++] = c;
		read(fd, &c, 1);
	}
}

void	ft_read_dict(char **num, char **alpha, int fd)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (read(fd, &c, 1))
	{
		while (c == '\n' || c == ' ' || c == 9)
			read(fd, &c, 1);
		if (c >= '0' && c <= '9')
		{
			ft_readnum(c, j, num, fd);
			i = 0;
		}
		else if (c != ' ' && c != ':' && c != 9)
		{
			alpha[j][i++] = c;
			while (read(fd, &c, 1) && c != '\n')
				alpha[j][i++] = c;
			i = 0;
			j++;
		}
	}
}

void	ft_save_dict(char **num, char **alpha)
{
	int		fd;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		ft_putstr("Error al abrir el archivo\n");
	else
		ft_read_dict(num, alpha, fd);
	close(fd);
}

int	ft_measure(void)
{
	int		fd;
	char	c;
	int		j;

	j = 1;
	fd = open("numbers.dict", O_RDONLY);
	read(fd, &c, 1);
	while (c == '\n' || c == ' ' || c == 9)
		read(fd, &c, 1);
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			j++;
		while (c == '\n' || c == ' ' || c == 9)
			read(fd, &c, 1);
	}
	close(fd);
	return (j);
}

int	ft_lstring(void)
{
	int		fd;
	char	c;
	int		ls0;
	int		ls1;

	ls0 = 0;
	ls1 = 0;
	fd = open("numbers.dict", O_RDONLY);
	while (read(fd, &c, 1))
	{
		ft_ls(c, fd, ls1, ls0);
	}
	return (ls0);
	close(fd);
}
