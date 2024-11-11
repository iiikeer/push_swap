/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:20:51 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/01 15:16:06 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*find_max(t_stack *stack)
{
	t_stack	*max;

	max = stack;
	while (stack != NULL)
	{
		if (stack->nbr > max->nbr)
			max = stack;
		stack = stack->next;
	}
	return (max);
}