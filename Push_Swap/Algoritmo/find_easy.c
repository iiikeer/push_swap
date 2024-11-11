/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_easy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:28:21 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/04 11:14:17 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*find_easy(t_stack *stack)
{
	t_stack	*easy;

	easy = stack;
	while (stack != NULL)
	{
		if (stack->easy < easy->easy)
			easy = stack;
		stack = stack->next;
	}
	return (easy);
}
