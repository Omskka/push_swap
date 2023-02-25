/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:43:51 by okirca            #+#    #+#             */
/*   Updated: 2023/02/24 19:41:22 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char const *argv[])
{
	int	i;

	i = 1;
	if (ft_dup(argc, argv))
	{
		ft_error();
		exit(1);
	}		
	if (argc > 1)
	{
		while (i < argc)
		{
			if (ft_checker(argv[i]))
				exit(1);
			i++;
		}
	}
}
