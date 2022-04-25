#include <stdio.h>

int main()
{
	printf("이중반복문을 이용한 직각삼각형 만들기\n");
	printf("삼각형의 높이를 입력하시오\n");

	int input;
	scanf("%d", &input);

	for(int i=0; i<input; i++)
	{
		for(int j=0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
