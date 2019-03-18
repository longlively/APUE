.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=01sigaction 02sigaction_recv 03sigqueue_send \
04sigaction_recv 05sigqueue_send
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

