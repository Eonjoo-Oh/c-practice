#include <stdio.h>

int main()
{
	printf("이중반복문을 이용한 피라미드만들기\n");
	printf("높이를 입력하시오\n");

	int input;
	scanf("%d", &input);

	for(int i=0; i<input; i++)
	{
		for(int j=input-1-i; j>0; j--)
		{
			printf(" ");
		}
	
		for(int k=1; k<=i*2+1; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
