#include <stdio.h>
int main(){
	printf("이차원 배열의 합 구하기\n");
	printf("이차원 배열을 입력하시면 합을 구해드립니다.\n");
	
	int tarr[3][3];
	int sum = 0;

	for(int i = 0; i < 3; i++){
	
		for(int j = 0; j < 3; j++){
		
			printf("%d, %d값에 해당하는 값을 입력하시오: ", i, j);
			scanf("%d", &tarr[i][j]);
		}
	}

	printf("입력하신 이차원 배열입니다\n");
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d", tarr[i][j]);
		}
		printf("\n");
	}

	printf("이차원 배열 모든 요소의 합입니다");
	int rowDimension = sizeof(tarr)/sizeof(tarr[0]);
	int columnDimension = sizeof(tarr[0])/sizeof(int);
	for(int i = 0; i < rowDimension; i++){
		for(int j = 0; j < columnDimension; j++){
			sum += tarr[i][j];	
		}
	}
	printf("\n%d", sum);

	return 0;
}
