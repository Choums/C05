/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 21:30:53 by caidel            #+#    #+#             */
/*   Updated: 2020/07/14 21:54:08 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (1)
		{
			if (ft_is_prime(nb))
				return (nb);
			nb++;
		}
	}
	return (0);
}
