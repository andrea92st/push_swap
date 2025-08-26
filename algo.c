/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:07:41 by fio               #+#    #+#             */
/*   Updated: 2025/08/26 19:13:16 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void main_algo(t_node **a, t_node **b)
{
	push_to_b(a, b);
	sort_and_pushback(a, b);




}
void sort_and_pushback(t_node **a, t_node **b)
{
	



}
void push_to_b(t_node **a, t_node **b)
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
	{
		if (tail_chunk >= len_max)
			tail_chunk = len_max - 1;
		while(is_value_in_chunk(a, head_chunk, tail_chunk))
			find_and_send(a, b, head_chunk, tail_chunk);
		head_chunk += size_chunk;
		tail_chunk += size_chunk;
		if (head_chunk >= len_max)
			break ;
	}
}