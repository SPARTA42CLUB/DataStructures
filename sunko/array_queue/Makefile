TARGET = Queue
SRCS = Queue_main.c Queue.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	gcc -o $@ $^

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(TARGET)
