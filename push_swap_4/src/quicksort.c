/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:53:18 by okirca            #+#    #+#             */
/*   Updated: 2023/03/14 20:00:11 by okirca           ###   ########.fr       */
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
	while (i < size)
	{
		j = i + 1;
		while (j < size)
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
    // printf("arr %d\n",arr[4]);
    // printf("%d\n",arr[3]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[0]);
    printf("size %d\n",size);
    pivot = arr[((size + 1)/2) - 1];
    return (pivot);  
}

void	ft_quicksort(t_stack *stack, int size, int *arr)
{
	int	pivot;
	int	items;
	int	j;
	int	i;

	pivot = ft_median(arr, size);
	i = 0;
	j = 0;

	items = size;
	printf("pivot %d\n",pivot);
	while (i <= items)
	{
        // printf("size  %d\n",size);
        // printf("s->size_a = %d\n",s->size_a);
        // printf("s->a[size] = %d\n",s->a[size]);
		if (stack->a[size - 1] <= pivot)
		{
			// printf ("s->a[size] = %d\n",stack->a[size  - 1]);
			pb(stack);
			size--;
		}
		else
		{
			// printf ("s->a[size] = %d\n",stack->a[size  - 1]);
			j++;
			ra(stack);
		}
		i++;
	}
    printf("%d\n",stack->a[5]);
    printf("%d\n",stack->a[4]);
    printf("%d\n",stack->a[3]);
    printf("%d\n",stack->a[2]);
    printf("%d\n",stack->a[1]);
    printf("%d\n",stack->a[0]);
    printf("b %d\n",stack->b[5]);
    printf("%d\n",stack->b[4]);
    printf("%d\n",stack->b[3]);
    printf("%d\n",stack->b[2]);
    printf("%d\n",stack->b[1]);
    printf("%d\n",stack->b[0]);
	
    //quicksort(s,items,);
}