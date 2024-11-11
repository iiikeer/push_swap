/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:41:02 by iullibar          #+#    #+#             */
/*   Updated: 2024/10/29 16:55:22 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_int_tab(char **argv, int indx, int size)
{
	int	sw;
	int	co;

	co = indx;
	while (co < (size - 1))
	{
		if (ft_atoi(argv[co]) > ft_atoi(argv[co + 1]))
		{
			sw = ft_atoi(argv[co]);
			argv[co] = argv[co + 1];
			argv[co + 1] = ft_itoa(sw);
			co = indx;
		}
		else
			co++;
	}
}
