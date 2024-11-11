/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:15:56 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/04 15:45:03 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_digit(char *argv)
{
	int	indx;

	indx = 0;
	if (argv[indx] == '+' || argv[indx] == '-')
		indx ++;
	while (argv[indx] != '\0')
	{
		if (!ft_isdigit(argv[indx]))
			return (0);
		indx ++;
	}
	return (1);
}
