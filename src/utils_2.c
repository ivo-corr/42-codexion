/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icorrale <icorrale@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:50:56 by icorrale          #+#    #+#             */
/*   Updated: 2026/11/09 17:24:49 by icorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <ctype.h>

void	free_coders_list(t_Coder **coders)
{
	int	i;

	i = 0;
	while (coders[i])
	{
		free(coders[i]);
		i++;
	}
	free(coders);
}

t_Coder	**populate_coders(int nr_of_coders)
{
	int		i;
	t_Coder	**coders;
	t_Coder	*tmp;

	coders = malloc((sizeof(t_Coder *) * (nr_of_coders)) + 1);
	if (!coders)
		return (NULL);
	i = 1;
	while (i <= nr_of_coders)
	{
		tmp = malloc(sizeof(t_Coder));
		if (!tmp)
		{
			free_coders_list(coders);
			return (NULL);
		}
		tmp->id = i;
		pthread_create(&tmp->thread, NULL, coder_routine, tmp);
		coders[i - 1] = tmp;
		coders[i] = NULL;
		i++;
	}
	return (coders);
}
