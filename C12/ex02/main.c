/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:32:01 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/04 15:34:29 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
int		ft_list_size(t_list *begin_list);

int		main()
{
	t_list *list = NULL;
	int a;
	a = 0;
	list = malloc(sizeof(t_list));

	list->data = "dqw";
	list->next = malloc(sizeof(t_list));
	list->next->data = "dqdq";
	list->next->next = malloc(sizeof(t_list));
	list->next->next->data = "dqdq";
	list->next->next->next = NULL;

	a = ft_list_size(list);

	printf("%d\n", a);
}
