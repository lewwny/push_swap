/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:41:27 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/05/03 14:47:23 by lengarci         ###   ########.fr       */
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

static int	verif_atoi(char *str, t_list **stack_a)
{
	long	res;

	res = ft_atoi(str);
	if (res > 2147483647 || res < -2147483648)
		error_program_free(stack_a);
	return ((int) res);
}

t_list	*init_stack(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	t_list	*tmp;

	i = 2;
	stack_a = NULL;
	stack_a = ft_lstnew(verif_atoi(argv[1], &stack_a));
	if (!stack_a)
		error_program();
	while (i < argc)
	{
		tmp = ft_lstnew(verif_atoi(argv[i++], &stack_a));
		if (!tmp)
			error_program_free(&stack_a);
		ft_lstadd_back(&stack_a, tmp);
	}
	return (stack_a);
}
