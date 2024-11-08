#include <stdio.h>
#include <conio.h>

int main(void) {
	//입력 문자가 있으면 계속 읽고 출력하는 프로그램
	//@까지 읽을수있다
	char ch;

	printf("Enter char to read (@ to stop):\n");

	while ((ch = getc(stdin)) != '@') {
		//받은 문자를 다시 출력하기
		putchar(ch);
	}
	printf("\nEnd of input.\n");

	return 0;
}