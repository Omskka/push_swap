/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:59:40 by okirca            #+#    #+#             */
/*   Updated: 2023/05/23 17:10:55 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct stack{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

int			ft_lessthanpivot(t_stack *stack, int pivot);
void		ft_checker(const char *argv);
void		ft_dup(int argc, char **argv);
void		ft_alreadysorted(int argc, char **argv);
void		ft_quicksort_a(t_stack *stack, int size, int *arr);
void		ft_quicksort_b(t_stack *stack);
void		ft_quicksort_c(t_stack *stack, int size, int *arr);
void		ft_quicksort_d(t_stack *stack);
int			*ft_pushswap(int argc, int *arr, int ctl);
int			ft_stacksorted(t_stack *stack);
int			ft_median(int *arr, int size);
void		ft_error(void);
void		ft_three_a2(t_stack *stack);
void		ft_three_b2(t_stack *stack);
void		ft_base_case_a2(t_stack *stack);
void		ft_base_case_b2(t_stack *stack);
void		three_a(t_stack *stack);
void		three_b(t_stack *stack);
void		base_case_a(t_stack *stack);
void		base_case_b(t_stack *stack);
void		ft_revpush(t_stack *stack);
int			ft_max(int *arr);
char		*ft_conc_values(char **av);
void		sa(t_stack	*stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);
void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);

#endif