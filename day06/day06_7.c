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

	// 4. ����ڷκ��� Ű�� �Է¹޾� m ������ ��ȯ�ϴ� �Լ� ����
	// Ű�� scanf, �Է��� main �Լ����� �����ϰ� ������ �Լ������� �Ű������� �޾� m ������ ��ȯ
	// Ű�� cm������ �Է��ϰԿ� : 181cm
	// ��� : 1.81m

	// 5. ��(second)�� �Է¹޾� �Ű�����()�� �����Ѵ�
	// �Լ��� ���޹��� �ʸ� ��/��/�� ���·� ������ֱ�
	// �� : 3615
	// ��ð�/���/����


	return 0;

}