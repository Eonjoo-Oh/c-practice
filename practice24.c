#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i;
	printf("1부터 입력하신 숫자 중 랜덤으로 1개를 뽑아드립니다\n");
	printf("마지막 숫자를 입력하시오: ");
	scanf("%d", &i);
	
	int randomNumber = rand() % i + 1;
	printf("\n랜덤 숫자는");
	printf("%d입니다!\n", randomNumber);
}
