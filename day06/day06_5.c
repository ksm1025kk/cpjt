#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �Լ� add
int add(int n1, int n2) {
	return n1 + n2;
}

int AbsAdd(int num1, int num2) {
	if (num1 < 0) {
		num1 = num1 * -1;
	}
	if (num2 < 0) {
		num2 = num2 * -1;
	}
	int result = num1 + num2;
	return result;
}

int main4() {

	// �Լ� : ���� ��ȣ�� �Ѱ谡 ������ ����ڰ� ���� ����� ������, �ڵ带 �����ϴ� ���
	// (){}

	// + - * / % : ������ ��ɵ��� ����, ���� ���ѵǾ� ����
	int num1 = -3 + 5;
	printf("%d\n", num1);
	
	int num2 = add(-3, 5);
	printf("%d\n", num2);

	// ���밪���� ����� �����ִ� ����� ������
	int num3 = AbsAdd(-3, 5);
	printf("%d\n", num3);


	return 0;

}