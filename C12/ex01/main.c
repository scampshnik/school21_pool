/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:13:18 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/04 13:29:28 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);

void	ft_print(t_list *elem)
{
	t_list	*list = elem;

	while (list != NULL)
	{
		printf("%s", list->data);
		list = list->next;
	}
    printf("\n");
}

int		main(void)
{
	t_list *elem = NULL;

    ft_list_push_front(&elem, "O!");
    ft_list_push_front(&elem, "L");
    ft_list_push_front(&elem, "L");
    ft_list_push_front(&elem, "E");
    ft_list_push_front(&elem, "H");
	ft_print(elem);
	return (0);
}
