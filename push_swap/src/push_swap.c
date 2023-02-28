/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:43:51 by okirca            #+#    #+#             */
/*   Updated: 2023/02/28 20:24:48 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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

void	ft_push_swap(int *arr, int argc)
{
	t_stack	*stack;
	int		i;

	i = 0;
	stack = malloc(sizeof(stack));
	stack -> a = malloc(argc * sizeof(int));
	if (!stack -> a)
	{
		free(stack);
		return ;
	}
	stack -> b = malloc(argc * sizeof(int));
	if (!stack -> b)
	{
		free(stack -> a);
		free(stack);
		return ;
	}
	stack -> size_a = argc - 1;
	stack -> size_b = 0;
	while (i < argc - 1)
	{
		//bunu değiştir!
		stack -> a[i] = arr[i];
		i++;
	}
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
	if (argc > 2)
	{
		while (i < argc)
		{
			ft_checker(*argv);
			i++;
		}
		arr = ft_makearr(argv, argc - 1);
		ft_push_swap(arr, argc);
	}
}
