/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:46:41 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/05 20:27:35 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *tree;

	tree = malloc(sizeof(t_btree));
	tree->item = item;
	tree->left = NULL;
	tree->right = NULL;
	return (tree);
}
