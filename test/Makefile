CFLAGS=-I../unity -I../src -std=c99 -Wall -Werror
LIBS=-L../unity -lunity
VPATH=../src

OBJS=$(patsubst %.c,%.o,$(wildcard *.c))

SUT_OBJECTS=roman.o

all: test-numerals
	./test-numerals

test-numerals: $(OBJS) $(SUT_OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	del *.o
	del test-numerals.exe