/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_siz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:37:32 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:23:55 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*node_max(t_node **stack_a)
{
	long	max;
	t_node	*current;

	if (!*stack_a || !(*stack_a)->next)
		return (NULL);
	max = INT_MIN;
	while (stack_a)
	{
		if ((*stack_a)->value > max)
		{
			max = (*stack_a)->value;
			current = (*stack_a);
		}
		(*stack_a) = (*stack_a)->next;
	}
	return (current);
}

int	node_min(t_node **stack_a)
{
	int		min;
	t_node	*current;

	if (!*stack_a || !(*stack_a)->next)
		return (1);
	current = *stack_a;
	min = INT_MAX;
	while (current != NULL)
	{
		if (current->value < min)
			min = current->value;
		current = current->next;
	}
	return (min);
}
