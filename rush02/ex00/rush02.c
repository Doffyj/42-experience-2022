/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:29:29 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/17 19:45:59 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_expo2string(int i)
{
	char	c[50];
	int		j;
	int		k;

	k = 1;
	j = 0;
	c[0] = 1;
	while (j < i)
	{
		c[k] = '0';
		c[k + 1] = '0';
		c[k + 2] = '0';
		k += 3;
		j++;
	}
}

void	ft_int2string(int i)
{
	int		j;
	int		k;
	char	c[50];

	j = 0;
	k = 1;
	while (i >= 10 && i < 100)
	{
		j++;
		i = i / 10;
	}
	c[0] = i + '0';
	while (k <= j)
	{
		c[k] = '0';
		k++;
	}
}

void	ft_printn(char *c, int i, int j)
{
	if (c[i] == '1' && j % 3 == 2 && c[i + 1] != '0')
	{
		ft_num(((c[i] - 48) * 10) + c[i + 1] - 48, ft_is_end(c, i + 2));
	}
	if (j % 3 == 0 && c[i] != '0')
	{
		ft_num(c[i] - 48, j);
		ft_num(100, ft_is_end(c, i));
	}
	if (j % 3 == 1 && c[i] != '0' && c[i - 1] != '1')
		ft_num(c[i] - 48, ft_is_end(c, i));
	if (j % 3 == 2 && ((c[i] != '0' && c[i] != '1')
			|| (c[i] == '1' && c[i + 1] == '0')))
	{
		if (c[i + 1] == '0')
			ft_num((c[i] - 48) * 10, ft_is_end(c, i));
		else
			ft_num((c[i] - 48) * 10, ft_is_end(c, i));
	}
}

void	ft_calcexpo(int k, char *c, int i)
{
	int	a;
	int	b;
	int	j;

	a = 1000;
	b = k;
	while (b > 1)
	{
		a = a * 1000;
		b--;
	}
	b = i + 1;
	j = 1;
	while (c[b] != '\0')
	{
		if (c[b] != '0')
			j = 4;
		b++;
	}
	if (ft_is_end(c, i) == 1 && ((k > 0)))
		write(1, " ", 1);
	ft_num(a, j);
}

void	ft_str_printer(char *c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (c[j] != '\0')
		j++;
	if (j == 1 && c[0] == '0')
		ft_num(0, 0);
	k = (j - 1) / 3;
	while (c[i] != '\0')
	{
		ft_printn(c, i, j);
		if ((j % 3 == 1) && k > 0 && (c[i] != '0'
				|| c[i - 1] != '0' || c[i - 2] != '0'))
		{
			ft_calcexpo(k, c, i);
			k--;
		}
		else if (k != 0 && j % 3 == 1)
			k--;
		i++;
		j--;
	}
}
