#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main(void)
{
	char *fname = "ssu_test.txt";
	off_t fsize;
	int fd;

	if((fd = open(fname, O_RDONLY)) < 0) { // ssu_test.txt file open
		fprintf(stderr, "open error for %s\n", fname);
		exit(1);
	}

	if((fsize = lseek(fd, 0, SEEK_END)) < 0) { // move offset to the end of the txt file
		fprintf(stderr, "lseek error\n"); // to get the size of the file in bytes
		exit(1);
	}

	printf("The size of <%s> is %ld bytes.\n", fname, fsize);

	exit(0);
}
