#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main8() {
	int number = 1;
	int sum = 0;

	while (number <= 10) {
		sum += number;
		number++;
	}
	printf("1 ~ 10까지의 합 : %d\n", sum);

	int add = 0;

	for (int i = 1; i <= 10; i++) {
		add += i;								// {}안에는 내가 반복하려고 하는 코드만 작성
	}
	printf("1 ~ 10까지의 합 : %d\n", add);

	return 0;
}