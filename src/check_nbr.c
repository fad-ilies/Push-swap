/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifadhli <ifadhli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 02:55:52 by ifadhli           #+#    #+#             */
/*   Updated: 2025/04/23 21:36:15 by ifadhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nbr(t_node *node, char *str)
{
	int	value;

	if (!str || ft_valid_nbr(str))
	{
		ft_printf("Erreur sur %d", str);
		return (1);
	}
	value = ft_atoi(str);
	if (if_double(node))
		return (1);
	return (0);
}
