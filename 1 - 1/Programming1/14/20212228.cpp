#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	unsigned random;
	char answer;
	int num[5][6], temp;
	
	srand(time(NULL));

	//랜덤값 부여
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 6; j++){
			while (1){
				random = rand();
				if ((random % 46) > 0){
					num[i][j] = random % 46;
					break;
				}
				else 
					continue;
			}
		}
	}

	//중복값 확인
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			for (int m = j + 1; m < 6; m++){
				while(num[i][j] == num[i][m]){
					random = rand();
					if ((random % 46) > 0)
						num[i][m] = random % 46;							
					else
						continue;
				}
			}
		}		
	}

	//오름차순 - 버블정렬
	for(int i = 0; i < 5; i++){
		for (int j = 5; j > 0; j--){
			for (int m = 0; m < j; m++){
				if(num[i][m] > num[i][m + 1]){
					temp = num[i][m];
					num[i][m] = num[i][m + 1];
					num[i][m + 1] = temp;
				}
			}
		}
	}

	//출력
	printf("추천 로또 번호입니다.\n");
	for (int i = 0; i < 5; i++){
		printf("%d세트 : ", i + 1);

		for(int j = 0; j < 6; j++){
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
