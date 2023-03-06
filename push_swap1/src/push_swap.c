/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:43:51 by okirca            #+#    #+#             */
/*   Updated: 2023/03/06 19:32:50 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_add(int argc, int *arr, t_stack *stack)
{
	int		i;
	int		t;

	i = 0;
	t = argc -1;
	while (i <= argc - 1)
	{
		stack -> a[i] = arr[i];
		i++;
		t--;
	}
	i = 0;
	printf("size b: %d\n",stack->size_b);
	printf("size a2: %d\n",stack->size_a);
	pb(stack);
	while (i < argc)
	{
		printf("a stack ->%d\n", stack -> a[i]);
		i++;
	}
	i = 0;
	while (i < argc)
	{
		printf("b stack ->%d\n", stack -> b[i]);
		i++;
	}
	free(stack->a);
	free(stack->b);
	free(stack);
}

int	*ft_makearr(char	**ptr, int size)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * (size + 1));
	while (i < size)
	{
		arr[i] = atoi(ptr[i]);
		i++;
	}
	arr[size] = '\0';
	return (arr);
}

void	ft_dquote(char **argv)
{
	int		size;
	char	**ptr;
	char	**buff;
	int		*intarr;

	size = 0;
	ptr = ft_split(*argv, ' ');
	buff = ptr;
	while (*ptr != NULL)
	{
		size++;
		ptr++;
	}
	ptr = buff;
	intarr = ft_makearr(ptr, size);
}

void	ft_push_swap(int argc, int *arr)
{
	t_stack	*stack;

	if (!arr)
		return ;
	stack = malloc(sizeof(stack));
	if (!stack)
		return ;
	stack -> a = malloc(argc * sizeof(int));
	if (!stack -> a)
	{
		free(stack);
		return ;
	}
	stack -> size_a = argc - 1;
	printf("size a :%d\n", stack -> size_a);
	stack -> size_b = 0;
	printf("size b :%d\n", stack -> size_b);
	stack -> b = malloc(4 * sizeof(int));
	if (!stack -> b)
	{
		free(stack -> a);
		free(stack);
		return ;
	}
	ft_add(argc, arr, stack);
}

int	main(int argc, char	**argv)
{
	int		i;
	int		*arr;

	i = 1;
	argv++;
	if (argc == 2)
		ft_dquote(argv);
	ft_dup(argc, argv);
	if (argc >= 2)
	{
		while (i < argc)
		{
			ft_checker(*argv);
			i++;
		}
		arr = ft_makearr(argv, argc - 1);
		ft_push_swap(argc - 1, arr);
	}
}
