/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:42:55 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/27 17:59:44 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	res;

	res = 0;
	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (unsigned int)nb)
	{
		if (nb % i == 0)
			res += 1;
		i++;
	}
	if (res == 1)
		return (1);
	else
		return (0);
}
