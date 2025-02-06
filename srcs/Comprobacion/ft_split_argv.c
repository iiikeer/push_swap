/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:45:16 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:20:41 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	**split_argv(char *argv)
{
	int		indx;
	char	*str;
	char	**split;

	indx = 0;
	str = malloc(ft_strlen(argv) + 1);
	if (!str)
		return (NULL);
	while (argv[indx] != '\0')
	{
		if (ft_isspace(argv[indx]))
			str[indx] = ' ';
		else
			str[indx] = argv[indx];
		indx ++;
	}
	str[indx] = '\0';
	split = ft_split(str, ' ');
	if (!split)
		return (NULL);
	free(str);
	return (split);
}
