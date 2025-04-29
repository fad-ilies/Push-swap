/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:39:22 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:16:38 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_bits(t_node **stack_a)
{
	t_node	*current;
	int		max;
	int		bits;

	bits = 0;
	current = *stack_a;
	max = current->index;
	while (current)
	{
		if (current->index > max)
			max = current->index;
		current = current->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

int	stack_size(t_node **stack_a)
{
	t_node	*current;
	int		i;

	current = *stack_a;
	i = 0;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*current;
	int		i;
	int		j;
	int		size;

	get_index(stack_a);
	current = *stack_a;
	i = 0;
	size = stack_size(stack_a);
	while (i < ft_max_bits(stack_a))
	{
		j = 0;
		while (j++ < size)
		{
			current = *stack_a;
			if (((current->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (stack_size(stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
