/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 08:27:41 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/04 09:35:59 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_create_elem(void *data);

int	main(void)
{
	t_list *elem = NULL;
	char *s;
	elem = malloc(sizeof(t_list));
	s = "HELLO!";
	elem = ft_create_elem(s);
	printf("%s\n", elem->data);


}
