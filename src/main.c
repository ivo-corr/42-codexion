/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icorrale <icorrale@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:38:55 by icorrale          #+#    #+#             */
/*   Updated: 2026/11/09 17:26:44 by icorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "codexion.h"

int	main(int argc, char **argv)
{
	t_Args			*args;
	t_Coder			**coders;
	struct timeval	start;
	struct timeval	stop;
	long			elapsed_ms;

	gettimeofday(&start, NULL);
	usleep(250000);
	gettimeofday(&stop, NULL);
	elapsed_ms = (stop.tv_sec - start.tv_sec) * 1000
		+ (stop.tv_usec - start.tv_usec) / 1000;
	printf("Codexion\n");
	args = parse_args(argc, argv);
	if (!args)
		return (1);
	coders = populate_coders(args->number_of_coders);
}

void	*coder_routine(void *arg)
{
	t_Coder	*coder;
	int		i;

	coder = (t_Coder *)arg;
	i = 0;
	while (i < 100)
	{
		printf("Coder number %i: %i\n", coder->id, i);
		i++;
	}
	return (NULL);
}
