/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:49:54 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/10 19:41:31 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_builder(char *str, int arr[][4]);
int		ft_ulterror(char *argv);

void	ft_printarr(int arr[][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			k = arr[j][i] + 48;
			write(1, &k, 1);
			if (i < 3)
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
		i = 0;
	}
}

void	ft_demo(char *str)
{
	int	arr[4][4];

	ft_builder(str, arr);
	ft_printarr(arr);
}

int	ft_checkstr(char *ar)
{
	int	i;

	i = 0;
	while (ar[i] != '\0')
	{
		if (ar[i] > 4 || ar[i] < 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_error0(char *argv)
{
	int		i;
	int		j;
	char	arr[16];

	i = 10;
	j = 0;
	if (ft_ulterror(argv) == 1)
	{
		while (i < 41)
		{
			arr[j] = argv[i] - 48;
			j++;
			i += 2;
		}
		j = ft_checkstr(arr);
		if (j == 1)
			ft_demo(arr);
		else
		{
			write(2, "Error\n", 7);
		}
	}
	else
		write(2, "Error\n", 7);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(2, "Error\n", 6);
	else
		ft_error0(*argv);
	return (0);
}
