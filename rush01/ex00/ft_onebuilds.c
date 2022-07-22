/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onebuilds.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:40:36 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/10 19:16:30 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "onebuilds.h"

void	ft_top1build(char	*str, int arr[][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (str[i] == 0)
		{
			arr[0][i + 1] = 4;
		}
	i++;
	}
}

void	ft_bot1build(char	*str, int arr[][4])
{
	int	i;

	i = 4;
	while (i < 8)
	{
		if (str[i] == 0)
		{
			arr[3][i - 4] = 4;
		}
	i++;
	}
}

void	ft_left1build(char	*str, int arr[][4])
{
	int	i;

	i = 8;
	while (i < 12)
	{
		if (str[i] == 0)
		{
			arr[0][i - 8] = 4;
		}
	i++;
	}
}

void	ft_right1build(char	*str, int arr[][4])
{
	int	i;

	i = 12;
	while (i < 16)
	{
		if (str[i] == 0)
		{
			arr[i - 12][3] = 4;
		}
	i++;
	}
}

void	ft_onebuild(char *str, int arr[][4])
{
	ft_top1build(str, arr);
	ft_bot1build(str, arr);
	ft_left1build(str, arr);
	ft_right1build(str, arr);
}
