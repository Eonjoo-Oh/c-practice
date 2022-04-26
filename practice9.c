#include <stdio.h>

int main()
{
	printf("switch문을 이용한 수행평가 성적표 만들기\n");
	printf("점수를 입력하시오(10점 만점)\n");

	int input;
	scanf("%d", &input);

	switch(input)
	{
		case 1:
		case 2:
		case 3:
			printf("C등급 입니다.\n");
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			printf("B등급 입니다.\n");
			break;
		case 8:
		case 9:
		case 10:
			printf("A등급 입니다.\n");
			break;
		default:
			printf("범위에 맞지 않는 값입니다.\n");
	}

	return 0;
}
