TARGET = list_queue
SRCS = ListBaseQueue.c ListBaseQueueMain.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)
bonus: make_bonus

$(TARGET): $(OBJS)
	gcc -o $@ $^

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f  $(OBJS)

fclean:
	rm -f $(OBJS) $(TARGET)
