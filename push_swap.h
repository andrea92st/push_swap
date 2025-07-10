#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdarg.h>


typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

void	ft_putchar(char c);
int		ft_printf(const char *format, ...);
int		conv2hexp(unsigned long n, char *base);
int		conv2str(char *str);
int		conv2int(int n);
int		conv2u(unsigned int n);

void	check_argument(char *argv, int *size, t_node **stack_a);
void	exit_prob(void);
int		ft_atoi(const char *str);
int		ft_strlen(char *str);
void	push_node(t_node **stack, int value);
void	is_int_valid(char *buffer, int *size);
void	free_stack(t_node *stack);

void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

#endif