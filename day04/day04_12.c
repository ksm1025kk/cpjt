#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main11() {

	// ���(control flow) : ���ǹ�, �ݺ���, �б⹮...
	// ���ǹ� : if, switch
	// �ݺ��� : while, for
	// ��Ÿ��� : �ݺ��� ������, switch�� ������

	// break : �ݺ��� ������, switch�� ������
	// continue : �ݺ��� ������ ���ư���

	int num;

	while (1) {
		printf("-1 �Է½� ���� : ");
		scanf("%d", &num);
		if (num == -1) {
			break;
			printf("�� �ڵ�� Dead Code �Դϴ�.");
		}
	}
	
	// continue : �ؿ� �ڵ�� ���̻� �������� �ʰ� ���� �ö�
	for (int n = 1; n <= 5; n++) {
		if (n == 3) {
			continue;
		}
		printf("%d\n", n);
	}
	
	return 0;
}