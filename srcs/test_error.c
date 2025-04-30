/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:54:47 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/04/30 19:52:25 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_program(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

static int	test_argv(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i])
		return (0);
	return (1);
}

void	test_argument(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		error_program();
	i = 1;
	while (i < argc)
	{
		if (!test_argv(argv[i]))
			error_program();
		i++;
	}
}
