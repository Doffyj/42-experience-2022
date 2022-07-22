/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:48:06 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/14 16:06:51 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_characount(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sz;

	i = ft_characount(dest);
	j = 0;
	if (i >= size)
		sz = ft_characount(src) + size;
	else
		sz = ft_characount(src) + i;
	while (i + 1 < size && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sz);
}
