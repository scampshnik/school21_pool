/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:31:47 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/04 15:33:49 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		size;

	list = begin_list;
	size = 0;
	while (list != 0)
	{
		size++;
		list = list->next;
	}
	return (size);
}
