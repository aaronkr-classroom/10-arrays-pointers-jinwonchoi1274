#include <stdio.h>
#include <stdlib.h> //atoi() 함수 있다. -> arrayToint 작성
#include <ctype.h>//isdigit() 함수 있다 -> numCheck() 작성

int numCheck(char ch) {
	return (int)ch >= '0' && ch <= '9'; //0이나 1 반환
}

int CheckOp(char op) {
	return op == '+' || op == '-' || op == '*' || op == '/';
}

int arryatToint(char str[]) {
	int i = 0,
		num = 0;

	//문자열에 반복하고 모든 문자가 숫자로 변경하기
	while (str[i] != '\0') {
		//숫자인지 확인하기
		if (numCheck(str[i])) {
			num = num * 10 + (str[i] - '0');//ASCII 48 빼고 사실 숫자로 변경
		}
		else {
			break;
		}
		i++; //다음 문자로 이동
	}

	return num;
}
int main(void) {
	char input[100],
		numStr1[50], numStr2[50],
		operator = '\0'; //연산자가 NULL로 초기화하기
	int i = 0, //원래 입력한 문자열의 인덱스 
		j = 0; //받고 싶은 숫자의 인덱스

	//사용자한태 수학함수 받기 (예:"12 + 34")
	printf("Enter a simple math mourmula (12+34):\n");
	fgets(input, sizeof(input), stdin);

	//#1: 첫번째 숫자를 추출하기
	while (input[i] != '\0' && numCheck(input[i])) {
		numStr1[j++] = input[i++];
	}
	numStr1[i] = '\0';

	//#2: 수학 연산자를 찾기
	if (CheckOp(input[i])) {
		operator = input[i++];
	}
	else {
		printf("Error: invalid operator!\n");
		return 1; //main 함수가 문제가 있기에 종료하기
	}

	j = 0; //두번째 숫자를 받기위해 초기화하기
	//#3: 두번째 숫자를 추출하기
	while (input[i] != '\0' && numCheck(input[i])) {
		numStr2[j++] = input[i++];
	}
	numStr2[j] = '\0';
	/*
	예:
	input = 123+456
	numStr1 = "123"
	operator = '+'
	numStr2 = "456"
	*/
	//두 numStr숫자로 변경하기
	int num1 = arryatToint(numStr1);
	int num2 = arryatToint(numStr2);
	int result = 0;

	//계산하기
	switch (operator) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 != 0)
			result = num1 / num2;
		else {
			printf("Error dibision by 0!\n");
			return 1;
		}
		break;
	default:
		printf("Error invalid operarator. use +,-,*,/\n");
		return 1;
	}
	printf("Result: %d %c %d = %d\n", num1, operator,num2, result);

	return 0;
}