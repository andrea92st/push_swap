/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:56:33 by fio               #+#    #+#             */
/*   Updated: 2025/08/14 16:26:43 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int **clear_tab (t_node **a)
{
	int	len_max;
	int **tab;

	len_max = len_tab(a);
	tab = (int) malloc (sizeof (int) * len_max);
	copy_tab(tab, a);
	tri_tab(tab, a);


}
void copy_tab(int **tab, t_node **a)
{
	int	i;
	t_node *index;

	i = 0;
	index = a;
	while(index)
	{
		tab[i] = index->value;
		index = index->next;
		i++;
	}
}

int len_tab(t_node **a)
{
	int	len;
	t_node *tmp;

	len = 0;
	tmp = *a;
	while(tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
void tri_tab(int **tab, t_node **a)
{
	
}