#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
	char *str;
	struct stat file_info;
	int i;

	for(i = 1; i < argc; i++){
		printf("name = %s, type = ", argv[i]);

		if(lstat(argv[i], &file_info) < 0){
			fprintf(stderr, "lstat error\n");
			continue;
		} //에러처리

		if(S_ISREG(file_info.st_mode))
			str = "register";
		else if(S_ISDIR(file_info.st_mode))
			str = "directory";
		else if(S_ISCHR(file_info.st_mode))
			str = "charactor special";
		else if(S_ISLNK(file_info.st_mode))
			str = "symbolic link";
		else if(S_ISFIFO(file_info.st_mode))
			str = "FIFO";
		else if(S_ISBLK(file_info.st_mode))
			str = "block special";
		else if(S_ISSOCK(file_info.st_mode))
			str = "socket";
		else
			str = "unknown mode";

		printf("%s\n", str);
	} //st_mode의 결과에 따라 파일 종류 출력

	exit(0);
}
