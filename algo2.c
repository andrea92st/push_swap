/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:58:46 by fio               #+#    #+#             */
/*   Updated: 2025/08/27 12:21:40 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_value_in_chunk(t_node **stack, int first, int last)
{

	t_node *test;
	test = *stack;
	while(test)
	{
		if(test->value >= first && test->value <= last)
			return (1);
		test = test->next;
	}
	return (0);

}
int choose_chunk_size(t_node **stack)
{
	int len;

	len = len_stack(stack);
	if (len > 500)
		return (50);
	else if (len > 300)
		return (25);
	else if (len > 100)
		return (20);
	else if (len > 20)
		return (5);
	else
		return (3);
}

int chunk_is_not_sorted(t_node **b, int top, int bottom)
{
	t_node *tmp;
	int i;

	i = 0;
	tmp = *b;
	while (i < top)
	{
		tmp = tmp->next;
		i++;
	}
	while (i < bottom)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		i++;		
		tmp = tmp->next;
	}
	return (1);
}
