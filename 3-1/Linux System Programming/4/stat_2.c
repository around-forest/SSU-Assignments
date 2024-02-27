#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

struct stat statbuf;

void ssu_checkfile(char *fname, time_t *time);

int main(int argc, char *argv[]) {
	time_t intertime;

	if(argc != 2){
		fprintf(stderr, "usage: %s <file>\n", argv[0]);
		exit(1);
	}

	if(stat(argv[1], &statbuf) < 0){
		fprintf(stderr, "stat error for %s\n", argv[1]);
		exit(1);
	}

	intertime = statbuf.st_mtime; //파일의 최종 수정시간 intertime에 저장

	while(1){
		ssu_checkfile(argv[1], &intertime); //수정시간의 변경 여부 확인
		sleep(10);
	}
}

void ssu_checkfile(char *fname, time_t *time){
	if(stat(fname, &statbuf) < 0){
		fprintf(stderr, "Warning : ssu_checkfile() error!\n");
		exit(1);
	} //파일 에러 처리

	else{
		if(statbuf.st_mtime != *time){
			printf("Warning : %s was modified!\n", fname);
			*time = statbuf.st_mtime;	
		} //파일의 수정시간이 첫 호출시와 다를 경우 경고문 출력
	}
}
