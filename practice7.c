#include <stdio.h>

int main()
{
	printf("조건문을 이용한 홀짝 판별하기\n");
	printf("입력하는 수의 홀짝을 판별하드립니다\n");
	
	int input;
	scanf("%d", &input);

	if(input%2==0 && input!=0)
	{
		printf("짝수입니다.\n");
	}

	else if(input%2!=0 && input!=0)
	{
		printf("홀수입니다.\n");
	}
	
	else
	{
		printf("0입니다.\n");
	}
	return 0;
}
