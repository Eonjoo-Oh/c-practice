#include <stdio.h>

int main()
{
	printf("조건문을 이용하여 두 가지 조건 동시에 판별하기\n");
	printf("숫자를 입력하면 크기와 홀짝을 판별해드립니다.\n");

	int input;
	scanf("%d", &input);

	if(input>10 && input%2==0)
	{
		printf("%d는 10초과의 짝수입니다.", input);
	}
	
	else if(input>10 && input%2!=0)
	{
		printf("%d는 10초과의 홀수입니다.", input);
	}

	else if(input<=10 && input%2==0)
	{
		printf("%d는 10이하의 짝수입니다.", input);
	}
	
	else
	{
		printf("%d는 10이하의 홀수입니다.", input);
	}

	return 0;
}
