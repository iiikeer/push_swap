/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:14:23 by iullibar          #+#    #+#             */
/*   Updated: 2025/02/06 09:05:32 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

//Verificacion y Conversion de Caracteres
int			ft_isdigit(int c);
int			ft_toupper(int c);
int			ft_isspace(int c);

//Manipulacion de Memoria
void		ft_free(char **array, int j);

//Manipulacion de Cadenas
size_t		ft_strlen(const char *str);
char		**ft_split(char const *s, char c);

//Conversion de Datos
int			ft_atoi(const char *str);
long int	ft_atol(const char *str);

//Printf
int			ft_printf(char const *str, ...);
int			ft_switch_case(va_list args, const char c);
int			ft_printf_char(char c);
int			ft_printf_str(char *str);
int			ft_printf_pnt(unsigned long long int ptr);
int			ft_printf_nbr(int nbr);
int			ft_printf_uns(unsigned int nbr);
int			ft_printf_hex(unsigned int nbr, int upper);

#endif
