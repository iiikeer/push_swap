/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_easy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:51:24 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:20:15 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	set_easy(t_stack *a, int sizea, int sizeb)
{
	int	halfa;
	int	halfb;

	halfa = sizea / 2;
	halfb = sizeb / 2;
	while (a != NULL)
	{
		if (a->indx <= halfa && a->bplace <= halfb)
			a->easy = a->indx + a->bplace;
		else if (a->indx <= halfa && a->bplace > halfb)
			a->easy = a->indx + (sizeb - a->bplace);
		else if (a->indx > halfa && a->bplace <= halfb)
			a->easy = a->bplace + (sizea - a->indx);
		else
			a->easy = (sizea - a->indx) + (sizeb - a->bplace);
		a = a->next;
	}
}
