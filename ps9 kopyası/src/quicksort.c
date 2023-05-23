/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:53:18 by okirca            #+#    #+#             */
/*   Updated: 2023/05/23 20:07:01 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_median(int *arr, int size)
{
	int	i;
	int	j;
	int	pivot;
	int	tmp;

	i = 0;
	while (i <= size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
			i++;
	}
	pivot = arr[size / 2 + size % 2];
	return (pivot);
}

int	ft_max(int *arr)
{
	int	i;
	int	max;

	max = arr[0];
	i = 1;
	while (i < 3)
	{
		if (arr[i] > max)
			max = arr[i];
			i++;
	}
	return (max);
}

int	ft_lessthanpivot(t_stack *stack, int pivot)
{
	int	i;
	int	ltp;

	ltp = 0;
	i = 0;
	while (i < stack->size_a + 1)
	{
		if (stack-> a[i] < pivot)
			ltp++;
		i++;
	}
	return (ltp);
}

void	ft_quicksort_a(t_stack *stack, int size, int *arr)
{
	int	pivot;
	int	items;
	int	ltp;
	int	i;
	int	k;

	k = 0;
	i = 0;
	pivot = ft_median(arr, size);
	items = size;
	ltp = ft_lessthanpivot(stack, pivot);
	while (i <= items)
	{
		if (stack->a[size] < pivot)
		{
			pb(stack);
			size--;
			k++;
		}
		else if (stack->a[size] >= pivot && ltp > k)
			ra(stack);
		i++;
	}
	ft_quicksort_b(stack);
}

void	ft_quicksort_b(t_stack *stack)
{
	int	ctl;

	ctl = 0;
	if (stack->size_a == 2)
		three_a(stack);
	if (stack->size_a == 1)
		base_case_a(stack);
	if (stack->size_a >= 3)
		stack -> a = ft_pushswap(stack->size_a + 1, stack->a, ctl);
	if (stack->size_b == 0)
		pa(stack);
	if (stack->size_b == 2)
	{
		three_b(stack);
		pa(stack);
		pa(stack);
		pa(stack);
	}
	if (stack->size_b == 1)
		base_case_b(stack);
	if (stack->size_b >= 3)
	{
		ctl = 1;
		stack -> b = ft_pushswap(stack->size_b + 1, stack->b, ctl);
	}
	if (stack->size_b >= 3)
		ft_revpush(stack);
	int v;
    v = stack->size_a ;
    for(;v >= 0 ;v--)
    {
        printf("array[%d] -- > %d\n\n",v,stack->a[v]);
    }
	//ft_stacksorted(stack);
}
