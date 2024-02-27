#include <stdio.h>

int main(void)
{
	int pencil;
	int pack;
	int rest;
	
	printf("연필 개수를 입력하세요 : "); scanf("%d", &pencil);
	pack= int(pencil)/12;
	rest= int(pencil)%12;
	
	printf("연필 %d자루는 %d다스, %d자루입니다.", pencil, pack, rest);
	return 0;
}

