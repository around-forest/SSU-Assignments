#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main()
{
	char buf[BUFFER_SIZE];

	setbuf(stdout, buf);
	printf("Hello, ");
	sleep(1);
	printf("Noah!!");
	sleep(1);
	printf("\n");
	sleep(1);
//setbuf before printf
	setbuf(stdout, NULL);
	printf("How");
	sleep(1);
	printf(" are");
	sleep(1);
	printf(" you?");
	sleep(1);
	printf("\n");
	exit(0);
}
