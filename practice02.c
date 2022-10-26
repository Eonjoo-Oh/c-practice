#include <stdio.h>

int main()
{
	printf("while문을 이용한 구구단\n");
	printf("몇 단을 외워볼까요\n");

	int input;
	scanf("%d", &input);

	int i=1;
	while(i<10)
	{
		printf("%d X %d = %d\n", input, i, input*i);
		i++;
	}

	return 0;
}
