/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:15:02 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/17 20:18:15 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_checkar(char *c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (c[i] != '\0')
	{
		j = 0;
		if (c[i] < '0' || c[i] > '9')
		{
			ft_putstr("Parameter Error\n");
			return (0);
		}
		i++;
	}
	if (j == 1)
		ft_putstr("Parameter Error\n");
	return (1);
}