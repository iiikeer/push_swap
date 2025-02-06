/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:58:10 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:20:17 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	set_index(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		size ++;
		stack->indx = size;
		stack = stack->next;
	}
}
