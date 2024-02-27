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
	} //fd를 디스크립터 3에 호출

	printf("First printf is on the screen.\n"); //1번 디스크립터 출력
	dup2(fd, 1); //fd의 내용 디스크립터 1에 복사

	printf("Second printf is in this file.\n"); //1번에 출력되야할 printf는
	exit(0); //1번 디스크립터에 연결된 새 파일에 출력
}
