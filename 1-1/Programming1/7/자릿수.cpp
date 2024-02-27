#include <stdio.h>
int main(void)
{
	int n, a, b;
	
	printf("3자리 정수를 입력하세요 : ");
	scanf("%d", &n);
	
	if (n<100 || n>=1000)
		printf("3자리 정수가 아닙니다.");
	else{
		 a= n/100;
		 b= ((n%100)%10);
		 printf("백의 자리 숫자 : %d\n", a);
		 printf("일의 자리 숫자 : %d", b);
	}
	return 0;
}
