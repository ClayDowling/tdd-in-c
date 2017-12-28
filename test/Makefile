CFLAGS=-I../unity -I../src
LIBS=-L../unity -lunity
VPATH=../src

OBJS=$(patsubst %.c,%.o,$(wildcard *.c))

all: test-numerals
	./test-numerals

test-numerals: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	del *.o
	del test-numerals.exe