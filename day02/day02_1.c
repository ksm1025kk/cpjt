#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main0() {
	// ��� : printf
	printf("hello world\n");
	// ( ctrl + shift + / ) ��ü�ּ�
	// (/*   */)  ������ �ּ�
	
	// ���� : �������
	// �������� : ������ ����� ���
	// �ڷ��� ������;
	char word;				// ������ ���� ���� (1 byte == 8 bit)				
	int number;				// ������ ����		(4 byte)
	double dnumber;			// �Ǽ��� ����		(8 byte)
	char str[256];			// ���ڿ��� ����	(1*256 byte)

	// ������ ���� ����(���Կ�����)
	// ������ = �����Ͱ�;
	word = 'q';
	number = -3;
	dnumber = 3.141592;
	sprintf(str, "hi world\n");
	// ���� �ʱ�ȭ(��������� ���ÿ� ���Ա���)
	char str2[256] = "hello world";
	// ���� ���
	int  number2 = number;			// number�� ����ִ� ���� ��� (�ڷ��� ���� �����ֱ�)
	printf("�������� %c\n", word);
	printf("�������� %d\n", number);
	printf("�Ǽ����� %lf\n", dnumber);
	printf("���ڿ����� %s\n", str2);

	int num1 = 2, num2 = 3;
	int sum = num1 + num2;
	int a = num1 - num2;
	int s = num1 * num2;
	int d = num1 / num2;
	int f = num1 % num2;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d\n", sum);
	printf("%d\n", a);
	printf("%d\n", s);
	printf("%d\n", d);
	printf("%lf\n", num1 / (double)num2);
	printf("%d\n", f);

	double num3 = 8.5, num4 = 1.2;
	double sum2 = num3 + num4;
	double q = num3 - num4;
	double w = num3 * num4;
	double e = num3 / num4;
	//double r = num3 % num4;
	printf("%lf + %lf = %lf\n", num3, num4, num3 + num4);
	printf("%lf\n", sum2);
	printf("%lf\n", q);
	printf("%lf\n", w);
	printf("%lf\n", e);
	//printf("%lf\n", r);

	return 0;
}



