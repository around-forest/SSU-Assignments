#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main(void)
{
	char buf[BUFFER_SIZE];
	char *fname = "ssu_test.txt";
	int fd1, fd2;
	int count;

	if((fd1 = open(fname, O_RDONLY, 0644)) < 0) {
		fprintf(stderr, "open error for %s\n", fname);
		exit(1);
	} //fd1 -> 디스크립터 3

	fd2 = dup(fd1); //fd1을 디스크립터 4로 복사
	count = read(fd1, buf, 12); //fd1의 내용 읽고
	buf[count] = 0;
	printf("fd1's printf : %s\n", buf); //fd1의 첫 12bytes 출력
	lseek(fd1, 1, SEEK_CUR); //offset 설정 후
	count = read(fd2, buf, 12); //fd2의 첫 12bytes 읽고
	buf[count] = 0;
	printf("fd2's printf : %s\n", buf); //출력. 단, fd1과 fd2는 offset을 공유
						//따라서 fd1에서의 12bytes 이후의 12출력
	exit(0);
}
