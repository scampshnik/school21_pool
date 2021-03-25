/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 08:38:45 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/27 18:03:23 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	int				res;

	res = 0;
	if (nb < 3)
		return (2);
	if ((nb % 2) == 0)
		nb++;
	i = 3;
	while (i * i <= (unsigned int)nb)
	{
		if ((nb % i) == 0)
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}
