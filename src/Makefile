CFLAGS=-Wall -Werror
OBJS=$(patsubst %.c,%.o,$(wildcard *.c))

numeralstoarabic: $(OBJS)
	$(CC) $^ -o $@