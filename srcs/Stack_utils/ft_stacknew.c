/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:11:47 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:21:04 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*ft_stacknew(int nbr)
{
	static int	indx;
	t_stack		*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (0);
	new->nbr = nbr;
	new->indx = indx;
	new->bplace = 0;
	new->easy = 1;
	new->next = NULL;
	new->prev = NULL;
	indx ++;
	return (new);
}
