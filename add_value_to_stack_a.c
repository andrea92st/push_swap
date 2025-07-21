/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_value_to_stack_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:06:35 by anfiorit          #+#    #+#             */
/*   Updated: 2025/07/21 14:09:16 by fio              ###   ########.fr       */
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
	{
		sign = 0;
		while (argv[i] == ' ')	
			i++;
		if (argv[i] == '-' || argv[i] == '+')
		{
			sign++;
			i++;
		}
		if (is_whitespace(argv[i]) == 1)
			exit_prob();
		if (is_digit(argv[i]) == 1)
		{
			j = i;
			while (argv[j] && argv[j] != ' ')
				j++;
			buffer = malloc (sizeof (char) * (j - i + 1 + sign));
			if (!buffer)
				exit_prob();
			n = 0;
			if (sign)
				buffer[n++] = argv[i - 1];
			while (i < j)
				buffer[n++] = argv[i++];
			buffer[n] = '\0';	
			is_int_valid(buffer, size_stack);
			push_node_checked(stack_a, ft_atol(buffer));
			free(buffer);
		}
		else if (argv[i] && argv[i] != ' ')
			exit_prob();
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
