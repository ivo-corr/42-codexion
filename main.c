/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icorrale <icorrale@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:38:55 by icorrale          #+#    #+#             */
/*   Updated: 2026/10/25 17:36:25 by icorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "codexion.h"

t_Args	*parse_args(int argc, char **argv);

int	main(int argc, char **argv)
{
	t_Args	*args;

	printf("Codexion\n");
	args = parse_args(argc, argv);
	if (!args)
		return (1);
}

t_Args	*parse_args(int argc, char **argv)
{
	t_Args	*args;

	if (argc != 9)
	{
		printf("Usage: ./codexion\n\t<int:number_of_coders>");
		printf("\n\t<int:time_to_burnout>\n\t<int:time_to_compile>");
		printf("\n\t<int:time_to_debug>\n\t<int:time_to_refactor>");
		printf("\n\t<int:number_of_compiles_required>");
		printf("\n\t<int:dongle_cooldown>");
		printf("\n\t<str:scheduler:'fifo' or 'edf'>\n");
		return (NULL);
	}
	args = malloc(sizeof(t_Args));
	if (!args)
		return (NULL);
	args->number_of_coders = atoi(argv[1]);
	args->time_to_burnout = atoi(argv[2]);
	args->time_to_compile = atoi(argv[3]);
	args->time_to_debug = atoi(argv[4]);
	args->time_to_refactor = atoi(argv[5]);
	args->number_of_compiles_required = atoi(argv[6]);
	args->dongle_cooldown = atoi(argv[7]);
	args->scheduler = atoi(argv[8]);

	return (args);
}
