#include <stdio.h>
int main()
{
	printf("비밀번호 4자리를 입력하세요\n");
	
	int pw;

	scanf("%d", &pw);
	
	int tries = 0;

	while(pw != 1234 && tries<2)
	{
		printf("비밀번호 4자리를 입력하세요");
		scanf("%d", &pw);
		tries++;
	}

	if(pw == 1234)
	{
		printf("로그인 되었습니다\n");
	}



	return 0;
}
