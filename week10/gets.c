#include <stdio.h>

#define MAX_CHAR 50
int main(void) {
	//���ڿ��� �������� NULL ���� 0�� �����ؾ� ������
	//�ִ� 19���� ���ڱ��� ���尡��
	char input_str[MAX_CHAR];

	printf("Enter your English name:\n");

	//gets(input_str); //���ڿ��� ��� ���� �����÷ο� �߻�
	fgets(input_str, MAX_CHAR, stdin); //fgets(�Է� ���� ����,����,�Է½�Ʈ��)
	printf("name : %s\n", input_str);
	return 0;
}