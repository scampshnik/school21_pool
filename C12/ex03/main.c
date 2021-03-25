/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:37:07 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/04 20:00:23 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

t_list	*ft_list_last(t_list *begin_list);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	if (*begin_list)
	{
		list = ft_create_elem(data);
		list->next = *begin_list;
		*begin_list = list;
	}
	else
		*begin_list = ft_create_elem(data);
}

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
	ft_list_push_front(&elem, "K");
    ft_print(ft_list_last(elem));
	return (0);
}
