#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main12() {
	
	// 1. ����ڰ� 1�̻��� ���� n�� �Է��ϸ� 1���� n������ ���� ���ϴ� ���α׷��� ���弼��
	int n = 0;
	int sum = 0;
	printf("1�̻��� ������ �Է��ϼ���.: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	
	
	// 2. 1���� 100������ ���� �� 6�� ����� ����ϴ� ���α׷� �����
	for (int number = 1; number <= 100; number++) {
		if (number % 6 == 0) {
			printf("%d\n", number);
		}
	}

	// 3.���ĺ��� �Է¹޾� ����ϴ� ���α׷� (��, �빮�ڸ� ���α׷� ����)
	// 65 ~ 90 : �빮��, 97 ~ 122 : �ҹ���
	char word = 0;

	while (1) {
		printf("���ĺ��� �Է��ϼ���: ");
		rewind(stdin);					//������ �� ����
		scanf("%c", &word);

		if (word >= 65 && word <= 90) {
			printf("�����մϴ�.\n");
			break;
		}
		else if (word >= 97 && word <= 122) {
			printf("%c �Է��߽��ϴ�.\n", word);
		}

	}


	return 0;

}