NAME = binomial_stack_call
SRCS = stack.c binomialCoefficient.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $@ $^

%.o: %.c
	gcc -c $< -o $@


clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)
