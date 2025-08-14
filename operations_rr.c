/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:11:09 by fio               #+#    #+#             */
/*   Updated: 2025/08/14 14:20:41 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a)
{
	t_node *head;
	t_node *last;
	
	if (!a || !*a || !(*a)->next)
    	return;
	last = *a; 
	while(last->next->next)
		last = last->next;
	head = last->next;
	last->next = NULL;
	head->next = *a;
	*a = head;
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{

}

void	rrr(t_node **a, t_node **b)
{


}