/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:27:45 by iullibar          #+#    #+#             */
/*   Updated: 2024/10/29 16:34:19 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_back(t_stack **stack, t_stack *new)
{
	if (stack)
	{
		if (!*stack)
			*stack = new;
		else
			ft_last_node(*stack)->next = new;
	}
}
