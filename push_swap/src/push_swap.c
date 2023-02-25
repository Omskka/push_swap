/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:43:51 by okirca            #+#    #+#             */
/*   Updated: 2023/02/25 20:14:03 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	main(int argc, char const *argv[])
{
	int	i;

	i = 1;
	if (argc == 2)
	{
		char	**str;
		str = ft_split(argv[1], ' ');
	}
	argv++;
	ft_dup(argc, argv);
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_checker(argv[i]);
			i++;
		}
	}
}
