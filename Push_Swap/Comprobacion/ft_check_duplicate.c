/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:06:09 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/04 15:42:36 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_duplicate(char **argv, int indx)
{
	int	refc;

	while (argv[indx] != NULL)
	{
		if (*argv[indx] == '\0')
			return (0);
		refc = indx + 1;
		while (argv[refc] != NULL)
		{
			if (ft_atoi(argv[indx]) == ft_atoi(argv[refc]))
				return (0);
			refc ++;
		}
		indx ++;
	}
	return (1);
}
