/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:25:49 by okirca            #+#    #+#             */
/*   Updated: 2023/05/23 19:13:17 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_quicksort_c(t_stack *stack, int size, int *arr)
{
	int	pivot;
	int	items;
	int	ltp;
	int	i;
	int	k;

	// int m;
    // m = stack->size_a ;
    // for(;m >= 0 ;m--)
    //     printf("array[a][%d] -- > %d\n\n",m,stack->a[m]);
	k = 0;
	i = 0;
	pivot = ft_median(arr, size);
	items = size;
	ltp = ft_lessthanpivot(stack, pivot);
	while (i <= items)
	{
		if (stack->a[size] > pivot)
		{
			pb(stack);
			size--;
			k++;
		}
		else if (stack->a[size] <= pivot && items - ltp  >= k)
			ra(stack);
		i++;
	}
	// int v;
    // v = stack->size_a ;
    // for(;v >= 0 ;v--)
    //     printf("array-c[a][%d] -- > %d\n\n",v,stack->a[v]);
	// int l;
    // l = stack->size_b ;
    // for(;l >= 0 ;l--)
    //     printf("array-c[b][%d] -- > %d\n\n",l,stack->b[l]);
	ft_quicksort_d(stack);
}

void	ft_quicksort_d(t_stack *stack)
{
	int	ctl;

	ctl = 1;
	if (stack->size_a == 2)
		ft_three_a2(stack);
	if (stack->size_a == 1)
		ft_base_case_a2(stack);
	if (stack->size_a >= 3)
		stack -> a = ft_pushswap(stack->size_a + 1, stack->a, ctl);
	// int l;
    // l = stack->size_b ;
    // for(;l >= 0 ;l--)
    //     printf("array-b[%d] -- > %d\n\n",l,stack->b[l]);
	// int v;
    // v = stack->size_a ;
    // for(;v >= 0 ;v--)
    //     printf("array-after[%d] -- > %d\n\n",v,stack->a[v]);
	if (stack->size_b == 0)
		pa(stack);
	if (stack->size_b == 2)
	{
		ft_three_b2(stack);
		pa(stack);
		pa(stack);
		pa(stack);
	}
	if (stack->size_b == 1)
		ft_base_case_b2(stack);
	if (stack->size_b >= 3)
	{
		ctl = 0;
		stack -> b = ft_pushswap(stack->size_b + 1, stack->b, ctl);
	}
	if (stack->size_b >= 3)
		ft_revpush(stack);
}
