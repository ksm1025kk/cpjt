#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main5() {
	// if(){} else if(){} else{}
	// switch ~ case ~ break
	// switch�� : ��ġ�ϴ� ���� ã�� �� ����ϴ� ���ǹ�

	// if�� : �������� ,��ġ/����ġ ����(>, ==)
	// switch : ��ġ����(==)
	char word = 'a';
	// ����� �Ǵ� ������ ()�ȿ� ���´�
	switch (word) {
	case 'a':
		printf("�ܾ�� a �Դϴ�.\n");
		break;
	case 'b':
		printf("�ܾ�� b�Դϴ�.\n");
		break;
	case 'c':
		printf("�ܾ�� c�Դϴ�.\n");
		break;
	default:
		printf("�ش��ϴ� �ܾ �����ϴ�.\n");
	}

	int num = 0;
	printf("��ȣ�� �����ϼ���.>>");
	scanf("%d", &num);
	switch (num) {
	case 1:
		printf("1�� �����߽��ϴ�.\n");
		break;
	case 2:
		printf("2�� �����߽��ϴ�.\n");
		break;
	case 3:
		printf("3�� �����߽��ϴ�.\n");
		break;
	case 4:
		printf("4�� �����߽��ϴ�.\n");
		break;
	default:
		printf("������ ���� �����ϴ�.\n");
	}




	return 0;

}