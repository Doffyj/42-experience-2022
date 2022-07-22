/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:34:33 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/10 19:53:41 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sidecount(char *arg)
{
	int	i;
	int	k;
	int	sum;

	i = 10;
	k = 0;
	while (i < 41)
	{
		sum = 0;
		while (k < 4)
		{
			sum = sum + arg[i] - 48;
			i += 2;
			k++;
		}
		if (sum > 10 || sum < 7)
			return (0);
		k = 0;
	}
	return (1);
}

int	ft_ulterror(char *argv)
{
	int		i;

	i = 11;
	while (i < 41)
	{
		if (argv[i] != ' ')
			return (0);
		i += 2;
	}
	if (ft_sidecount(argv) == 0)
		return (0);
	return (1);
}
