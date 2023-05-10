/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:16:01 by okirca            #+#    #+#             */
/*   Updated: 2023/05/10 21:12:55 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	*ft_makearr(int size, char **arr)
{
	int	*new_array;
	int	i;
	int	t;

	i = 0;
	t = size -1;
	new_array = malloc(size * sizeof(int));
	if (!new_array)
		return (0);
	while (i <= size - 1)
	{
		new_array[i] = ft_atoi(arr[t]);
		t--;
		i++;
	}
	return (new_array);
}

void	ft_add(int argc, int *arr, t_stack *stack, int ctl)
{
	int		i;
	int		t;

	i = 0;
	t = argc -1;
	while (i <= argc - 1 && ctl == 0)
	{
		stack -> a[i] = arr[t];
		i++;
		t--;
	}
	i = 0;
	while (i <= argc - 1 && ctl == 1)
	{
		stack -> a[i] = arr[i];
		i++;
	}
	ft_quicksort_a(stack, stack->size_a, arr);
	free(stack);
}

int	*ft_pushswap(int argc, int *arr, int ctl)
{
	t_stack	*stack;

	if (!arr)
		return (0);
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	stack -> a = malloc(argc * sizeof(int));
	if (!stack->a)
	{
		free(stack);
		return (0);
	}
	stack -> size_a = argc - 1;
	stack -> size_b = -1;
	stack -> b = malloc(argc * sizeof(int));
	if (!stack -> b)
	{
		free(stack->a);
		free(stack);
		return (0);
	}
	ft_add(argc, arr, stack, ctl);
	return (stack->a);
}

void	ft_dquote(char **argv)
{
	int		size;
	char	**ptr;
	char	**buff;
	int		*arr;
	int		ctl;

	size = 0;
	ctl = 0;
	ptr = ft_split(*argv, ' ');
	buff = ptr;
	while (*ptr != NULL)
	{
		ptr++;
		size++;
	}
	ptr = buff;
	arr = ft_makearr(size, ptr);
	ft_pushswap(size, arr, ctl);
	exit(1);
}

void	ft_seperate(int argc, char **argv)
{
	int	i;

	i = 0;
	char	**str;
	if (argc > 2)
	{
		str = ft_split(argv, ' ');
	}
}

int	main(int argc, char	**argv)
{
	int		i;
	int		size;
	int		ctl;
	int		*arr;

	i = 1;
	ctl = 0;
	size = 0;
	argv++;
	if (argc == 2)
		ft_dquote(argv);
	ft_dup(argc, argv);
	arr = ft_makearr(argc - 1, argv);
	ft_pushswap(argc - 1, arr, ctl);
}
