/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:08:11 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/20 18:05:32 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_calc_maxln(char **strs, int sz)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	j = 0;
	max = 0;
	while (i < sz)
	{
		while (strs[i][j] != '\0')
			j++;
		if (j > max)
			max = j;
		j = 0;
		i++;
	}
	return (max);
}

void	ft_assign(int *i, int *j, int *k)
{
	*i = 0;
	*j = 0;
	*k = 0;
}

void	ft_topup(int *j, int *k)
{
	*j += 1;
	*k += 1;
}

void	ft_topup2(int *i, int *j)
{
	*j = 0;
	*i += 1;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		i;
	int		j;
	int		k;

	c = malloc(sizeof(char) * size * ft_calc_maxln(strs, size));
	ft_assign(&i, &j, &k);
	while (i < size)
	{
		if (strs[i][j] == '\0')
		{
			ft_topup2(&i, &j);
			while (sep[j] != '\0' && (i < size))
			{
				c[k] = sep[j];
				ft_topup(&j, &k);
			}
			j = 0;
		}
		c[k] = strs[i][j];
		ft_topup(&j, &k);
	}
	c[k - 1] = '\0';
	return (c);
}
