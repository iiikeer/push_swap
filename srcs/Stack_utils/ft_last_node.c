/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:02:36 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:20:58 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*ft_last_node(t_stack *stack)
{
	while (stack->next != 0)
	{
		stack = stack->next;
	}
	return (stack);
}
