#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main7() {
	// while������ 1 ~ 10������ �� ���ϱ�

	int number = 1;
	int sum = 0;
	
	while (number <= 10) {
		number++;
		sum += number;
	}
	printf("1 ~ 10������ ���� %d\n", sum);


	return 0;
	
}