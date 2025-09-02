NAME = push_swap.a

CC = cc 

FLAGS = -Wall -Werror -Wextra

SRCS = add_value_to_stack_a.c algo_oper.c algo_spe.c algo_utils.c algo.c \
		algo2.c check_parsing.c free_exit.c ft_printf_utils_2.c ft_printf_utils.c \
		ft_printf.c main.c operations_p.c operations_s.c operations_r.c \
		operations_rr.c remap_stack.c utils.c

AR = ar rcs

OBJS = $(SRCS:.c=.o)

RM = rm -f

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	
$(NAME): $(OBJS)
	$(AR) $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all
