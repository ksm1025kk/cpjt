#include<stdio.h>

int main5() {
	int num1 = 27;
	printf("1 : %d\n", num1 >= 10);		
	printf("2 : %d\n", num1 != 5);
	printf("3 : %d\n", num1 >= 27);		
	printf("4 : %d\n", num1 == 27);		
	printf("5 : %d\n", num1 != 30);		
	printf("6 : %d\n", num1 <= 27);		

	// ���� = 86, ���� = 75, ���� = 88, ��ȸ = 60, ���� = 96
	// ����� ���ϼ���(�Ҽ�������).
	int kor = 86, eng = 75, math = 88, soc = 60, sci = 96;
	int sum = 0;
	double avg = 0.0;
	sum = kor + eng + math + soc + sci;
	avg = (double)sum / 5.0;;
	printf("����� = %lf\n", (double)(kor + eng + math + soc + sci) / 5.0);
	printf("����� = %lf\n", avg);
	
	// ���������� ���
	int num = 5;
	// �� num�� ���������ڸ� ������ ����Ͽ� 6 6 8 ����� ������.
	printf("num�� �� : %d\n", ++num);
	printf("num�� �� : %d\n", num++);
	printf("num�� �� : %d\n", ++num);
	return 0;
}