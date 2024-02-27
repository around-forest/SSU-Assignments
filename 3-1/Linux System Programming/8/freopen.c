#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){
	char *fname = "ssu_test.txt";
	int fd;

	printf("First printf : Hello, Noah!!\n");

	if((fd = open(fname, O_RDONLY)) < 0){
		fprintf(stderr, "open error for %s\n", fname);
		exit(1);
	}
// reopen fname and write it on stdout
	if(freopen(fname, "w", stdout) != NULL){
		printf("Second printf : Hello, Noah!!\n");
	}
	exit(0);
}
