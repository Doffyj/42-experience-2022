/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:54:03 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/20 16:32:17 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*alt;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	alt = malloc(i * sizeof(src));
	while (j <= i)
	{
		alt[j] = src[j];
		j++;
	}
	alt[j] = '\0';
	return (alt);
}
