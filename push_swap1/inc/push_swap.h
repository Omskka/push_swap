/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:59:40 by okirca            #+#    #+#             */
/*   Updated: 2023/03/06 18:35:57 by okirca           ###   ########.fr       */
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

void		ft_checker(const char *argv);
void		ft_dup(int argc, char **argv);
void		ft_error(void);
void		sa(t_stack	*stack);
void		ss(t_stack *stack);
void		pa(t_stack *stack);
void		pb(t_stack *stack);

#endif