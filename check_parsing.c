/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:18:19 by anfiorit          #+#    #+#             */
/*   Updated: 2025/07/08 19:57:08 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_argument (char *argv, int *size_stack, t_node **stack_a)
{
	int		i;
	int		j;
	int		n;
	int		sign;
	char	*buffer;
	
	i = 0;
	while (argv[i])
	{
		sign = 0;
		while (argv[i] == ' ')	
			i++;
		if (argv[i] == '-' || argv[i] == '+')
		{
			sign++;
			i++;
		}
		if (argv[i] == '\0' || argv[i] == ' ')
			exit_prob();
		if (argv[i] <= '9' && argv[i] >= '0')
		{
			j = i;
			while (argv[j] && argv[j] != ' ')
				j++;
			buffer = malloc (sizeof (char) * (j - i + 1 + sign));
			if (!buffer)
				exit_prob();
			n = 0;
			if (sign)
				buffer[n++] = argv[i - 1];
			while (i < j)
				buffer[n++] = argv[i++];
			buffer[n] = '\0';	
			is_int_valid(buffer, size_stack);
			push_node(stack_a, ft_atoi(buffer));
			free(buffer);
		}
		else if (argv[i] && argv[i] != ' ')
			exit_prob();
	}
}

void is_int_valid(char *buffer, int *size)
{
	long	res;
	
	res = ft_atoi(buffer);
	if (res > 2147483647 || res < -2147483648)
		exit_prob();
	(*size)++;
}
