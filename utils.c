/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icorrale <icorrale@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:50:56 by icorrale          #+#    #+#             */
/*   Updated: 2026/10/25 18:56:23 by icorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	print_usage(void)
{
	printf("Usage: ./codexion\n\t<int:number_of_coders>");
	printf("\n\t<int:time_to_burnout>\n\t<int:time_to_compile>");
	printf("\n\t<int:time_to_debug>\n\t<int:time_to_refactor>");
	printf("\n\t<int:number_of_compiles_required>");
	printf("\n\t<int:dongle_cooldown>");
	printf("\n\t<str:scheduler:'fifo' or 'edf'>\n");
}

int	isNumber(char *str)
{
	return (0);
}

int	validate_args(int argc, char **argv)
{
	int	i;

	if (argc != 9
		|| (strcmp(argv[8], "fifo") != 0 && strcmp(argv[8], "edf") != 0))
	{
		return (0);
	}
	i = 0;
	while (i < argc - 1)
	{
		if (!isNumber(argv[i]) || atoi(argv[i]) < 0)
			return (0);
	}
	return (1);
}

t_Args	*parse_args(int argc, char **argv)
{
	t_Args	*args;

	args = malloc(sizeof(t_Args));
	if (!validate_args(argc, argv) || !args)
	{
		if (args)
			free(args);
		print_usage();
		return (NULL);
	}
	args->number_of_coders = atoi(argv[1]);
	args->time_to_burnout = atoi(argv[2]);
	args->time_to_compile = atoi(argv[3]);
	args->time_to_debug = atoi(argv[4]);
	args->time_to_refactor = atoi(argv[5]);
	args->number_of_compiles_required = atoi(argv[6]);
	args->dongle_cooldown = atoi(argv[7]);
	args->scheduler = argv[8];
	return (args);
}
