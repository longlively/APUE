.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01mkfifo 02fifor 03fifow 04fifow 05fifor
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

