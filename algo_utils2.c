/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:44:57 by fio               #+#    #+#             */
/*   Updated: 2025/08/26 19:13:20 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void top_with_rra(int count, t_node **a, t_node **b)
{
	int i;

	i = 0;
	while (i < count)
	{
		rra(a);
		i++;
	}
	pb(a, b);
}
void top_with_ra(int count, t_node **a, t_node **b)
{
	int i;

	i = 0;
	while (i < count)
	{
		ra(a);
		i++;
	}
	pb(a, b);
}
int pos_top(t_node **a, int top, int bottom)
{
	t_node	*pos;
	int i;

	i = 0;
	pos = *a;
	while (pos)
	{
		if (pos->value >= top && pos->value <= bottom)
			return (i);
		pos = pos->next;
		i++;
	}
	return (i);
}
int pos_bottom(t_node **a, int top, int bottom)
{
	t_node	*index;
	int		len;
	int 	pos;
	int 	i;

	i = 0;
	pos = 0;
	len = len_stack(a);
	index = *a;
	while(index)
	{
		if (index->value >= top && index->value <= bottom)
			pos = i;
		i++;
		index = index->next;
	}
	return(len - pos);
}