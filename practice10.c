#include <stdio.h>

int main()
{
	printf("조건문을 응용하여 배열의 홀짝 판별하기\n");
	printf("숫자 10개를 입력하시면 홀짝 개수를 알려드립니다.\n");

	int arr[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int even = 0;
	int odd = 0;

	for(int i=0; i<10; i++)
	{
		if(arr[i]%2==0)
		{
			 even++;
		}
		
		else
		{
			odd++;
		}
	}

	printf("짝수는 %d개, 홀수는 %d개 입니다.\n", even, odd);
	
	return 0;
}
