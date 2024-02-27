#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	const char *temp;
	const char *array[10] = {
	"Horse", "Bear", "Tiger", "Lion", "Wolf", "Dog", "Rabbit", "Pig", "Monkey", "Cow"};
	
	for ( j = 0; j < 9; j++){
		for ( i = 0; i < 9 - j; i++){
			if (strcmp(array[i], array[i + 1]) > 0){
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	printf("Bubble Sort (animals - mammals)\n");
	printf("[Ascending order] : ");
	for (i = 0; i < 10; i++){
		printf("%s ", array[i]);
	}
	
	for ( j = 0; j < 9; j++){
		for ( i = 0; i < 9 - j; i++){
			if (strcmp(array[i], array[i + 1]) < 0){
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	printf("\n[Descending order] : ");
	for (i = 0; i < 10; i++){
		printf("%s ", array[i]);
	}	
	getchar();
	return 0;
}
