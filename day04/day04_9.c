#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main8() {
	int number = 1;
	int sum = 0;

	while (number <= 10) {
		sum += number;
		number++;
	}
	printf("1 ~ 10������ �� : %d\n", sum);

	int add = 0;

	for (int i = 1; i <= 10; i++) {
		add += i;								// {}�ȿ��� ���� �ݺ��Ϸ��� �ϴ� �ڵ常 �ۼ�
	}
	printf("1 ~ 10������ �� : %d\n", add);

	return 0;
}