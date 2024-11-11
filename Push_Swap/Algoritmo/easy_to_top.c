/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:26:48 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/04 12:15:17 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	easy_to_top(t_stack **a, t_stack **b)
{
	t_stack	*easy;
	int		sizea;
	int		sizeb;
	int		halfa;
	int		halfb;

	easy = find_easy(*a);
	sizea = ft_stack_size(*a);
	sizeb = ft_stack_size(*b);
	halfa = sizea / 2;
	halfb = sizeb / 2;
	while ((*a)->indx != easy->indx || (*b)->indx != easy->bplace)
	{
		if (easy->indx <= halfa && easy->bplace <= halfb)
			up(a, b, easy);
		else if (easy->indx <= halfa && easy->bplace > halfb)
			up_down(a, b, easy);
		else if (easy->indx > halfa && easy->bplace <= halfb)
			down_up(a, b, easy);
		else
			down(a, b, easy);
	}
}
