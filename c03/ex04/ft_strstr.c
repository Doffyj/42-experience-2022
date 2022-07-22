/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:29:23 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/14 16:11:30 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	k;

	k = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j])
	{
		k = 0;
		while (str[j + k] == to_find[k])
		{
			k++;
			if (to_find[k] == '\0')
				return (&str[j]);
		}
		j++;
	}
	return (0);
}
