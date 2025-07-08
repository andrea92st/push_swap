/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:18:19 by anfiorit          #+#    #+#             */
/*   Updated: 2025/07/08 17:37:53 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_argument (char *argv)
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
			check_int(buffer);
			free(buffer);
		}
		else if (argv[i] && argv[i] != ' ')
			exit_prob();
	}
}

void exit_prob(void)
{
	ft_printf("probleme d'argument tonton");
	exit(1);
}

void check_int(char *buffer)
{
	char	*str;
	int		len;
	long	res;
	
	len = ft_strlen(buffer);
	res = ft_atoi(buffer);
}















/*./a.out "6 5 4 3"

ac == 2
	split


./a.out 4 3 7 9 6 
ac > 2
*/