#include <stdio.h>

int main()
{
	printf("반복문을 이용한 누적계산기\n");
	printf("1부터 입력한 수까지 더한 값을 알려드립니다\n");

	int input;
	scanf("%d", &input);

	int sumFor = 0;
	for(int i=1; i<=input; i++)
	{
		sumFor += i;
	}

	int sumWhile = 0;
	int j = 1;
	while(j<=input)
	{
		sumWhile += j;
		j++;
	}

	printf("sumFor=%d, sumWhile=%d\n", sumFor, sumWhile);

	return 0;
}
