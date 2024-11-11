/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:12:28 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/05 09:17:26 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(t_stack **a, t_stack **b, char **argv, int indx)
{
	free_push_swap(a, b, argv, indx);
	ft_printf("Error\n");
	exit(0);
}
