/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_to_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:10:33 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/01 15:16:27 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	max_to_top(t_stack **b)
{
	t_stack	*max;
	int		half;
	int		size;

	max = find_max(*b);
	size = ft_stack_size(*b);
	half = size / 2;
	if (max->indx <= half)
	{
		while (max->indx != (*b)->indx)
			rb(b);
	}
	if (max->indx > half)
	{
		while (max->indx != (*b)->indx)
			rrb(b);
	}
}
