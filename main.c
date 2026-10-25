/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icorrale <icorrale@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:38:55 by icorrale          #+#    #+#             */
/*   Updated: 2026/10/25 18:06:36 by icorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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