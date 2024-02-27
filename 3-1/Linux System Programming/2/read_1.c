#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ssu_employee.h" //employee struct

int main(int argc, char *argv[])
{
	struct ssu_employee record;
	int fd;
	int record_num;

	if (argc < 2) {
		fprintf(stderr, "Usage : %s file\n", argv[0]); // print execution path
		exit(1);
	}

	if ((fd = open(argv[1], O_RDONLY)) < 0) { 
		fprintf(stderr, "open error for %s\n", argv[1]); // error for ssu_employeefile
		exit(1);
	}

	while(1) {
		printf("Enter record number : ");
		scanf("%d", &record_num); // == pid

		if(record_num < 0)
			break;

		if(lseek(fd, (long)record_num * sizeof(record), 0) < 0) { // from 0 (SEEK_SET) seek
			fprintf(stderr, "lseek error\n"); // to find the record(pid==record_num)
			exit(1);
		}

		if(read(fd, (char *)&record, sizeof(record)) > 0) // read (sizeof record)bytes from fd and
			printf("Employee : %s Salary : %d\n", record.name, record.salary);// put it in &record
		else
			printf("Record %d not found\n", record_num); // not found when it reaches the end on the file or error
	}

	close(fd);
	exit(0);
}
