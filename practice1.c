#include <stdio.h>

int main()
{
	printf("for문을 이용한 구구단\n");
	printf("몇 단을 외워볼까요?\n");

	int input;
	scanf("%d", &input);
	
	for(int i=1; i<10; i++)
	{
		printf("%d X %d = %d\n", input,i,input*i);		
	}
	return 0;
}
