/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:29:29 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/17 20:15:56 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_read(int a, int b, char c, int fd)
{
	while (read(fd, &c, 1))
	{
		while (c == '\n' || c == ' ' || c == 9)
			read(fd, &c, 1);
		if (c >= '0' && c <= '9')
		{
			while (c != ':' && c != ' ' && c != 9)
				read(fd, &c, 1);
			a++;
		}
		else if (c != ' ' && c != ':' && c != 9)
		{
			b++;
			while (read(fd, &c, 1) && c != '\n')
			{
			}
		}
	}
	close(fd);
	if (a == b)
		return (0);
	else
		return (1);
}

int	ft_check_dict(char *str)
{
	int		fd;
	char	c;
	int		a;
	int		b;
	int		i;

	a = 0;
	b = 0;
	fd = open("numbers.dict", O_RDONLY);
	i = ft_check_read(a, b, c, fd);
	return (i);
}

int	ft_check_num_in(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		ft_putstr("Parameter Error\n");
	else
	{
		if ((argc < 2 || argc > 3) || (ft_checkar(argv[argc - 1]) == 0))
			return (0);
		if (ft_check_num_in(argv[argc - 1]) == 1)
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (argc == 3)
		{
			if (ft_check_dict(argv[1]) == 1)
			{
				ft_putstr("Dict Error\n");
				return (0);
			}
		}
		ft_str_printer(argv[argc - 1]);
	}
	return (0);
}
