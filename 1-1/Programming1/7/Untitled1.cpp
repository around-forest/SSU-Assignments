#include <stdio.h>
int main(void)
{
	int n, a, sum1;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	a=1;
	sum1=0;
	
	while(a<=n){
		if(n>0){
			sum1+=a;
		}
		else
			break;
		a++;
	}
	printf("%d", a);
	return 0;
}
