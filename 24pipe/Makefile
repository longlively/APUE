.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01pipe 02pipe 03pipe 04pipe 05pipe
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

