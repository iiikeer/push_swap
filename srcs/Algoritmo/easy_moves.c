/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:25:14 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:19:56 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	up(t_stack **a, t_stack **b, t_stack *easy)
{
	while ((*a)->indx != easy->indx || (*b)->indx != easy->bplace)
	{
		if ((*a)->indx != easy->indx && (*b)->indx != easy->bplace)
			rr(a, b);
		else if ((*a)->indx != easy->indx)
			ra(a);
		else if ((*b)->indx != easy->bplace)
			rb(b);
	}
}

void	up_down(t_stack **a, t_stack **b, t_stack *easy)
{
	while ((*a)->indx != easy->indx || (*b)->indx != easy->bplace)
	{
		if ((*a)->indx != easy->indx)
			ra(a);
		if ((*b)->indx != easy->bplace)
			rrb(b);
	}
}

void	down_up(t_stack **a, t_stack **b, t_stack *easy)
{
	while ((*a)->indx != easy->indx || (*b)->indx != easy->bplace)
	{
		if ((*a)->indx != easy->indx)
			rra(a);
		if ((*b)->indx != easy->bplace)
			rb(b);
	}
}

void	down(t_stack **a, t_stack **b, t_stack *easy)
{
	while ((*a)->indx != easy->indx || (*b)->indx != easy->bplace)
	{
		if ((*a)->indx != easy->indx && (*b)->indx != easy->bplace)
			rrr(a, b);
		else if ((*a)->indx != easy->indx)
			rra(a);
		else if ((*b)->indx != easy->bplace)
			rrb(b);
	}
}
