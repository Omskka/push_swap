/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <<okirca@student.42.fr>>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:16:01 by okirca            #+#    #+#             */
/*   Updated: 2023/04/17 01:51:57 by okirca           ###   ########.fr       */
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
		printf("ctl = 0\n\n");
		stack -> a[i] = arr[t];
		i++;
		t--;
	}
	i = 0;
	while (i <= argc - 1 && ctl == 1)
	{
		printf("ctl = 1\n\n");
		stack -> a[i] = arr[i];
		i++;
	}
	// pa(stack);
	// printf("a %d\n\n",stack->a[2]);
	// printf("a %d\n\n",stack->a[1]);
	// printf("a %d\n\n",stack->a[0]);
	ft_quicksort(stack,stack->size_a,arr);
	// free(stack->a);
	// free(stack->b);
	// free(stack);
	
}

int	*ft_pushswap(int argc, int *arr, int ctl)
{
	printf("--pswap--\n\n");
	t_stack	*stack;

	if (!arr)
		return 0;
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return 0;
	stack -> a = malloc(argc * sizeof(int));
	if (!stack->a)
	{
		free(stack);
		return 0;
	}
	stack -> size_a = argc - 1;
	stack -> size_b = -1;
	stack -> b = malloc(argc * sizeof(int));
	if (!stack -> b)
	{
		free(stack->a);
		free(stack);
		return 0;
	}
	ft_add(argc, arr, stack, ctl);
	return(stack->a);
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

int	main(int argc, char	**argv)
{
	int		i;
	int		size;
	int		ctl;
	int		*arr;
	char	**ptr;
	char	**c;

	i = 1;
	ctl = 0;
	size = 0;
	argv++;
	if (argc == 2)
	{
		ft_dquote(argv);
	}
	ft_dup(argc, argv);
	ft_alreadysorted(argc,argv);
	if (argc >= 2)
	{
		if (argv[i])
		while (i < argc)
		{
			ft_checker(*argv);
			i++;
		}
		arr = ft_makearr(argc - 1, argv);
		ft_pushswap(argc - 1, arr, ctl);
	}
}
