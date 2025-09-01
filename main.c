/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:31:18 by anfiorit          #+#    #+#             */
/*   Updated: 2025/09/01 14:12:05 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *stack)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}
int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		size;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	size = 0;
	if (argc == 1)
		exit_prob();
	if (argc == 2)
		check_argument(argv[1], &size, &stack_a);
	if (argc > 2)
	{
		i = argc - 1;
		while (i > 0)
		{
			is_int_valid(argv[i], &size);
			push_node_checked(&stack_a, ft_atol(argv[i]));
			i--;
		}
	}
	if (is_sorted(stack_a) == 0)
	{
		free_stack(stack_a);
		return (ft_printf("Error\n"));
	}
	change_stack_val(&stack_a);
	if (size == 2)
		sort_two(&stack_a);
	if (size == 3)
		sort_three(&stack_a);
	if (size == 4 || size == 5)
		sort_spec(&stack_a, &stack_b, size);
	if (size > 5)
		main_algo(&stack_a, &stack_b);
	print_stack(stack_a);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}

