#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main(void){
	char buf[BUFFER_SIZE];
	int length;

	length = read(0, buf, BUFFER_SIZE);
	write(1, buf, length); //표준입력 1에서 read로 데이터 읽기

	exit(0);
}
