#include<stdio.h>

int main() {
	int kor = 50, eng = 40, math = 60;
	int sum = 0;
	sum = kor + eng + math;
	double avr = 0.0;
	avr = (double)sum / 3;

	printf("�հ�� %d\n", kor + eng + math);
	printf("����� %d\n", (kor + eng + math)/3);
	printf("�հ�� %d\n", sum);
	printf("����� %lf", avr);

	return 0;

}