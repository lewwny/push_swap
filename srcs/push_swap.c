/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:50:18 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/05/04 22:38:26 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	n;
	int	nb_chunk;
	int	size_chunk;

	n = ft_lstsize(*stack_a);
	set_chunk(n, &nb_chunk, &size_chunk);
	push_all_chunks(stack_a, stack_b, nb_chunk, size_chunk);
	push_back_to_a(stack_a, stack_b);
}

static void	ajust_argc(int *argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	*argc = i;
}

static int	is_sorted(t_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		a;

	if (argc == 1)
		return (0);
	a = 0;
	stack_b = NULL;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv)
			error_program();
		a = 1;
		ajust_argc(&argc, argv);
	}
	test_argument(argc, argv, a);
	stack_a = init_stack(argc, argv, a);
	if (!is_sorted(stack_a))
	{
		init_index(&stack_a, argv, a);
		sort_stack(&stack_a, &stack_b);
	}
	ft_lstclear(&stack_a);
	if (a)
		free_split(argv);
	return (0);
}
