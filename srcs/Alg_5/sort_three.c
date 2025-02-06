/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:25:53 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:19:51 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_three(t_stack **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->nbr;
	second = (*stack)->next->nbr;
	third = (*stack)->next->next->nbr;
	if (first > second && first > third && second > third)
	{
		ra(stack);
		sa(stack);
	}
	else if (first > second && first > third && third > second)
		ra(stack);
	else if (second > first && second > third && first > third)
		rra(stack);
	else if (second > first && second > third && third > first)
	{
		rra(stack);
		sa(stack);
	}
	else if (third > first && third > second && first > second)
		sa(stack);
}
