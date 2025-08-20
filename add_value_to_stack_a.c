/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_value_to_stack_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:06:35 by anfiorit          #+#    #+#             */
/*   Updated: 2025/08/20 17:01:25 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_argument (char *argv, int *size_stack, t_node **stack_a)
{
	int		i;
	int		j;
	int		n;
	int		sign;
	char	*buffer;

	i = 0;
	while (argv[i])
		i++;
	i--;
	while (i >= 0)
	{
		while (i >= 0 && argv[i] == ' ')
			i--;
		if (i < 0)
			break;
		j = i;
		while (j >= 0 && argv[j] != ' ')
			j--;
		sign = 0;
		n = 0;
		{
			int start = j + 1;
			buffer = malloc(sizeof(char) * (i - start + 2));
			if (!buffer)
				exit_prob();
			while (start <= i)
				buffer[n++] = argv[start++];
			buffer[n] = '\0';
		}
		is_int_valid(buffer, size_stack);
		push_node_checked(stack_a, ft_atol(buffer));
		free(buffer);
		i = j - 1;
	}
}


void push_node(t_node **stack, int value)
{
	t_node *new = malloc(sizeof(t_node));
	if (!new)
		exit_prob();
	new->value = value;
	new->next = *stack;
	*stack = new;
}

void push_node_checked(t_node **stack, int x)
{
    if (value_exists(*stack, x) == 1)
        exit_prob();
    push_node(stack, x);
}
