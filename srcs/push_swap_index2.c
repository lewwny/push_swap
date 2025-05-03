/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_index2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:05:54 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/05/03 13:45:36 by lengarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*fill_list(t_list *stack_a, int size)
{
	int	*list;
	int	i;

	i = 0;
	list = malloc(sizeof(int) * size);
	if (!list)
		error_program();
	while (stack_a)
	{
		list[i++] = stack_a->content;
		stack_a = stack_a->next;
	}
	return (list);
}
