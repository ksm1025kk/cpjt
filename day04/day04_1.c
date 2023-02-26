#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main0() {
	int num = 3;

	if (num == 2) {
		printf("state 1 \n");
	}
	else if (num > 2 && num < 4) {
		printf("state 2 \n");					// 참이므로 밑으로는 다 무시됨
	}
	else if (num == 3) {
		printf("state 3 \n");
	}
	else {
		printf("state 4 \n");
	}

	return 0;
}