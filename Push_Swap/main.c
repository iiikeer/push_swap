/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:57:32 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/13 16:10:05 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		indx;

	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		argv = split_argv(argv[1]);
		indx = 0;
		if (!argv)
			ft_error(&a, &b, argv, indx);
	}
	else
		indx = 1;
	a = NULL;
	b = NULL;
	if (!ft_check_argument(argv, indx))
		ft_error(&a, &b, argv, indx);
	push(&a, argv, indx);
	if (!a)
		ft_error(&a, &b, argv, indx);
	sort_stack(&a, &b);
	free_push_swap(&a, &b, argv, indx);
	return (0);
}
