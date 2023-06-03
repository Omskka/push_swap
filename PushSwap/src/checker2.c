/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:02:53 by okirca            #+#    #+#             */
/*   Updated: 2023/06/03 20:23:26 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char		*buffer;
	char			*token_start;

	buffer = NULL;
	if (str != NULL)
		buffer = str;
	if (buffer == NULL || *buffer == '\0')
		return (NULL);
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

char	**ft_separate(int argc, char **argv)
{
	int		i;
	int		j;
	char	**arg;
	char	*word;

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
	argv = arg;
	return (argv);
}
