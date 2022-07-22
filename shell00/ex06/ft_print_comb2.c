/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:18:52 by jonsanch          #+#    #+#             */
/*   Updated: 2022/06/29 18:04:23 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnums(int i, int j)
{
	int	k;
	int	l;

	k = i / 10;
	l = j / 10;
	ft_putchar(48 + k);
	ft_putchar(48 + (i - (k * 10)));
	ft_putchar(32);
	ft_putchar(48 + l);
	ft_putchar(48 + (j - (l * 10)));
	if (i != 98)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			ft_printnums(i, j);
			j++;
		}
		i++;
		j = i + 1;
	}
}
