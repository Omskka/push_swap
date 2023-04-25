/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:35:45 by okirca            #+#    #+#             */
/*   Updated: 2023/03/07 18:09:06 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_stack *stack)
{	
	int	tmp;
	int	i;

	i = 0;
	tmp = stack -> a[stack -> size_a];
	while (i < stack -> size_a)
	{
		stack -> a[stack -> size_a - i] = stack -> a[stack -> size_a - 1 - i];
		i++;
	}
	stack -> a[0] = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{	
	int	tmp;
	int	i;

	i = 0;
	tmp = stack -> b[stack -> size_b];
	while (i < stack -> size_b)
	{
		stack -> b[stack -> size_b - i] = stack -> b[stack -> size_b - 1 - i];
		i++;
	}
	stack -> b[0] = tmp;
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack -> b[stack -> size_b];
	while (i < stack -> size_b)
	{
		stack -> b[stack -> size_b - i] = stack -> b[stack -> size_b - 1 - i];
		i++;
	}
	stack -> b[0] = tmp;
	i = 0;
	tmp = stack -> a[stack -> size_a];
	while (i < stack -> size_a)
	{
		stack -> a[stack -> size_a - i] = stack -> a[stack -> size_a - 1 - i];
		i++;
	}
	stack -> a[0] = tmp;
	write(1, "rr\n", 3);
}
