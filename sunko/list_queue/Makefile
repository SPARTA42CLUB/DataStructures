TARGET = list_queue
SRCS = ListBaseQueue.c ListBaseQueueMain.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	gcc -o $@ $^


%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f  $(OBJS) $(BONUS_OBJS)

fclean:
	rm -f $(OBJS)  $(BONUS_OBJS) $(TARGET)
