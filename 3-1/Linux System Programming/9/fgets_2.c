#include <stdio.h>
#include <stdlib.h>

#define BUFFER_MAX 256

int main()
{
	char command[BUFFER_MAX];
	char *prompt = "Prompt>>";

	while(1){
		fputs(prompt, stdout); // printf what is written in prompt

		if(fgets(command, sizeof(command), stdin) == NULL) // get string and put it ins command
			break;

		system(command); // operate what is written in command
	}

	fprintf(stdout, "Good bye...\n");
	fflush(stdout); // flush buffer
	exit(0);
}
