/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <<okirca@student.42.fr>>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:53:18 by okirca            #+#    #+#             */
/*   Updated: 2023/04/25 16:04:28 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int median(int *arr,int size)
{
    printf("--median--\n\n");
    int i;
    int j;
    int pivot;
    int tmp;
    
    i = 0;
    printf("size = %d\n\n",size);
    while(i <= size)
    {
        j = i+1;
        while(j <= size)
        {
          if(arr[i] > arr[j])
          {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
          }
          j++;
        }
        i++;
    }
    for(int h = 0;h <= size;h++)
    {
        printf("arbys [%d] -> %d\n\n",h,arr[h]);
    }
    pivot = arr[size/2+size%2];
    return (pivot);  
}

int ft_max(int *arr)
{
    int i;
    int max;

    max = arr[0];    
    i = 1;
    while(i < 3)
   {
        if(arr[i] > max)
            max = arr[i];
        i++;
   }
   return(max);
}

void ft_revpush(t_stack *stack)
{
    int i;
    int size;
    
    i = 0;
    size = stack ->size_b;
    while (i <= size + 1)
    {
        rrb(stack);
        pa(stack);
        i++;
    }
}

void three_a(t_stack *stack)
{
    printf("--three_a--\n\n");
    int max;
    max = ft_max(stack->a);
    printf("ilk_arr_a -->%d\n\n",stack->a[6]);
   printf("ilk_arr_a -->%d\n\n",stack->a[5]);
   printf("ilk_arr_a -->%d\n\n",stack->a[4]);
   printf("ilk_arr_a -->%d\n\n",stack->a[3]);
   printf("ilk_arr_a -->%d\n\n",stack->a[2]);
   printf("ilk_arr_a -->%d\n\n",stack->a[1]);
   printf("ilk_arr_a -->%d\n\n",stack->a[0]);
    printf("max_a -->%d\n\n",max);
   if(max == stack->a[0])
   {
        if(stack->a[1] < stack->a[2])
            sa(stack);
        else
            return;
   }
   if(max == stack-> a[1])
   {
        if(stack->a[0] < stack->a[2])
        {
            rra(stack);
            sa(stack);
        }

        else
        {
            rra(stack);
            sa(stack);          
        }
   }
   if(max == stack->a[2])
   {
        if(stack->a[0] < stack->a[1])
        {
           ra(stack);
           sa(stack);
        }
        else
           ra(stack);
   }
   printf("yeni arr_a -->%d\n\n",stack->a[6]);
   printf("yeni arr_a -->%d\n\n",stack->a[5]);
   printf("yeni arr_a -->%d\n\n",stack->a[4]);
   printf("yeni arr_a -->%d\n\n",stack->a[3]);
   printf("yeni arr_a -->%d\n\n",stack->a[2]);
   printf("yeni arr_a -->%d\n\n",stack->a[1]);
   printf("yeni arr_a -->%d\n\n",stack->a[0]);
}

void three_b(t_stack *stack)
{
    printf("--three_b--\n\n");
    int max;
    max = ft_max(stack->b);

   printf("ilk_arr_b -->%d\n\n",stack->b[6]);
   printf("ilk_arr_b -->%d\n\n",stack->b[5]);
   printf("ilk_arr_b -->%d\n\n",stack->b[4]);
   printf("ilk_arr_b -->%d\n\n",stack->b[3]);
   printf("ilk_arr_b -->%d\n\n",stack->b[2]);
   printf("ilk_arr_b -->%d\n\n",stack->b[1]);
   printf("ilk_arr_b -->%d\n\n",stack->b[0]);
   printf("max_b -->%d\n\n",max);
   if(max == stack->b[0])
   {
        if(stack->b[1] < stack->b[2])
            rrb(stack);
        else
        {
            sb(stack);
            rrb(stack);
        }            
   }
   else if(max == stack->b[1])
   {
        if(stack->b[0] < stack->b[2])
            sb(stack);
        else
            rb(stack);
   }

   else if(max == stack->b[2])
   {
        if(stack->b[0] > stack->b[1])
        {
            sb(stack);
            rb(stack);
        }
   }
   printf("yeni arr_b -->%d\n\n",stack->b[6]);
   printf("yeni arr_b -->%d\n\n",stack->b[5]);
   printf("yeni arr_b -->%d\n\n",stack->b[4]);
   printf("yeni arr_b -->%d\n\n",stack->b[3]);
   printf("yeni arr_b -->%d\n\n",stack->b[2]);
   printf("yeni arr_b -->%d\n\n",stack->b[1]);
   printf("yeni arr_b -->%d\n\n",stack->b[0]);
   pa(stack);
   pa(stack);
   pa(stack);
}
void base_case_a(t_stack *stack)
{
    printf("--basecase_a--\n\n");
    printf( "s-> a[0] %d\n\n",stack->a[0]);
    printf( "s-> a[1] %d\n\n",stack->a[1]);
    if(stack->a[0] < stack->a[1])
       ra(stack);

    printf("ba son %d\n\n",stack->a[6]);
    printf("ba son  %d\n\n",stack->a[5]);
    printf("ba son %d\n\n",stack->a[4]);
    printf("ba son %d\n\n",stack->a[3]);
    printf("ba son %d\n\n",stack->a[2]);
    printf("ba son %d\n\n",stack->a[1]);
    printf("ba son %d\n\n",stack->a[0]);
}

void base_case_b(t_stack *stack)
{
    printf("--basecase_b--\n\n");
    if(stack->b[0] > stack->b[1])
        rb(stack);
    pa(stack);
    pa(stack);
}

void ft_quicksort(t_stack *stack,int size,int *arr)
{
    printf("--quicksort--\n\n");
    int pivot;
    int items;
    int ctl;
    int j;
    int i;
    int k;
    
    k = 0;
    ctl = 1;
    while(k <= size)
    {
        printf("array[%d] --> %d\n\n",k,stack->a[k]);
        k++;
    }
    
    pivot = median(arr,size);
    i = 0;
    j = 0;

    items = size;
    printf("pivot == %d\n\n",pivot);
	printf("size -->%d\n\n",size);
    if ( pivot == 0)
        return ;

	while (i <= items)
	{
		if (stack->a[size] < pivot && stack->a[size] != '\0')
        {
            printf("s->a[size] = %d\n\n ",stack->a[size]);
			pb(stack);
            size--;
        }
		else
         {
            j++;
			ra(stack);
        }
        i++;
    }
    printf("items -->%d\n\n",items);
    printf("size_a -->%d\n\n",stack->size_a);
    printf("size_b -->%d\n\n",stack->size_b);
    if(stack->size_a == 2)
        three_a(stack);
    if ( stack->size_a == 1)
        base_case_a(stack);
    if(stack->size_a >= 3)
        stack->a=  ft_pushswap(stack->size_a + 1,stack->a, ctl);       
    printf("med son %d\n\n",stack->a[6]);
    printf("med son %d\n\n",stack->a[5]);
    printf("med son %d\n\n",stack->a[4]);
    printf("med son %d\n\n",stack->a[3]);
    printf("med son %d\n\n",stack->a[2]);
    printf("med son %d\n\n",stack->a[1]);
    printf("med son %d\n\n\n",stack->a[0]);

    printf("size_b -->%d\n\n",stack->size_b);
    printf("size_a -->%d\n\n",stack->size_a);
    if (stack->size_b == 0)
        pa(stack);
    if(stack->size_b == 2)
        three_b(stack);
    if ( stack->size_b == 1)
        base_case_b(stack);
    printf("items -->%d\n\n",items);
    if(stack->size_b >= 3)
        stack->b=  ft_pushswap(stack->size_b + 1,stack->b, ctl);       
    if (stack->size_b >= 3)
        ft_revpush(stack);
        
    printf("son %d\n\n",stack->a[10]);
    printf("son %d\n\n",stack->a[9]);
    printf("son %d\n\n",stack->a[8]);
    printf("son %d\n\n",stack->a[7]);
    printf("son %d\n\n",stack->a[6]);
    printf("son %d\n\n",stack->a[5]);
    printf("son %d\n\n",stack->a[4]);
    printf("son %d\n\n",stack->a[3]);
    printf("son %d\n\n",stack->a[2]);
    printf("son %d\n\n",stack->a[1]);
    printf("son %d\n\n",stack->a[0]);
}
