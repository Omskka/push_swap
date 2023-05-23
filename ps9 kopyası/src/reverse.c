/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <<okirca@student.42.fr>>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:15:12 by okirca            #+#    #+#             */
/*   Updated: 2023/04/25 13:59:18 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack -> a[0];
	while (i < stack -> size_a)
	{
		stack -> a[i] = stack -> a[i + 1];
		i++;
	}
	stack->a[stack -> size_a] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack -> b[0];
	while (i < stack -> size_b)
	{
		stack -> b[i] = stack -> b[i + 1];
		i++;
	}
	stack -> b[stack -> size_b] = tmp;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack -> a[0];
	while (i < stack -> size_a)
	{
		stack -> a[i] = stack -> a[i + 1];
		i++;
	}
	stack->a[stack -> size_a] = tmp;
	i = 0;
	tmp = stack -> b[0];
	while (i < stack -> size_b)
	{
		stack -> b[i] = stack -> b[i + 1];
		i++;
	}
	stack -> b[stack -> size_b] = tmp;
	write(1, "rrr\n", 4);
}
