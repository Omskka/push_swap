/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <<okirca@student.42.fr>>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:08:33 by okirca            #+#    #+#             */
/*   Updated: 2023/03/16 15:35:43 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa(t_stack	*stack)
{
	int	tmp;

	write (1, "sa\n", 3);
	if (stack -> size_a <= 1)
		return ;
	tmp = stack -> a[stack->size_a];
	stack -> a[stack->size_a] = stack -> a[stack->size_a - 1];
	stack -> a[stack->size_a - 1] = tmp;
}

void	sb(t_stack *stack)
{
	int	tmp;

	write(1, "sb\n", 3);
	if (stack -> size_b <= 1)
		return ;
	tmp = stack -> b[stack->size_b];
	stack -> b[stack->size_b] = stack -> b[stack->size_b - 1];
	stack -> b[stack->size_b -1] = tmp;
}

void	ss(t_stack *stack)
{
	int	tmp;

	if (stack -> size_a >= 2)
	{
		tmp = stack -> a[0];
		stack -> a[0] = stack -> a[1];
		stack -> a[1] = tmp;
	}
	if (stack -> size_b >= 2)
	{
		tmp = stack -> b[0];
		stack -> b[0] = stack -> b[1];
		stack -> b[1] = tmp;
	}
	write (1, "ss\n", 3);
}
