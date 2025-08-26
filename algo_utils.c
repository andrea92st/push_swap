/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:47:01 by fio               #+#    #+#             */
/*   Updated: 2025/08/26 19:13:21 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_node *tmp)
{
	int	pos;
	int i;
	int min_val;

	pos = 0;
	i = 0;
	
	min_val = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		i++;
		if (min_val > tmp->value)
		{
			min_val = tmp->value;
			pos = i;
		}
		
		tmp = tmp->next;
	}
	return (pos);
}

int find_max(t_node *tmp)
{
	int	pos;
	int i;
	int max_val;

	pos = 0;
	i = 0;
	
	max_val = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		i++;
		if (max_val < tmp->value)
		{
			max_val = tmp->value;
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
