#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>


#define ERR_EXIT(m) \
	do \
	{ \
		perror(m); \
		exit(EXIT_FAILURE); \
	} while(0)

int main(void)
{
	umask(0);
	int fd;
	fd = open("test.txt", O_WRONLY | O_CREAT, 0666);
	if (fd == -1)
		ERR_EXIT("open error");

	printf("open succ\n");
	return 0;
}
