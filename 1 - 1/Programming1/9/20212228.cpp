#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	unsigned computer;
	int a;
	char player;

	srand(time(NULL));
	
	printf("가위(s) 바위(r) 보(p) 게임을 시작합니다.(게임종료 : 9)\n");
	
	while(1){
		printf("\n가위 바위 보를 선택하세요 : ");
		scanf(" %c", &player);
		
		if(!(player=='s'||player=='r'||player=='p'||player=='9'))
			continue;
		else if(player=='9'){
			printf("다음에 또 만나요.\n");
			break;
		}

		computer=rand();
	
		//computer%3이 0이면 가위, 1이면 바위, 2이면 1보이다.
		a=computer%3;

		if(player=='s'&&a==0){
			printf("당신은 가위를 냈고 컴퓨터는 가위를 냈습니다.\n");
			printf("당신은 비겼습니다.\n");
		}
		else if(player=='s'&&a==1){
			printf("당신은 가위를 냈고 컴퓨터는 바위를 냈습니다.\n");
			printf("당신은 졌습니다.\n");
		}
		else if(player=='s'&&a==2){
			printf("당신은 가위를 냈고 컴퓨터는 보를 냈습니다.\n");
			printf("당신이 이겼습니다.\n");
		}
		else if(player=='r'&&a==0){
			printf("당신은 바위를 냈고 컴퓨터는 가위를 냈습니다.\n");
			printf("당신이 이겼습니다.\n");
		}
		else if(player=='r'&&a==1){
			printf("당신은 바위를 냈고 컴퓨터는 바위를 냈습니다.\n");
			printf("당신은 비겼습니다.");
		}
		else if(player=='r'&&a==2){
			printf("당신은 바위를 냈고 컴퓨터는 보를 냈습니다.\n");
			printf("당신은 졌습니다.\n");
		}
		else if(player=='p'&&a==0){
			printf("당신은 보를 냈고 컴퓨터는 가위를 냈습니다.\n");
			printf("당신은 졌습니다.\n");
		}
		else if(player=='p'&&a==1){
			printf("당신은 보를 냈고 컴퓨터는 바위를 냈습니다.\n");
			printf("당신이 이겼습니다.\n");
		}
		else if(player=='p'&&a==2){
			printf("당신은 보를 냈고 컴퓨터는 보를 냈습니다.\n");
			printf("당신은 비겼습니다.\n");
		}
	}
	return 0;
}
