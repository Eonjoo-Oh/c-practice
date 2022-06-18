#include <stdio.h>
#include <string.h>
int main(){
	printf("This is Anagram Finder\n");
	char s1[10];
	char s2[10];
	int count = 0;

	printf("글자수가 같은 단어 두 개를 입력하면 anagram인지 판별해드립니다.\n10자 이하의 판별할 단어1을 입력하시오\n");
	scanf("%s", s1);
	printf("10자 이하의 판별할 단어2를 입력하시오\n");
	scanf("%s", s2);

	for(int i = 0; i < strlen(s1); i++){
		for(int j = 0; j < strlen(s2); j++){
			if(s1[i] == s2[j]){
				count++;
				break;
			}
		}
				
	}

	if(count == strlen(s1)){
		printf("It's Anagram");
	}
	else{
		printf("It's Not Anagram");
	}
	return 0; 
}
