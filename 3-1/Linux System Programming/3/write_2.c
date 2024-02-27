#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
#define S_MODE 0644

int main(int argc, char *argv[]) 
{
	int length;
	int fd1, fd2;
	char buf[BUFFER_SIZE];

	if(argc != 3) {
		fprintf(stderr, "Usage : %s filein fileout\n", argv[0]);
		exit(1);
	}

	if((fd1 = open(argv[1], O_RDONLY)) < 0) {
		fprintf(stderr, "open error for %s\n", argv[1]);
		exit(1);
	} //첫번째 인자 fd1으로 오픈

	if((fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_MODE)) < 0) {
		fprintf(stderr, "open error for %s\n", argv[2]);
		exit(1);
	} //두번째 인자 fd2로 오픈

	while ((length = read(fd1, buf, BUFFER_SIZE)) > 0) { //첫번째 파일에서 read
		write(fd2, buf, length);//두번째 파일에 read한 내용 write(문자열 길이만큼)
	}

	exit(0);
}
