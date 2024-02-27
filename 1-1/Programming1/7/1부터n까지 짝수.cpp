#include <stdio.h>
int main(void)
{
	int n, a, sum1;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	a=1;
	sum1=0;
	
	if(n<=0)
		return 0;
	else{
		while(a<=n){
			if(a%2==0){
				sum1 += a;
			}
			a++;
		}
			
	}

	printf("%d", sum1);
	return 0;
}
