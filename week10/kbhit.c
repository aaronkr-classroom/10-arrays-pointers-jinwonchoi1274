#include <stdio.h>
#include <conio.h>

int main(void) {
	int ch;

	printf("Press any keyboard to see ASCII value (ESC to quit):\n");

	while (1) {
		if (_kbhit()) {
			ch = _getch();

			if (ch == 27) {
				printf("ESC pressed! Exiting...");
				break;
			}

			//출력 가능한 키
			if (ch >= 32 && ch <= 126) {
				printf("key:%c, ASCII: %d\n", ch, ch);
			}
			//출력 불가능한 키
			else {
				printf("ASCII:%d\n", ch);
			}
		}
	}

	return 0;
}