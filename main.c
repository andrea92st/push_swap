/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:31:18 by anfiorit          #+#    #+#             */
/*   Updated: 2025/07/08 20:09:57 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_node *stack, char *name)
{
	printf("Stack %s:\n", name);
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
	printf("----\n");
}

int main(int argc, char ** argv)
{
	t_node 	*stack_a;
	t_node 	*stack_b;
	int		size;
	int 	i;

	size = 0;

	if (argc == 1)
		exit_prob();
	if (argc == 2)
		check_argument(argv[1], &size, &stack_a);
	if (argc > 2)
	{
		i = 1;
		while (i < argc)
		{
			is_int_valid(argv[i], &size);
			push_node(&stack_a, ft_atoi(argv[i]));
			i++;
		}
	}
	print_stack(stack_a, "A");
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}


/*
✅ 1. Parser tous tes arguments

2. Remplir ta stack A
OUI CA REMPLIT MAIS YA SEGFAULT ET CA AFFICHE PAS LE MSG DERREUR 
EXEMPLE ./a.out "4 65 21a 5b3" il va sortir  
3
5
21
65
4

3. lancer une vérification des doublons

4. Vérifier si la stack est déjà triée

5. Choisir ton algorithme de tri (CHUnKS)

6. Implémenter les opérations autorisées

7. Implémenter ton algorithme

8. Stocker et afficher tes instructions

9. Nettoyer la mémoire
*/
