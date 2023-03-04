#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main13() {
	
	// 1. 100 ~ 200 숫자 중 3과 7의 배수를 출력하는 프로그램 만들기(단 3의 배수이면서 7의 배수이면 1번만 출력)
	for (int n = 100; n <= 200; n++) {
		if (n % 3 == 0 || n % 7 == 0) {
			printf("%d\n", n);
		}
	}
	printf("\n");

	for (int i = 100; i <= 200; i++) {
		if (i % 3 == 0 && i % 7 == 0) {
			printf("%d\n", i);
		}
	}
	// 2. 2~9 숫자중 두개를 입력받아 구구단을 출력하는 프로그램
	int n1, n2, start, end, swap;
	printf("정수를 입력하세요.: ");
	scanf("%d", &start);
	printf("정수를 입력하세요.: ");
	scanf("%d", &end);
	if (start > end) {
		swap = start;
		start = end;
		end = swap;
	}
	for (n1 = 1; n1 < 10; n1++) {
		for (n2 = start; n2 <= end; n2++) {
			printf("%d X %d = %d\t", n2, n1, n1 * n2);
			}
		}
		printf("\n");
	return 0;
}