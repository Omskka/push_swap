/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:45:21 by okirca            #+#    #+#             */
/*   Updated: 2023/02/25 17:19:03 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"
#include "stdio.h"

long long	ft_atoi(const char *str)
{
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;

	while (ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0') * sign;
		str++;
	}
	if (ft_isalpha(*str))
		ft_error();
	return (number);
}

void	ft_error(void)
{
	write (1, "Error\n", 6);
	exit(1);
}

void	ft_dup(int argc, const char **argv)
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

int	ft_checker(const char *argv)
{
	long long	num;

	num = ft_atoi(argv);
	if (num == 0)
	{
		ft_error();
		return (1);
	}
	if (num < -2147483648 || num > 2147483647)
	{
		ft_error();
		return (1);
	}
	return (0);
}
