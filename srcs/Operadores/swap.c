/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:04:06 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:20:52 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	first = *stack;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	*stack = second;
}

void	sa(t_stack **a)
{
	if (*a && (*a)->next)
	{
		swap(a);
		ft_printf("sa\n");
	}
}

void	sb(t_stack **b)
{
	if (*b && (*b)->next)
	{
		swap(b);
		ft_printf("sb\n");
	}
}

void	ss(t_stack **a, t_stack **b)
{
	int	sa;
	int	sb;

	sa = 0;
	sb = 0;
	if (*a && (*a)->next)
	{
		sa = 1;
		swap(a);
	}
	if (*b && (*b)->next)
	{
		sb = 1;
		swap(b);
	}
	if (sa || sb)
		ft_printf("ss\n");
}
