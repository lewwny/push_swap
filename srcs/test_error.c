/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:54:47 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/05/03 13:53:40 by lengarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_program(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	error_program_free(t_list **stack_a)
{
	ft_lstclear(stack_a);
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

void	test_double(int *tab, int size, t_list **stack_a)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] == tab[i + 1])
		{
			free(tab);
			error_program_free(stack_a);
		}
		i++;
	}
}
