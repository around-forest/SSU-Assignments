#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main(void)
{
	char *fname = "ssu_test.txt";
	char buf[BUFFER_SIZE];
	int fd;
	int length;

	if((fd = open(fname, O_RDONLY, 0644)) < 0) {
		fprintf(stderr, "open error for %s\n", fname);
		exit(1);
	}// fd를 디스크립터 3번에 호출

	dup2(1, 4); //표준출력 1번을 디스크립터 4번에 복사

	while(1){
		length = read(fd, buf, BUFFER_SIZE); //3번에서 읽고

		if(length <= 0)
			break;

		write(4, buf, length); //4번에 쓰기 -> 연결된 표준출력에서 출력
	}

	exit(0);
}
