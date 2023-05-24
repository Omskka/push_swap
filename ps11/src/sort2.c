/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:42:28 by okirca            #+#    #+#             */
/*   Updated: 2023/05/23 18:41:19 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_three_b2(t_stack *stack)
{
	int	max;

	max = ft_max(stack->b);
	if (max == stack->b[0] && stack->b[1] < stack->b[2])
		sb(stack);
	else if (max == stack-> b[1])
	{
		if (stack->b[0] < stack->b[2])
			rrb(stack);
		else
		{
			rrb(stack);
			sb(stack);
		}
	}
	else if (max == stack->b[2])
	{
		if (stack->b[0] < stack->b[1])
		{
			rb(stack);
			sb(stack);
		}
		else
			rb(stack);
	}
}

void	ft_three_a2(t_stack *stack)
{
	int	max;

	max = ft_max(stack->a);
	if (max == stack->a[0])
	{
		if (stack->a[1] < stack->a[2])
			rra(stack);
		else
		{
			sa(stack);
			rra(stack);
		}
	}
	else if (max == stack->a[1])
	{
		if (stack->a[0] < stack->a[2])
			sa(stack);
		else
			ra(stack);
	}
	else if (max == stack->a[2] && stack->a[0] > stack->a[1])
	{
		sa(stack);
		ra(stack);
	}
}

void	ft_base_case_a2(t_stack *stack)
{
	if (stack->a[0] > stack->a[1])
		ra(stack);
}

void	ft_base_case_b2(t_stack *stack)
{
	if (stack->b[0] < stack->b[1])
		rb(stack);
	pa(stack);
	pa(stack);
}
