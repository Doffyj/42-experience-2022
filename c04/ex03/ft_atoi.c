/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:08:36 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/11 15:29:44 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checkchar(char *str, int i)
{
	if (str[i] <= 32)
		return (0);
	else if (str[i] == 43 | str[i] == 45)
		return (0);
	else if (str[i] >= 48 && str[i] <= 57)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 1;
	while (str[i] != '\0' && ft_checkchar(str, i) == 0)
	{
		if (str[i] == '-')
			k *= -1;
		if (str[i] >= 48 && str[i] <= 57)
		{
			j = (j * 10) + (str[i] - 48);
		}
		i++;
	}
	j *= k;
	return (j);
}
