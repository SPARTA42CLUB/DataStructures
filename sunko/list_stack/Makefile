SRCS = list_base_stack.c list_base_stack_main.c
BONUS_SRCS = list_base_stack.c InfixToPostfixMain.c InfixToPostfix.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

bonus: make_bonus

$(NAEM): $(OBJS)
	gcc -o $@ $^

make_bonus: $(BONUS_OBJS)
	gcc -o calculator $^

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME) calculator
