.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01fork 02fork 03vfork 04exit 05atexit \
06fork 07fork 08execve
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

