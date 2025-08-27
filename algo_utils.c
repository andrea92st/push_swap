/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:47:01 by fio               #+#    #+#             */
/*   Updated: 2025/08/27 12:44:22 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_node **b)
{
	t_node	*tmp;
	int 	min_val;
	
	tmp = *b;
	min_val = tmp->value;
	while (tmp)
	{
		if (min_val > tmp->value)
			min_val = tmp->value;
		tmp = tmp->next;
	}
	return (min_val);
}

int find_min_triv(t_node *tmp)
{
	int	pos;
	int i;
	int min_val;

	min_val = tmp->value;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (min_val < tmp->value)
		{
			min_val = tmp->value;
			pos = i;
		}
		tmp = tmp->next;
	}
	return (pos);
}

int len_stack(t_node **stack)
{
	t_node *index;
	int	i;

	i = 0;
	index = *stack;
	while(index)
	{
		index = index->next;
		i++;
	}
	return (i);
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