/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_triv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:54:21 by fio               #+#    #+#             */
/*   Updated: 2025/08/27 17:00:29 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **stack)
{
	int	a;
	int	b;

	a = (*stack)->value;
	b = (*stack)->next->value;
	if (a > b)
		sa(stack);
}

void	sort_three(t_node **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a > b && b > c && a > c)
	{
		sa(stack);
		rra(stack);
	}
	else if (a > b && b < c && a > c)
		ra(stack);
	else if (a < b && b > c && a < c)
	{
		sa(stack);
		ra(stack);
	}
	else if (a > b && b < c && a < c)
		sa(stack);
	else if (a < b && b > c && a > c)
		rra(stack);
	return ;
}

void	sort_four(t_node **a, t_node **b)
{
	t_node	*tmp;
	int		pos;

	tmp = *a;
	pos = find_min_triv(tmp);
	if (pos == 0)
	{
		pb(a, b);
		sort_three(a);
		pa(a, b);
	}
	if (pos == 1)
	{
		ra(a);
		pb(a, b);
		sort_three(a);
		pa(a, b);
	}	
	if (pos == 2)
	{
		ra(a);
		ra(a);
		pb(a, b);
		sort_three(a);
		pa(a, b);
	}
	if (pos == 3)
	{
		rra(a);
		pb(a, b);
		sort_three(a);
		pa(a, b);
	}
}

void	sort_five(t_node **a, t_node **b)
{
	t_node	*tmp;
	int		pos;

	tmp = *a;
	pos = find_min_triv(tmp);
	if (pos == 0)
		pos_zero(a, b);
	if (pos == 1)
		pos_one(a, b);
	if (pos == 2)
		pos_two(a, b);
	if (pos == 3)
	{
		rra(a);
		rra(a);
		pb(a, b);
		sort_four(a, b);
		pa(a, b);
	}
	if (pos == 4)
		pos_last(a, b);
}
