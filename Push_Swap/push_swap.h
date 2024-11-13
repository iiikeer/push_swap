/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:37:59 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/05 09:16:26 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_stack
{
	int				nbr;
	int				indx;
	int				bplace;
	int				easy;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//OPERACIONES
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

//ALGORITMOS CORTOS
void	sort_three(t_stack **stack);
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);

//ALGORITMO
void	sort_stack(t_stack **a, t_stack **b);
void	sort_big_stack(t_stack **a, t_stack **b);
t_stack	*find_max(t_stack *stack);
t_stack	*find_min(t_stack *stack);
t_stack	*find_easy(t_stack *stack);
void	find_bplace(t_stack *a, t_stack *b);
void	max_to_top(t_stack **b);
void	set_easy(t_stack *a, int sizea, int sizeb);
void	set_index(t_stack *stack);
void	easy_to_top(t_stack **a, t_stack **b);
void	up(t_stack **a, t_stack **b, t_stack *easy);
void	up_down(t_stack **a, t_stack **b, t_stack *easy);
void	down_up(t_stack **a, t_stack **b, t_stack *easy);
void	down(t_stack **a, t_stack **b, t_stack *easy);

//VALIDACION DE ARGUMENTOS
char	**split_argv(char *argv);
int		ft_check_digit(char *argv);
int		ft_check_limits(long int nbr);
int		ft_check_duplicate(char **argv, int indx);
int		ft_check_argument(char **argv, int indx);
int		check_sorted(t_stack *a);

//UTILS
t_stack	*ft_stacknew(int nbr);
t_stack	*ft_last_node(t_stack *stack);
int		ft_stack_size(t_stack *a);
void	ft_add_back(t_stack **stack, t_stack *new);
void	push(t_stack **stack, char **argv, int indx);
void	ft_error(t_stack **a, t_stack **b, char **argv, int indx);
void	free_push_swap(t_stack **a, t_stack **b, char **argv, int indx);

#endif
