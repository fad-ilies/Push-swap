/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 02:59:30 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:36:31 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_double(t_node *node)
{
	t_node	*current;
	t_node	*i;

	current = node;
	while (current)
	{
		i = current->next;
		while (i)
		{
			if (current->value == i->value)
				return (1);
			i = i->next;
		}
		current = current->next;
	}
	return (0);
}
