/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:16:14 by okirca            #+#    #+#             */
/*   Updated: 2023/03/07 18:40:22 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pb(t_stack *stack)
{	
	if (stack -> size_a == 0)
		return ;
	else
	{
		stack -> b[stack -> size_b] = stack -> a[stack -> size_a];
		stack -> a[stack -> size_a] = '\0';
	}
	stack -> size_b++;
	stack -> size_a--;
	write(1, "pb\n", 3);
}

void	pa(t_stack *stack)
{	
	if (stack -> size_b == 0)
		return ;
	else
	{
		stack -> a[stack -> size_a] = stack -> b[stack -> size_b];
		stack -> b[stack -> size_b] = '\0';
	}
	stack -> size_b--;
	stack -> size_a++;
	write(1, "pa\n", 3);
}
