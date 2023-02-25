/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:59:40 by okirca            #+#    #+#             */
/*   Updated: 2023/02/24 19:38:55 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

int			ft_checker(const char *argv);
int			ft_dup(int argc, const char **argv);
void		ft_error(void);
int			ft_isdigit(int c);
long long	ft_atoi(const char *str);

#endif