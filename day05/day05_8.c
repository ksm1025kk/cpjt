#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main7() {

	int a = 10;				// ���� a�� 10 ��Ƽ� �����
	int *p = &a;			// �����ͺ��� p�� a�� �ּҸ� ��� �����
	*p = 20;				// �������ؼ� 20 ������ a�� 20 ����
	printf("%d", a);			
	*p = 50;				// �������ؼ� 50 ������ a�� 50 ��
	printf("%d\n",a);

	// ���� 10�� �����ϴ� int�� ���� number�� ���� �� �ʱ�ȭ�ϰ�
	// number�� ����� �޸� �ּҸ� �����ϴ� ������ ���� pnumber�� �����մϴ�.
	// �׸��� printf�Լ��� ȣ���� ���� 10�� ���� number�� �ּҸ� ����ϼ���
	// �̶� printf �Լ��� ��� �����ͷδ� ������ ���� pnumber ���� �̿��ϼ���

	int number = 10;
	int *pnumber = &number;
	printf("%d\n", *pnumber);
	printf("%p\n", pnumber);
	printf("%p\n", &number);

	int *ptr;
	int num1 = 5;
	int num2 = 8;
	
	ptr = &num1;
	printf("%d\n", *ptr);
	ptr= &num2;
	printf("%d\n", *ptr);

	int n1 = 100, n2 = 200;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("%d %d\n", *ptr1, *ptr2);

	ptr1 = &n2;
	ptr2 = &n1;
	printf("%d %d\n", *ptr1, *ptr2);

	return 0;

}