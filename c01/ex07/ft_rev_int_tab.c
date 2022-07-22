/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:18:47 by jonsanch          #+#    #+#             */
/*   Updated: 2022/06/30 18:19:06 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	size_mirror;
	int	temp;

	i = 0;
	size_mirror = size - 1;
	while (i <= (size / 2 + (size % 2)))
	{
		temp = tab[size_mirror];
		tab[size_mirror] = tab[i];
		tab[i] = temp;
		i++;
		size_mirror--;
	}
}
