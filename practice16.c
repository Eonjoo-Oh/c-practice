#include <stdio.h>

typedef struct
{
	char name[20];
	int kor;
	int eng;
	int math;
	float avg;
} student;

int main()
{
	student s[3];

	for(int i=0; i<3; i++)
	{
		printf("학생의 이름을 입력하시오\n");
		scanf("%s", s[i].name);

		printf("국어 성적을 입력하시오\n");
		scanf("%d", &s[i].kor);

		printf("영어 성적을 입력하시오\n");
		scanf("%d", &s[i].eng);

		printf("수학 성적을 입력하시오\n");
		scanf("%d", &s[i].math);
	
		s[i].avg = (s[i].kor + s[i].eng + s[i].math)/3;
	}

	for(int i=0; i<3; i++)
	{
		printf("%s의 평균 성적 ", s[i].name);
		printf("%1.f\n", s[i].avg);
	}


	return 0;
}
