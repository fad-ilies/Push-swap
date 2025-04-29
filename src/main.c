/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 22:03:28 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:37:24 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	add_node(t_node **stack, int value)
{
	t_node	*node;
	t_node	*current;

	node = new_node(value);
	if (!*stack)
		*stack = node;
	else
	{
		current = *stack;
		while (current->next)
			current = current->next;
		current->next = node;
	}
}

void	print_stack(t_node *stack)
{
	t_node	*current;

	current = stack;
	ft_printf("stack :");
	while (current)
	{
		ft_printf("%d", current->value);
		if (current->next)
			ft_printf("->");
		current = current->next;
	}
	ft_printf("\n");
}

void	sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	if (!if_its_ok(stack_a))
		return ;
	size = stack_size(stack_a);
	if (size == 2)
		sort_2(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		error;

	stack_a = NULL;
	stack_b = NULL;
	error = 0;
	if (ac < 2)
		return (1);
	if (ac == 2)
		error = parse_one_arg(&stack_a, av[1]);
	if (ac > 2)
		error = parse_args(&stack_a, ac, av);
	if (error)
	{
		free_stack(stack_a);
		return (1);
	}
	sort(&stack_a, &stack_b);
	free_stack(stack_a);
	return (0);
}
