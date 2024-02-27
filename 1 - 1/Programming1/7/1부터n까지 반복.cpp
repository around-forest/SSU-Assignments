#include <stdio.h>
int main(void)
{
	int n, a, sum1;
	
	while (1){
	    
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	a=1;
	sum1=0;
	if (n>0){
    	while(a<=n){
    		sum1+=a;
    		a++;
    	}
	}
	else
	    break;
	printf("%d\n", sum1);
	}

}
