/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:27:02 by iullibar          #+#    #+#             */
/*   Updated: 2024/10/28 16:47:55 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_four(t_stack **a, t_stack **b)
{
	t_stack	*second;
	int		top_b;

	pb(a, b);
	sort_three(a);
	second = (*a)->next;
	top_b = (*b)->nbr;
	if (top_b > second->nbr && top_b > second->next->nbr)
	{
		pa(a, b);
		ra(a);
	}
	else if (top_b > second->nbr && second->next->nbr > top_b)
	{
		rra(a);
		pa(a, b);
		ra(a);
		ra(a);
	}
	else if (top_b < second->nbr)
	{
		pa(a, b);
		if ((*a)->nbr > (*a)->next->nbr)
			sa(a);
	}
}
