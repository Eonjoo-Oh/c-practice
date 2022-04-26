#include <stdio.h>

int main()
{
	printf("버블정렬을 이용하여 숫자 정렬하기\n");
	printf("숫자 10개를 입력하면 오름차순으로 정렬해드립니다.\n");

	int arr[10];
	int temp;
	int length= sizeof(arr) / sizeof(int);

	for(int i=0; i<length; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<length-1; i++)
	{
		for (int j=0; j<length-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}

	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
