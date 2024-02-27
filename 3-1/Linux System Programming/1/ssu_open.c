#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> // + <unistd.h> 까지 넣고 시작하기!

int main(void)
{
	char *fname = "ssu_test.txt"; // txt 파일 선언
	int fd;

	if((fd = open(fname, O_RDONLY)) < 0){ // 에러 처리
		fprintf(stderr, "open error for %s\n", fname);
		exit(1);
	}
	else
		printf("Success!\nFilename : %s\nDescriptor : %d\n", fname, fd); // 오픈 성공 시 파일 디스크립터 3을 리턴
	exit(0);
}

