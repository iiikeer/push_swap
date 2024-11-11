/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:36:44 by iullibar          #+#    #+#             */
/*   Updated: 2024/10/31 10:03:36 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stack_size(t_stack *a)
{
	int	size;

	size = 0;
	while (a != NULL)
	{
		size ++;
		a = a->next;
	}
	return (size);
}
