#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	char *fname = "ssu_test.txt"; // open에서 만든 txt파일 선언
	int fd;

	if((fd = creat(fname, 0666)) < 0){ // 0666 -> mode, open(pathname, O_RDWR|O_CREAT|O_TRUNC, mode)
		fprintf(stderr, "creat error for %s\n", fname);
		exit(1);
	}
	else {
		printf("Success!\nFilename : %s\nDescriptor : %d\n", fname, fd);
		close(fd);
	}

	exit(0);
}
