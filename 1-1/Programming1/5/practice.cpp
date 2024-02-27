#include <stdio.h>

int main(void)
{
	int a=2, b=-3, c=5, d=-7, e=11, answer1, answer2;
	answer1= a += b += c += 1+ 2;
	answer2= a += (b += (c += (1+ 2)));
	printf("%d\n", answer1);
	printf("%d\n", answer2);
	return 0;
}
