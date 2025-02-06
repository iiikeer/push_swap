/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:04:30 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:20:49 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = first->next;
	last->next = first;
	first->next = NULL;
	first->prev = last;
}

void	ra(t_stack **a)
{
	if (*a && (*a)->next)
	{
		rotate(a);
		ft_printf("ra\n");
	}
}

void	rb(t_stack **b)
{
	if (*b && (*b)->next)
	{
		rotate(b);
		ft_printf("rb\n");
	}
}

void	rr(t_stack **a, t_stack **b)
{
	int	ra;
	int	rb;

	ra = 0;
	rb = 0;
	if (*a && (*a)->next)
	{
		ra = 1;
		rotate(a);
	}
	if (*b && (*b)->next)
	{
		rb = 1;
		rotate(b);
	}
	if (ra || rb)
		ft_printf("rr\n");
}
