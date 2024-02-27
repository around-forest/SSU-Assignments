#include <stdio.h>
int main(void)
{
	int n, a;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	a=n;
	
	if(n<=0)
		return 0;
	else{
		while(--n>0)
			a+=n;
		}
	printf("%d", a);
	return 0;
}
