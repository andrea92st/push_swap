/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_value_to_stack_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:06:35 by anfiorit          #+#    #+#             */
/*   Updated: 2025/07/10 18:02:32 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	value_exists(t_node *head, int x)
{
	while(head)
	{
		if(head->value == x)
			return (1);
		head = head->next;
	}
	return (0);
} 
