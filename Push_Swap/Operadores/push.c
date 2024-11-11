/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:04:17 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/05 09:15:25 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*top_b;

	if (*b)
	{
		top_b = *b;
		*b = top_b->next;
		if (*b)
			(*b)->prev = NULL;
		top_b->next = *a;
		if (*a)
			(*a)->prev = top_b;
		top_b->prev = NULL;
		*a = top_b;
		ft_printf("pa\n");
	}
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*top_a;

	if (*a)
	{
		top_a = *a;
		*a = top_a->next;
		if (*a)
			(*a)->prev = NULL;
		top_a->next = *b;
		if (*b)
			(*b)->prev = top_a;
		top_a->prev = NULL;
		*b = top_a;
		ft_printf("pb\n");
	}
}

void	push(t_stack **stack, char **argv, int indx)
{
	t_stack	*new;

	while (argv[indx] != NULL)
	{
		new = ft_stacknew(ft_atoi(argv[indx]));
		if (!new)
			return ;
		ft_add_back(stack, new);
		indx ++;
	}
}
