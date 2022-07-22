/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:57:03 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/20 16:11:29 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*myar;

	i = min;
	j = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	myar = malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		myar[j] = i;
		i++;
		j++;
	}
	*range = myar;
	return (max - min);
}
