/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:24:54 by okirca            #+#    #+#             */
/*   Updated: 2023/03/06 19:06:21 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pa(t_stack *stack)
{
	write(1, "pa\n", 3);
	if (stack -> size_b == 0)
		return ;
	else
	{
		stack ->a[stack -> size_a + 1] = stack -> b[stack -> size_b];
		stack -> b[stack -> size_b] = 0;
	}
}

void	pb(t_stack *stack)
{	
	printf("sb %d\n",stack->size_b);
	printf("sa %d\n",stack->size_a);
	write(1, "pb\n", 3);
	if (stack -> size_a == 0)
		return ;
	else
	{
		stack -> b[stack -> size_b] = stack -> a[stack -> size_a];
		stack -> a[stack -> size_a] = '\0';
	}
}
