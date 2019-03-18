.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01kill 02kill 03pause
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

