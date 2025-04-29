/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 03:18:45 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/21 23:36:54 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_one_arg(t_node **node, char *av)
{
	int		i;
	char	**split;
	int		value;

	i = 0;
	split = ft_split(av, ' ');
	if (!split || if_its_just_space(av) == 1)
		return (ft_printf("Error\n"), free_split(split), 1);
	while (split[i])
	{
		if (ft_valid_nbr(split[i]) == 1)
			return (ft_printf("Error\n"), free_split(split), 1);
		value = ft_atoi(split[i]);
		add_node(node, value);
		i++;
	}
	if (if_double(*node))
		return (ft_printf("Error\n"), free_split(split), 1);
	free_split(split);
	return (0);
}

int	parse_args(t_node **node, int ac, char **av)
{
	int	i;
	int	value;

	i = 1;
	while (ac > i)
	{
		if (if_its_just_space(av[i]))
			return (ft_printf("Error\n"), 1);
		if (ft_valid_nbr(av[i]))
			return (ft_printf("Error\n"), 1);
		value = ft_atoi(av[i]);
		add_node(node, value);
		i++;
	}
	if (if_double(*node))
		return (ft_printf("Error\n"), 1);
	return (0);
}
