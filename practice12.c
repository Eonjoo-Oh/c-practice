#include <stdio.h>

int main()
{
	printf("조건문을 이용한 소수구하기\n");
	printf("1부터 입력한 수까지 범위의 소수를 구해드립니다.\n");

	int input;
	scanf("%d", &input);

	for(int i=1; i<=input; i++)
	{
		int count = 0;
		for (int j=1; j<=input; j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}

		if(count==2)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
