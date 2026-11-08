/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icorrale <icorrale@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:50:05 by icorrale          #+#    #+#             */
/*   Updated: 2026/10/25 18:15:47 by icorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct s_Dongle
{
	int	id;
	int	in_use;
}	t_Dongle;

typedef struct s_Coder
{
	int	id;
}	t_Coder;

typedef struct s_Args
{
	int		number_of_coders;
	int		time_to_burnout;
	int		time_to_compile;
	int		time_to_debug;
	int		time_to_refactor;
	int		number_of_compiles_required;
	int		dongle_cooldown;
	char	*scheduler;
}	t_Args;

t_Args	*parse_args(int argc, char **argv);
t_Coder	**populate_coders(int nr_of_coders);
