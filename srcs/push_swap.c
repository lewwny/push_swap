/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:50:18 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/05/01 12:39:35 by lenygarcia       ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	test_argument(argc, argv);
	stack_a = init_stack(argc, argv);
	init_index(&stack_a);
	sort_stack(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
