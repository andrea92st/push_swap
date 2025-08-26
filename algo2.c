/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:58:46 by fio               #+#    #+#             */
/*   Updated: 2025/08/26 19:13:18 by fio              ###   ########.fr       */
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

void find_and_send(t_node **a, t_node **b,  int top, int bottom)
{
	int count_moves_bottom;
	int count_moves_top;

	
	count_moves_top = pos_top(a, top, bottom);
	count_moves_bottom = pos_bottom(a, top, bottom);
	if (count_moves_top == 0)
	{
		pb(a, b);
		return;
	}
	else if (count_moves_top <= count_moves_bottom)
		top_with_ra(count_moves_top, a, b);
	else
		top_with_rra(count_moves_bottom, a, b);

}
int chunk_is_not_sorted(t_node **b, int top, int bottom)
{
	t_node *tmp;
	int i;

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
