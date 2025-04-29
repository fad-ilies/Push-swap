/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 01:42:54 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:23:41 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <limits.h>
# include <stdio.h>
# include <values.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

t_node				*new_node(int value);

void				add_node(t_node **stack, int value);
void				print_stack(t_node *stack);
void				swap(t_node **stack);
void				push(t_node **stack, t_node **stack_bis);
void				rotate(t_node **stack);
void				reverse_rotate(t_node **stack);
void				sa(t_node **stack_a);
void				sb(t_node **stack_b);
void				pa(t_node **stack_a, t_node **stack_b);
void				pb(t_node **stack_a, t_node **stack_b);
void				ra(t_node **stack_a);
void				rb(t_node **stack_b);
void				rr(t_node **stack_a, t_node **stack_b);
void				rra(t_node **stack_a);
void				rrb(t_node **stack_b);
void				rrr(t_node **stack_a, t_node **stack_b);
void				free_split(char **str);
void				free_stack(t_node *node);
void				get_index(t_node **stack_a);
void				sort_2(t_node **stack_a);
void				sort_3(t_node **stack_a);
void				sort_4(t_node **stack_a, t_node **stack_b);
void				sort_5(t_node **stack_a, t_node **stack_b);
void				radix_sort(t_node **stack_a, t_node **stack_b);

int					ft_valid_nbr(char *str);
int					if_double(t_node *node);
int					if_double(t_node *node);
int					if_its_just_space(char *av);
int					just_one_av(t_node **node, char **av);
int					check_nbr(t_node *node, char *str);
int					parse_args(t_node **node, int ac, char **av);
int					parse_one_arg(t_node **node, char *av);
int					ft_max_bits(t_node **stack_a);
int					stack_size(t_node **stack_a);
int					if_its_ok(t_node **stack_a);
int					node_min(t_node **stack_a);
int					is_sorted(t_node *stack);

#endif