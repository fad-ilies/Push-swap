/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:32:30 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:23:06 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_node **stack_a)
{
	t_node	*current;
	t_node	*comp;
	int		index;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	current = *stack_a;
	while (current)
	{
		index = 1;
		comp = *stack_a;
		while (comp)
		{
			if (current->value > comp->value)
				index++;
			comp = comp->next;
		}
		current->index = index;
		current = current->next;
	}
}
