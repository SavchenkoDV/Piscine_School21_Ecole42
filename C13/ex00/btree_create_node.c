/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 19:36:04 by buthor            #+#    #+#             */
/*   Updated: 2020/08/28 22:42:31 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *new_btree;

	new_btree = NULL;
	new_btree = malloc(sizeof(t_btree));
	if (new_btree == NULL)
		return (NULL);
	new_btree->left = NULL;
	new_btree->right = NULL;
	new_btree->item = item;
	return (new_btree);
}
