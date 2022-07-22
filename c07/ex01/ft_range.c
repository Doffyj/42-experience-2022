/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:27:46 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/20 16:29:41 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*j;
	int	i;
	int	k;
	int	l;

	if (max <= min)
		return (0);
	i = min;
	k = max;
	l = 0;
	j = (int *)malloc(sizeof(int) * ((max - min) + 1));
	while (i <= k)
	{
		j[l] = i;
		i++;
		l++;
	}
	return (j);
}
