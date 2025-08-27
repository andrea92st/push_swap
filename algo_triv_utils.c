/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_triv_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:37:47 by fio               #+#    #+#             */
/*   Updated: 2025/08/27 16:21:56 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pos_zero(t_node **a, t_node **b)
{
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

void	pos_one(t_node **a, t_node **b)
{
	ra(a);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

void	pos_two(t_node **a, t_node **b)
{
	ra(a);
	ra(a);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

void	pos_last(t_node **a, t_node **b)
{
	rra(a);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}
