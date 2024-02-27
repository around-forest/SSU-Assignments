#include <stdio.h>
int main(void) {

	char letter;

		printf("알파벳 문자를 입력하세요 : ");
		scanf("%c", &letter);

		if (letter <= 90)
			letter = letter - 'A' + 'a';

		else
			letter = letter - 'a' + 'A';

		printf("변환된 문자는 %c입니다.\n", letter);
	return 0;
}
