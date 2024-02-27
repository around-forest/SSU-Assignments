#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *fname = "ssu_test.txt";
	char *mode = "r";
//open file name ssu_test.txt
	if(fopen(fname, mode) == NULL){
		fprintf(stderr, "fopen error for %s\n", fname);
		exit(1);
	}

	else
		printf("Success!\nFilename: <%s>, mode: <%s>\n", fname, mode);

	exit(0);
}
