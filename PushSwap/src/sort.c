/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:16:18 by okirca            #+#    #+#             */
/*   Updated: 2023/05/23 18:29:16 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	three_a(t_stack *stack)
{
	int	max;

	max = ft_max(stack->a);
	if (max == stack->a[0] && stack->a[1] < stack->a[2])
		sa(stack);
	else if (max == stack-> a[1])
	{
		if (stack->a[0] < stack->a[2])
			rra(stack);
		else
		{
			rra(stack);
			sa(stack);
		}
	}
	else if (max == stack->a[2])
	{
		if (stack->a[0] < stack->a[1])
		{
			ra(stack);
			sa(stack);
		}
		else
			ra(stack);
	}
}

void	three_b(t_stack *stack)
{
	int	max;

	max = ft_max(stack->b);
	if (max == stack->b[0])
	{
		if (stack->b[1] < stack->b[2])
			rrb(stack);
		else
		{
			sb(stack);
			rrb(stack);
		}
	}
	else if (max == stack->b[1])
	{
		if (stack->b[0] < stack->b[2])
			sb(stack);
		else
			rb(stack);
	}
	else if (max == stack->b[2] && stack->b[0] > stack->b[1])
	{
		sb(stack);
		rb(stack);
	}
}

void	base_case_a(t_stack *stack)
{
	if (stack->a[0] < stack->a[1])
		ra(stack);
}

void	base_case_b(t_stack *stack)
{
	if (stack->b[0] > stack->b[1])
		rb(stack);
	pa(stack);
	pa(stack);
}

void	ft_revpush(t_stack *stack)
{
	int	i;
	int	size;

	i = 0;
	size = stack -> size_b;
	while (i <= size)
	{
		pa(stack);
		i++;
	}
}
