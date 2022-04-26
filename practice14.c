#include <stdio.h>

int main()
{
	printf("삽입정렬을 이용한 숫자정렬하기\n");
	printf("숫자를 10개 입력하시면 내림차순으로 정렬해드립니다.\n");

	int arr[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int temp;
	int length=sizeof(arr)/sizeof(int);
	int j;

	for(int i=1; i<length; i++)
	{
		temp = arr[i];
		j = i-1;
		
		while(0<=j && temp > arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j+1]=temp;
	}
	

	for(int i=0; i<length; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
