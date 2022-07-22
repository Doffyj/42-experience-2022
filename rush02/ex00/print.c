/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:29:29 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/17 19:13:21 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_num(char **num, char **alpha, int i, int j)
{
	int	x;

	x = 0;
	while (ft_atoi(num[x]) != i)
		x++;
	ft_putstr(alpha[x]);
	if (j != 1)
		ft_putchar(' ');
}

void	ft_num(int i, int j)
{
	int		x;
	int		l;
	int		ls;
	char	**num;
	char	**alpha;

	l = ft_measure();
	ls = ft_lstring();
	x = 0;
	num = malloc(l * sizeof(char *));
	while (x < l)
	{
		num[x] = malloc(ls * sizeof(char));
		x++;
	}
	x = 0;
	alpha = malloc(l * sizeof(char *));
	while (x < l)
	{
		alpha[x] = malloc(ls * sizeof(char));
		x++;
	}
	ft_save_dict(num, alpha);
	ft_print_num(num, alpha, i, j);
}
