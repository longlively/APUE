.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01fileshare 02dup
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

