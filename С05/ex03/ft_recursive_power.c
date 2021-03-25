/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:25:45 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/26 17:36:43 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
    if (nb == -1)
    {
        if (power % 2 == 0)
            return (1);
        return (-1);
    }
    if (nb == 1)
        return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
