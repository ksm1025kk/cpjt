#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main13() {
	
	// 1. 100 ~ 200 ���� �� 3�� 7�� ����� ����ϴ� ���α׷� �����(�� 3�� ����̸鼭 7�� ����̸� 1���� ���)
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
	// 2. 2~9 ������ �ΰ��� �Է¹޾� �������� ����ϴ� ���α׷�
	int n1, n2, start, end, swap;
	printf("������ �Է��ϼ���.: ");
	scanf("%d", &start);
	printf("������ �Է��ϼ���.: ");
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