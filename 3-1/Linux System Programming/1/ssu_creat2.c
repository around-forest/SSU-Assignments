#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	char *fname = "ssu_test.txt";
	int fd;

	if((fd = creat(fname, 0666)) < 0) {
		fprintf(stderr, "creat error for %s\n", fname);
		exit(1);
	}
	else {
		close(fd); // txt 파일 성공적으로 오픈 시 close
		fd = open(fname, O_RDWR); // open을 통해 재오픈 -> O_RDWR 플래그를 사용해 read & write
		printf("Succeeded!\n<%s> is new readable and writable\n", fname);
	}

	exit(0);
}
