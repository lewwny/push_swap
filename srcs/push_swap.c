/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:50:18 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/04/30 20:23:28 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	test_argument(argc, argv);
	stack_a = init_stack(argc, argv);
	ft_lstprint(stack_a);
	init_index(&stack_a);
	ft_lstprint(stack_a);
	return (0);
}
