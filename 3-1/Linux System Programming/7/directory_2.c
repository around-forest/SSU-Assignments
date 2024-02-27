#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>

#ifdef PATH_MAX
static int pathmax = PATH_MAX;
#else
static int pathmax = 0;
#endif

#define MAX_PATH_GUESSED 1024

#ifndef LINE_MAX
#define LINE_MAX 2048
#endif

char *pathname;
char command[LINE_MAX+1], grep_cmd[LINE_MAX];
//executing grep
int ssu_do_grep(){
	struct dirent *dirp;
	struct stat statbuf;
	char *ptr;
	DIR *dp;

	if(lstat(pathname, &statbuf) < 0){
		fprintf(stderr, "lstat error for %s\n", pathname);
		return 0;
	}
//if file is not a directory, execute command -> grep pathname
	if(S_ISDIR(statbuf.st_mode) == 0){
		sprintf(command, "%s %s", grep_cmd, pathname);
		printf("%s : \n", pathname);
		system(command);
		return 0;
	}
//get pointer according to the length of path name + '/'
	ptr = pathname + strlen(pathname);
	*ptr++ = '/';
	*ptr = '\0';
//get DIR struct
	if((dp = opendir(pathname)) == NULL){
		fprintf(stderr, "opendir error for %s\n", pathname);
		return 0;
	}
//get file name
	while ((dirp = readdir(dp)) != NULL)
		if(strcmp(dirp->d_name, ".") && strcmp(dirp->d_name, "..")){
			strcpy(ptr, dirp->d_name);
//grep recursive
			if(ssu_do_grep() < 0)
				break;
		}

	ptr[-1] = 0;
	closedir(dp);
	return 0;
}
//making grep -> grep argv[1] argv[2] ... argv[argc-1]
void ssu_make_grep(int argc, char *argv[]){
	int i;
	strcpy(grep_cmd, " grep");

	for(i = 1; i < argc-1; i++){
		strcat(grep_cmd, " ");
		strcat(grep_cmd, argv[i]);
	}
}

int main(int argc, char *argv[]){
	if(argc < 2){
		fprintf(stderr, "usage: %s <-CVbchilnsvwx> <-num> <-A num> <-B num> <-f file> \n"
				"		<-e> expr <directory>\n", argv[0]);
		exit(1);
	}

	if(pathmax == 0){
		if((pathmax = pathconf("/", _PC_PATH_MAX)) < 0)
			pathmax = MAX_PATH_GUESSED;
		else
			pathmax++;
	}

	if((pathname = (char *) malloc(pathmax+1)) == NULL){
		fprintf(stderr, "malloc error\n");
		exit(1);
	}

	strcpy(pathname, argv[argc-1]);
	ssu_make_grep(argc, argv);
	ssu_do_grep();
	exit(0);
}
