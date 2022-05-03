#include <stdio.h>

void bubblesort(int *arr, int len)
{
	int temp;

	for(int i=0; i<len-1; i++)
	{
		for(int j=0; j<len-i-1; j++)
		{
			if(*(arr+j) > *(arr+j+1))
			{
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
}

int main()
{
	printf("포인터로 버블 정렬 함수 만들기\n");
	printf("숫자 10개를 입력하면 오름차순으로 정렬해드립니다\n");

	int arr[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	bubblesort(arr, 10);

	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;

}
