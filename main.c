/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icorrale <icorrale@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:38:55 by icorrale          #+#    #+#             */
/*   Updated: 2026/10/25 16:59:22 by icorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "codexion.h"


int main(int argc, char **argv)
{
	t_Args	*args;

	printf("Codexion\n");
	args = parse_args(argc, argv);
	if (!args)
	{
		return (-1);
	}

}


t_Args	*parse_args(int argc, char **argv)
{
	t_Args	args;

	if (argc != 9)
		return (NULL);
	args.number_of_coders = atoi(argv[1]);
	args.time_to_burnout = atoi(argv[2]);
	args.time_to_compile = atoi(argv[3]);
	args.time_to_debug = atoi(argv[4]);
	args.time_to_refactor = atoi(argv[5]);
	args.number_of_compiles_required = atoi(argv[6]);
	args.dongle_cooldown = atoi(argv[7]);
	args.scheduler = atoi(argv[8]);

	return (&args);
}