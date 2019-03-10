.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01fileno 02open 03open 04open 05open
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

