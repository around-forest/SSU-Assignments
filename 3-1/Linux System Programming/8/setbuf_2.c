#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main(){
	char buf[BUFFER_SIZE];
	int a, b;
	int i;
//setbuf for scanf
	setbuf(stdin, buf);
	scanf("%d %d", &a, &b);
//print character in buf
	for(i = 0; buf[i] != '\n'; i++)
		putchar(buf[i]);

	putchar('\n');
	exit(0);
}
