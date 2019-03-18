#include <unistd.h>
#include <sys/stat.h>
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

void set_flag(int fd, int flags);
void clr_flag(int fd, int flags);

int main(int argc, char *argv[])
{
	char buf[1024] = {0};
	int ret;
/*
	int flags;
	flags = fcntl(0, F_GETFL, 0);
	if (flags == -1)
		ERR_EXIT("fcntl get flag error");

	ret = fcntl(0, F_SETFL, flags | O_NONBLOCK);
	if (ret == -1)
		ERR_EXIT("fcntl set flag error");
*/
	set_flag(0, O_NONBLOCK);
	clr_flag(0, O_NONBLOCK);
	ret = read(0, buf, 1024);
	if (ret == -1)
		ERR_EXIT("read error");

	printf("buf=%s\n", buf);
	return 0;
}

void set_flag(int fd, int flags)
{
	int val;
	val = fcntl(fd, F_GETFL, 0);
	if (val == -1)
                ERR_EXIT("fcntl get flag error");
	val |= flags;
	if (fcntl(fd, F_SETFL, val) < 0)
		ERR_EXIT("fcntl set flag error");
}

void clr_flag(int fd, int flags)
{
	int val;
	val = fcntl(fd, F_GETFL, 0);
	if (val == -1)
                ERR_EXIT("fcntl get flag error");
	val &= ~flags;
	if (fcntl(fd, F_SETFL, val) < 0)
		ERR_EXIT("fcntl set flag error");
}
