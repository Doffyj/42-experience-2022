/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fourbuilds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:06:09 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/10 19:54:15 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fourbuilds.h"

void	ft_top4build(char	*str, int arr[][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (str[i] == 4)
		{
			arr[0][i] = 1;
			arr[1][i] = 2;
			arr[2][i] = 3;
			arr[3][i] = 4;
		}
	i++;
	}
}

void	ft_bot4build(char	*str, int arr[][4])
{
	int	i;

	i = 4;
	while (i < 8)
	{
		if (str[i] == 4)
		{
			arr[i - 4][3] = 1;
			arr[i - 4][2] = 2;
			arr[i - 4][1] = 3;
			arr[i - 4][0] = 4;
		}
	i++;
	}
}

void	ft_right4build(char	*str, int arr[][4])
{
	int	i;

	i = 8;
	while (i < 12)
	{
		if (str[i] == 4)
		{
			arr[i - 8][3] = 4;
			arr[i - 8][2] = 3;
			arr[i - 8][1] = 2;
			arr[i - 8][0] = 1;
		}
	i++;
	}
}

void	ft_left4build(char	*str, int arr[][4])
{
	int	i;

	i = 12;
	while (i < 16)
	{
		if (str[i] == 4)
		{
			arr[i - 12][3] = 1;
			arr[i - 12][2] = 2;
			arr[i - 12][1] = 3;
			arr[i - 12][0] = 4;
		}
	i++;
	}
}

void	ft_fourbuild(char *str, int arr[][4])
{
	ft_top4build(str, arr);
	ft_bot4build(str, arr);
	ft_right4build(str, arr);
	ft_left4build(str, arr);
}
