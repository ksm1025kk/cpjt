#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ���� 2���� ���޹޾� �� ū ������ ��ȯ(������ 0 ��ȯ)
int getbigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2){
		return n2;
	}
	else {
		return 0;
	}
}
int math(int n3, int n4) {
	printf("%d + %d = %d\n", n3, n4, n3 + n4);
	printf("%d - %d = %d\n", n3, n4, n3 - n4);
	printf("%d * %d = %d\n", n3, n4, n3 * n4);
	printf("%d / %d = %d\n", n3, n4, n3 / n4);
}
int numadd(int n5, int n6) {
	int sum = 0;
	if (n5 < n6) {
		for (int i = n5; i <= n6; i++) {
			sum += i;
		}
		printf("%d�� %d ������ ���� %d\n", n5, n6, sum);
		return sum;
	}
	else if (n5 > n6) {
		for (int i = n6; i <= n5; i++) {
			sum += i;
		}
		printf("%d�� %d ������ ���� %d\n", n6, n5, sum);
		return sum;
	}
	else {
		sum = n5;
		printf("%d", sum);
	}
}

int seven(int n7) {
	int result = 0;
	int end = n7 + 200;
	for (int i = n7; i <= end; i++) {
		if (i % 7 == 0) {
			result += 1;
		}
	}
	printf("%d�� %d ������ 7�� ����� %d���Դϴ�.\n", n7, end, result);
	return result;
}

int high(n8) {
	int tall1 = 0;
	int tall2 = 0;
	tall1 = n8 / 100;
	tall2 = n8 % 100;
	printf("�Է��� Ű : %dcm\n", n8);
	printf("��� : %d.%dm�Դϴ�.\n", tall1, tall2);
}

int time(int n9) {
	int hour = 0;
	int minute = 0;
	int second = 0;

	hour = n9 / 60 / 60;
	minute = n9 % 3600 / 60;
	second = n9 % 60;

	printf("%d�ð�/%d��/%d��", hour, minute, second);
}

int main() {

	/*
	int result;
	result = getbigger(3, 5);
	printf("ù��° ��� : %d\n", result);

	result = getbigger(8, 2);
	printf("�ι�° ��� : %d\n", result);

	result = getbigger(7, 7);
	printf("����° ��� : %d\n", result);
	*/

	// �� ���� ������ �Ű� ������ �Է¹޾� �� ������ ���� ����, ����, ������ ����� ��� ����ϴ� �Լ� ����(��ȯx)
	//int result = math(10, 2);

	// �� ������ �Ű������� �޾� �� ���� ���̿� ��� ������ ���� ��ȯ�ϴ� �Լ� ����
	numadd(1, 10);
	numadd(10, 1);
	numadd(10, 10);

	// 3. ���� �Ѱ��� �Ű�����()�� �޾� �� ������ 200 �� ū ���� ������ 7�� ����� ��� �����ϴ��� ��ȯ���ִ� ���α׷�
	// ������ �Է��ϼ��� : 100
	// 100�� 300 ���� 7�� ����� 28�� �Դϴ�.
	
	seven(100);

	// 4. ����ڷκ��� Ű�� �Է¹޾� m ������ ��ȯ�ϴ� �Լ� ����
	// Ű�� cm������ �Է��ϼ��� : 181cm
	// ��� : 1.81m
	
	high(181);

	// 5. ��(second)�� �Է¹޾� �Ű�����()�� �����Ѵ�
	// �Լ��� ���޹��� �ʸ� ��/��/�� ���·� ������ֱ�
	// �� : 3615
	// ��ð�/���/����
	
	time(3615);

	return 0;

}