/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 23:32:23 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:37:03 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_node *node)
{
	t_node	*current;
	t_node	*tmp;

	current = node;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
