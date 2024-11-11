/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:36:33 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/05 09:15:11 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_push_swap(t_stack **a, t_stack **b, char **argv, int indx)
{
	t_stack	*temp;
	int		i;

	i = 0;
	while ((*a) != NULL)
	{
		temp = (*a);
		(*a) = (*a)->next;
		free(temp);
	}
	while ((*b) != NULL)
	{
		temp = (*b);
		(*b) = (*b)->next;
		free(temp);
	}
	if (indx == 1)
		return ;
	while (argv[i] != 0)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	argv = NULL;
}
