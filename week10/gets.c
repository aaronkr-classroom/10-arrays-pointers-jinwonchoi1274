#include <stdio.h>

#define MAX_CHAR 50
int main(void) {
	//문자열은 마지막에 NULL 문자 0을 포함해야 함으로
	//최대 19개의 문자까지 저장가능
	char input_str[MAX_CHAR];

	printf("Enter your English name:\n");

	//gets(input_str); //문자열이 길면 버퍼 오버플로우 발생
	fgets(input_str, MAX_CHAR, stdin); //fgets(입력 받을 변수,길이,입력스트림)
	printf("name : %s\n", input_str);
	return 0;
}