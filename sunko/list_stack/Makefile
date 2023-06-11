TARGET = list_stack
SRCS = list_base_stack.c list_base_stack_main.c
BONUS_SRCS = list_base_stack.c InfixToPostfix.c PostCalculator.c InfixCalculator.c Calculator.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(TARGET)
bonus: make_bonus

$(TARGET): $(OBJS)
	gcc -o $@ $^

make_bonus: $(BONUS_OBJS)
	gcc -o calculator $^

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:
	rm -f $(OBJS) $(BONUS_OBJS) $(TARGET) calculator
