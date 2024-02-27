#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]){
	char buf[BUFFER_SIZE];
	FILE *fp;

	if(argc != 2){
		fprintf(stderr, "usage: %s <file>\n", argv[0]);
		exit(1);
	}

	if((fp = fopen(argv[1], "w+")) == NULL){ //open file readable and writable
		fprintf(stderr, "fopen error for %s\n", argv[1]);
		exit(1);
	}

	fputs("Input String >> ", stdout); //printf
	fgets(buf, sizeof(buf), stdin); //get input from user
	fputs(buf, fp); //put it in fp
	rewind(fp); // set offset on the first
	fgets(buf, sizeof(buf), fp); // read what is written in fp
	puts(buf); //printf
	fclose(fp);
	exit(0);
}

