/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:31:18 by anfiorit          #+#    #+#             */
/*   Updated: 2025/08/18 22:42:56 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_node *stack, char *name)
{
	printf("Stack %s:\n", name);
	while (stack != NULL)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

int main(int argc, char **argv)
{
	t_node 	*stack_a;
	t_node 	*stack_b;
	int		size;
	int 	i;

	stack_a = NULL;
	stack_b = NULL;
	size = 0;
	if (argc == 1)
		exit_prob();
	if (argc == 2)
		check_argument(argv[1], &size, &stack_a);
	if (argc > 2)
	{
		i = argc - 1;
		while (i > 0)
		{
			is_int_valid(argv[i], &size);
			push_node_checked(&stack_a, ft_atol(argv[i]));
			i--;
		}
	}
	if(is_sorted(stack_a) == 0)
	{
		free_stack(stack_a);
		return(ft_printf("cest deja tri"));
	}
	change_stack_val(&stack_a);
	if (size == 2)
		sort_three(&stack_a);
	if (size == 3)
		sort_three(&stack_a);
	if (size == 4)
		sort_four(&stack_a, &stack_b);
	if (size == 5)
		sort_five(&stack_a, &stack_b);
	print_stack(stack_a, "A");
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}


/*
✅ 1. Parser tous tes arguments

✅2. Remplir ta stack A


✅3. lancer une vérification des doublons

4. Vérifier si la stack est déjà triée

5. Choisir ton algorithme de tri (CHUnKS)

6. Implémenter les opérations autorisées

7. Implémenter ton algorithme

8. Stocker et afficher tes instructions

9. Nettoyer la mémoire
*/
