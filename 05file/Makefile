.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01cp 02lseek 03hole 04ls
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

