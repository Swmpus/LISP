#include <stdio.h>

int main() 
{
	char Input[2048];

	printf("Ctrl + C to exit\n");

	while(1) {
		printf("Lispy> ");

		scanf("%s", Input);

		printf("No you're a %s!\n", Input);
	}
	return 0;
}