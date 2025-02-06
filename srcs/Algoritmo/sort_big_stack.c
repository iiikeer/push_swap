/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:40:21 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:20:19 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_big_stack(t_stack **a, t_stack **b)
{
	pb(a, b);
	pb(a, b);
	while (*a)
	{
		set_index(*a);
		set_index(*b);
		find_bplace(*a, *b);
		set_easy(*a, ft_stack_size(*a), ft_stack_size(*b));
		easy_to_top(a, b);
		pb(a, b);
	}
	set_index(*b);
	max_to_top(b);
	while (*b)
		pa(a, b);
}
