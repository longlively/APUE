.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01setitimer 02setitimer 03setitimer
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

