#include<stdio.h>

int main2() {
	int num1, num2;
	// �Է�
	printf("num1�� ���� �Է��ϼ���. >> ");
	scanf("%d", &num1);
	printf("num2�� ���� �Է��ϼ���. >> ");
	scanf("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %lf\n", num1, num2, num1 / (double)num2);
	printf("%d�� %d�� ���� �������� %d\n", num1, num2, num1 % num2);
	
	double num3, num4;
	printf("num3�� ���� �Է��ϼ���. >> ");
	scanf("%d", &num3);
	printf("num4�� ���� �Է��ϼ���. >> ");
	scanf("%d", &num4);

	printf("%if + %if = %if\n", num3, num4, num3 + num4);
	printf("%if - %if = %if\n", num3, num4, num3 - num4);
	printf("%if * %if = %if\n", num3, num4, num3 * num4);
	printf("%if / %if = %lf\n", num3, num4, num3 / num4);
	//printf("%if�� %if�� ���� �������� %if", num3, num4, num3 % num4);
	return 0;

}