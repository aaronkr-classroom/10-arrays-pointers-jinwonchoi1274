#include <stdio.h>
#include <conio.h>

int main(void) {

	char input_data;
	int count = 1;
	printf("Enter chars('q', 'Q', or ESC to Quit)\n");

	//DRY = Don't Repeat yourself
	while (1) {
		if (_kbhit()) {
			input_data = getch(); //�� ���� ���ڸ� �Է¹���
			

			//'q','Q',ESC �Է������� �����ϱ�
			if (input_data == 'q' || input_data == 'Q' || input_data == 27) {
				printf("\nExiting program...\n");
				break;
			}
			rewind(stdin);// ǥ�� �Է� ���ۿ� �ִ� ��� �Է� ���� ������
			printf("input %d: %c\n", count++, input_data);
			
		}
	}
		

	return 0;
}