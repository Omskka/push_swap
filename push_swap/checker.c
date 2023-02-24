/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:45:21 by okirca            #+#    #+#             */
/*   Updated: 2023/02/24 18:41:32 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
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
	return (number);
}
void	ft_error(void)
{
	write (1, "Error\n", 6);
	return;
}

int	ft_checker(const char *argv)
{
	long long	num;

	num = ft_atoi(argv);
	if (num < -2147483648 || num > 2147483647)
	{
		ft_error();
		return (1);
	}
	return (0);
}

