/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arguement.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:07:46 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/04 15:44:13 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_argument(char **argv, int indx)
{
	int			refc;
	long int	nbr;

	refc = indx;
	while (argv[indx] != NULL)
	{
		if (!ft_check_digit(argv[indx]))
			return (0);
		nbr = ft_atol(argv[indx]);
		if (!ft_check_limits(nbr))
			return (0);
		indx ++;
	}
	if (!ft_check_duplicate(argv, refc))
		return (0);
	return (1);
}
