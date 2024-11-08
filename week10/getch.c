#include <stdio.h>
#include <conio.h>

int main(void) {

	char input_data;
	int count = 1;
	printf("Enter chars('q', 'Q', or ESC to Quit)\n");

	//DRY = Don't Repeat yourself
	while (1) {
		if (_kbhit()) {
			input_data = getch(); //한 개의 문자를 입력받음
			

			//'q','Q',ESC 입력했으면 종료하기
			if (input_data == 'q' || input_data == 'Q' || input_data == 27) {
				printf("\nExiting program...\n");
				break;
			}
			rewind(stdin);// 표준 입력 버퍼에 있는 모든 입력 값을 제거함
			printf("input %d: %c\n", count++, input_data);
			
		}
	}
		

	return 0;
}