/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <<okirca@student.42.fr>>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:45:21 by okirca            #+#    #+#             */
/*   Updated: 2023/04/25 21:20:37 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(void)
{
	write (1, "Error\n", 6);
	exit(1);
}

void	ft_alreadysorted(int argc, char **argv)
{
	int	i;
	int	ctl;

	i = 0;
	ctl = 1;
	while (i < argc - 2)
	{
		if (ft_atoi(argv[i]) < ft_atoi(argv[i + 1]))
			ctl++;
		i++;
		if (ctl == argc - 1)
			ft_error();	
	}
}

void	ft_stacksorted(t_stack *stack)
{
	int	i;
	int	ctl;
	
	i = 0;
	ctl = 1;
	while (i < stack-> size_a)
	{
		if (stack->a[i] > stack->a[i + 1])
			ctl++;
		i++;

	}
	printf("ctl %d \n",ctl);
	printf("sizea %d \n",stack->size_a);
	if(ctl == stack->size_a)
		printf("\nSORTED\n");
		
	else if(ctl != stack->size_a)
	{
		printf("NOT SORTED\n");
	}
}

void	ft_dup(int argc, char	**argv)
{
	int	num;
	int	num2;
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		num = ft_atoi(argv[i]);
		while (j < argc - 1)
		{
			num2 = ft_atoi(argv[j]);
			if (num == num2)
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_checker(const char *argv)
{
	long long	num;

	num = ft_atoi(argv);
	if (num == 0)
		ft_error();
	if (num < -2147483648 || num > 2147483647)
		ft_error();
}
