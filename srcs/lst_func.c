/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:41:27 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/05/03 14:00:13 by lengarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lstprint(t_list *lst)
{
	ft_printf("Impression liste :\n");
	while (lst)
	{
		ft_printf("%d\n", lst->content);
		lst = lst->next;
	}
	ft_printf("-----------------\n");
}

t_list	*init_stack(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	t_list	*tmp;

	i = 2;
	stack_a = ft_lstnew(ft_atoi(argv[1]));
	if (!stack_a)
		error_program();
	while (i < argc)
	{
		tmp = ft_lstnew(ft_atoi(argv[i++]));
		if (!tmp)
			error_program_free(&stack_a);
		ft_lstadd_back(&stack_a, tmp);
	}
	return (stack_a);
}
