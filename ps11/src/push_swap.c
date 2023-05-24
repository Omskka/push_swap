/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:16:01 by okirca            #+#    #+#             */
/*   Updated: 2023/05/24 22:29:00 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

void	ft_free_stack(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack);
}

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
	while (i <= argc - 1)
	{
		stack -> a[i] = arr[i];
		i++;
		t--;
	}
	i = 0;
	printf("argc burda %d bu kadar \n",argc);
	if (ctl == 1)
		ft_quicksort_c(stack, stack->size_a, arr);
	else
		ft_quicksort_a(stack, stack->size_a, arr);
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
	free(arr);
	return (stack -> a);
}

void	ft_dquote(char **argv,int g)
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
	free(arr);
	exit(1);
}

char* ft_strtok(char* str, const char* delim)
{
    static char* buffer = NULL;
	char* token_start;
    if (str != NULL)
        buffer = str;
    if (buffer == NULL || *buffer == '\0')
        return NULL; 
    while (*buffer != '\0' && ft_strchr(delim, *buffer) != NULL)
        buffer++;
    token_start = buffer;
    while (*buffer != '\0' && ft_strchr(delim, *buffer) == NULL)
        buffer++;
    if (*buffer != '\0')
	{
        *buffer = '\0';
        buffer++;
    }
    return (token_start);
}

char **ft_separate(int argc, char **argv)
{
    int i;
    int j;
    char **arg;
    char *word;

	i = 0;
    j = 0;
    arg = malloc((700) * sizeof(char *));
    while (i < argc)
    {
        if (ft_strchr(argv[i], ' ') != NULL) 
        {
            word = ft_strtok(argv[i], " ");
            while (word != NULL)
            {
                arg[j] = ft_strdup(word);
                word = ft_strtok(NULL, " ");
                j++;
            }
        }
        else
        {
            arg[j] = ft_strdup(argv[i]);
            j++;
        }
        i++;
    }
    arg[j] = NULL;
	argv =arg;
    return (argv);
}

int	main(int argc, char	**argv)
{
	int		i;
	int		g;
	int		size;
	int		ctl;
	int		*arr;

	i = 1;
	g = 0;
	ctl = 3;
	size = 0;
	argv++;
	if (argc == 2)
		ft_dquote(argv,argc);
	argv = ft_separate(argc,argv);
    while(argv[g] != NULL)
        g++;
	ft_dup(argc, argv);
	arr = ft_makearr(argc - 1, argv);
	ft_pushswap(argc - 1, arr, ctl);
	system("leaks push_swap");
	getchar();
}
