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
	
	//���(���ǹ� ,�ݺ���, ��Ÿ) : ��ø��ų �� ����
	// if �ȿ� if��
	int n1 = 0, n2 = 1;
	if (n1 < n2) {
		if (n1 != n2) {
			printf("n1�� n2�� �����ʴ�.\n");
		}
		printf("n1�� �۴�.\n");
	}

	// ���� for��
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}


	return 0;
}