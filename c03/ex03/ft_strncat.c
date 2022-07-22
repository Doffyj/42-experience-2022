/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:40:45 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/07 18:32:07 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				n;
	unsigned int	m;

	n = 0;
	m = 0;
	while (dest[n] != '\0')
		n++;
	while (src[m] != '\0' && m < nb)
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	dest[n] = '\0';
	return (dest);
}
