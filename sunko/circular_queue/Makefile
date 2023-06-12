TARGET = queue
SRC = CircularQueue.c CircularQueueMain.c
OBJS = $(SRC:.c=.o)
BONUS_SRCS = CircularQueue.c HamburgerSim.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(TARGET)
bonus: hamburger_sim

$(TARGET): $(OBJS)
	gcc -o $@ $^

hamburger_sim: $(BONUS_OBJS)
	gcc -o $@ $^

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:
	rm -f $(OBJS) $(BONUS_OBJS) $(TARGET) hamburger_sim


