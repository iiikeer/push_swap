/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:20:44 by iullibar          #+#    #+#             */
/*   Updated: 2024/10/29 16:25:00 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*find_min(t_stack *stack)
{
	t_stack	*min;

	min = stack;
	while (stack != NULL)
	{
		if (stack->nbr < min->nbr)
			min = stack;
		stack = stack->next;
	}
	return (min);
}
