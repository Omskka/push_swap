/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:29:06 by tubaaydogan       #+#    #+#             */
/*   Updated: 2023/03/07 18:44:16 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_isalpha(const char *a)
{
	int	i ;

	i = 0;
	while (a[i] != '\0')
	{
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] <= 'z' && a[i] >= 'a'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
