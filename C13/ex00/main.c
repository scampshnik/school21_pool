/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:48:07 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/05 19:35:08 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

t_btree *btree_create_node(void *item);

void	ft_print(t_btree *p)
{
	if (p != NULL)
	{
		ft_print(p->left);
		printf("%s\n", p->item);
		ft_print(p->right);
	}
}

int main()
{
  t_btree *root;

  root = btree_create_node("Hello!");
  ft_print(root);
  return (0);
}
