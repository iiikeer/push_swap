/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:02:20 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:19:25 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_five(t_stack **a, t_stack **b)
{
	pb(a, b);
	sort_four(a, b);
	if ((*b)->nbr < (*a)->next->nbr || (*b)->nbr > (*a)->next->next->next->nbr)
	{
		pa(a, b);
		if ((*a)->nbr > (*a)->next->next->next->next->nbr)
			ra(a);
		else if ((*a)->nbr > (*a)->next->nbr)
			sa(a);
	}
	else if ((*b)->nbr > (*a)->next->nbr && (*b)->nbr < (*a)->next->next->nbr)
	{
		ra(a);
		pa(a, b);
		sa(a);
		rra(a);
	}
	else if ((*b)->nbr > (*a)->next->next->nbr
		&& (*b)->nbr < (*a)->next->next->next->nbr)
	{
		rra(a);
		pa(a, b);
		ra(a);
		ra(a);
	}
}
