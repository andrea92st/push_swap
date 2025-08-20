/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:58:46 by fio               #+#    #+#             */
/*   Updated: 2025/08/20 20:41:02 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_value_in_a(t_node **stack, int first, int last)
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

void main_algo(t_node **a, t_node **b)
{
	int size_chunk;
	int head_chunk;
	int tail_chunk;
	int	len_max;

	len_max = len_stack(a);
	size_chunk = choose_chunk_size(a);
	head_chunk = 0;
	tail_chunk = size_chunk - 1;
	while(*a)
		while(is_value_in_a(a, head_chunk, tail_chunk))
		{
			find_val_pos(a, head_chunk, tail_chunk);
		}
		head_chunk += size_chunk;
		tail_chunk += size_chunk;

}
int pos_top(t_node **a, int *val, int top, int bottom)
{




}
int pos_bottom(t_node **a, int *val, int top, int bottom)
{



}
int find_val_pos(t_node **a, int start, int end)
{
	t_node *val;
	int count_bottom;
	int count_top;
	
	val = *a;
	count_top = pos_top(a, val, start, end);
	count_bottom = pos_bottom(a, val, start, end);
}