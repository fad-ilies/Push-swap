/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 03:21:20 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:20:56 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_node **stack_a)
{
	t_node	*first;
	t_node	*seconde;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	seconde = (*stack_a)->next;
	if (first->value > seconde->value)
		sa(stack_a);
}

void	sort_3(t_node **stack_a)
{
	int	top;
	int	mid;
	int	last;

	top = (*stack_a)->value;
	mid = (*stack_a)->next->value;
	last = (*stack_a)->next->next->value;
	if (top > mid && top > last)
		ra(stack_a);
	else if (mid > top && mid > last)
		rra(stack_a);
	sort_2(stack_a);
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	int	top;
	int	mid;
	int	mid_bis;
	int	last;

	top = (*stack_a)->value;
	mid = (*stack_a)->next->value;
	mid_bis = (*stack_a)->next->next->value;
	last = (*stack_a)->next->next->next->value;
	if (top < mid && top < mid_bis && top < last)
		pb(stack_a, stack_b);
	else if (mid < top && mid < mid_bis && mid < last)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (mid_bis < top && mid_bis < mid && mid_bis < last)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	int	miiin;
	int	min;

	miiin = node_min(stack_a);
	while ((*stack_a)->value != miiin)
		ra(stack_a);
	pb(stack_a, stack_b);
	min = node_min(stack_a);
	while ((*stack_a)->value != min)
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

int	if_its_ok(t_node **stack_a)
{
	t_node	*current;

	current = *stack_a;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (1);
		current = current->next;
	}
	return (0);
}
