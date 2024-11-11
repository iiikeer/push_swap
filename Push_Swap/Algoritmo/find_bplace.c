/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bplace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:25:42 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/04 12:15:29 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	mid_place_nbr(int nbr, t_stack *b)
{
	int		indx;
	t_stack	*top;

	top = b;
	if (nbr > b->nbr && nbr < ft_last_node(b)->nbr)
		indx = b->indx;
	else
	{
		while (nbr > top->nbr && top != NULL)
			top = top->next;
		while (nbr < top->nbr && top != NULL
			&& ft_last_node(top)->indx != top->indx)
			top = top->next;
		indx = top->indx;
	}
	return (indx);
}

void	find_bplace(t_stack *a, t_stack *b)
{
	t_stack	*max;
	t_stack	*min;

	max = find_max(b);
	min = find_min(b);
	while (a != NULL)
	{
		if (a->nbr > max->nbr || a->nbr < min->nbr)
			a->bplace = max->indx;
		else
			a->bplace = mid_place_nbr(a->nbr, b);
		a = a->next;
	}
}
