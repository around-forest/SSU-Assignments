#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h> // mode is defined in sys/stat.h

#define CREAT_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) // define creat mode flags

char buf1[] = "1234567890";
char buf2[] = "ABCDEFGHIJ"; // global variable

int main(void){
	char *fname = "ssu_hole.txt";
	int fd;

	if((fd = creat(fname, CREAT_MODE)) < 0) { // create a new file named ssu_hole.txt
		fprintf(stderr, "creat error for %s\n", fname);
		exit(1);
	}

	if(write(fd, buf1, 12) != 12) { // change 12 to 11 will make both Linux and Mac work
		fprintf(stderr, "buf1 write error\n"); 
		exit(1);
	} //writing buf1 on the new txt file from the beginning(using 12bytes)

	if(lseek(fd, 15000, SEEK_SET) < 0) { // spacing 15000bytes using lseek()
		fprintf(stderr, "lseek error\n");
		exit(1);
	} // this will make the file size larger

	if(write(fd, buf2, 12) != 12) { // after spacing 15000bytes, write buf2
		fprintf(stderr, "buf2 write error\n");
		exit(1);
	}

	// expectation -> 12bytes of buf1 + 15000bytes of spacing + 12bytes of buf2
	exit(0);
}
