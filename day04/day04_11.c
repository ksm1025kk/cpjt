#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main10() {

	int dan, mul;
	for (dan = 2; dan < 10; dan++) {
		for (mul = 1; mul < 10; mul++) {
			printf("%d * %d = %d ", dan, mul, dan * mul);
		}
		printf("\n");
	}
	
	//제어문(조건문 ,반복문, 기타) : 중첩시킬 수 있음
	// if 안에 if문
	int n1 = 0, n2 = 1;
	if (n1 < n2) {
		if (n1 != n2) {
			printf("n1과 n2는 같지않다.\n");
		}
		printf("n1이 작다.\n");
	}

	// 이중 for문
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}


	return 0;
}