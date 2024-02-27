#include <stdio.h>
#include <stdlib.h>

int main(){
	char *fname = "ssu_test.txt";
	FILE *fp;
	long fsize;

	if((fp = fopen(fname, "r")) == NULL){ //fopen ssu_test
		fprintf(stderr, "fopen error for %s\n", fname);
		exit(1);
	}

	fseek(fp, 0, SEEK_END); // move pointer to the end
	fsize = ftell(fp); // tell where the pointer is => size of file
	printf("The size of <%s> is %ld bytes\n", fname, fsize);
	exit(0);
}
