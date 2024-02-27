#include <stdio.h>
#include <stdlib.h>

int main(){
	char *fname = "ssu_test.txt";
	FILE *fp;
	long position;
	int character;

	if((fp = fopen(fname, "r")) == NULL){ // fopen ssu_test
		fprintf(stderr, "fopen error for %s\n", fname);
		exit(1);
	}

	printf("Input number>> ");
	scanf("%ld", &position);
	fseek(fp, position-1, SEEK_SET); //set pointer as position - 1
	character = getc(fp); //read a character what is written in fp
	printf("%ldth character => %c\n", position, character);
	exit(0);
}
