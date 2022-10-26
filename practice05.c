#include <stdio.h>

int main()
{
	printf("이중반복문을 이용한 역직각삼각형\n");
	printf("높이를 입력하시오\n");

	int input;
	scanf("%d", &input);

	for(int i=input; i>0; i--)
	{
		for(int j=i; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
