/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:30:36 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/03 18:24:48 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int res;

	i = 1;
	res = 0;
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) <= 0)
			res = 1;
		else
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}
