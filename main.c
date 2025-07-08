/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:31:18 by anfiorit          #+#    #+#             */
/*   Updated: 2025/07/08 18:18:14 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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
		is_int_valid(argv[1], &size);
	if (argc > 2)
	{
		i = 1;
		while (i < argc)
		{
			is_int_valid(argv[i], &size);
			//push_node(&stack_a, ft_atoi(argv[i]));
			i++;
		}
	}
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}


}



✅ 1. Parser tous tes arguments

2. Remplir ta stack A

3. lancer une vérification des doublons

4. Vérifier si la stack est déjà triée

5. Choisir ton algorithme de tri (CHUnKS)

6. Implémenter les opérations autorisées

7. Implémenter ton algorithme

8. Stocker et afficher tes instructions

9. Nettoyer la mémoire
