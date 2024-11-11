/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:05:13 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/01 15:19:16 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse(t_stack **stack)
{
	t_stack	*last;
	t_stack	*pre_last;

	last = *stack;
	pre_last = *stack;
	while (last->next)
		last = last->next;
	while (pre_last->next->next)
		pre_last = pre_last->next;
	pre_last->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	(*stack)->next->prev = *stack;
}

void	rra(t_stack **a)
{
	if (*a && (*a)->next)
	{
		reverse(a);
		ft_printf("rra\n");
	}
}

void	rrb(t_stack **b)
{
	if (*b && (*b)->next)
	{
		reverse(b);
		ft_printf("rrb\n");
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	int	rra;
	int	rrb;

	rra = 0;
	rrb = 0;
	if (*a && (*a)->next)
	{
		rra = 1;
		reverse(a);
	}
	if (*b && (*b)->next)
	{
		rrb = 1;
		reverse(b);
	}
	if (rra || rrb)
		ft_printf("rrr\n");
}
