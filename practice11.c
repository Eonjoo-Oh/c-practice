#include <stdio.h>

int main()
{
	printf("조건문을 이용하여 최대값 최소값 구하기\n");
	printf("숫자 10개를 입력하면 가장 큰 수와 작을 수를 알려드립니다.\n");

	int arr[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int min = arr[0];
	int max = arr[0];

	for(int i=0; i<10; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
		
		else if(max < arr[i])
		{
			max = arr[i];
		}
	}	

	printf("최대값은 %d, 최소값은 %d입니다.\n", max, min);
	
	return 0;
}
