#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, j, a;
	const char* temp;
	const char* array[10] = {
	"Seoul", "London", "Tokyo", "Paris", "Singapore", "Amsterdam", "Berlin", "Moscow", "Toronto", "Dubai"};

	for (i = 0; i < 9; i++) {
		j = i;
		a = strcmp(array[j], array[j + 1]);
		while (a > 0) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			
			if (j>0){
				j--;			
				a = strcmp(array[j], array[j + 1]);
			}
			else
				break;
		}
	}
	printf("Insertion Sort (global big cities)\n");
	printf("[Ascending order] : ");
	for (i = 0; i < 10; i++) {
		printf("%s ", array[i]);
	}

	for (i = 0; i < 9; i++) {
		j = i;
		a = strcmp(array[j], array[j + 1]);
		while (a < 0) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			
			if (j>0){
				j--;			
				a = strcmp(array[j], array[j + 1]);
			}
			else
				break;
		}
	}
	printf("\n[Descending order] : ");
	for (i = 0; i < 10; i++) {
		printf("%s ", array[i]);
	}
	getchar();
	return 0;
}
