#include<stdio.h>

int main6() {
	/*
	프로그래밍 언어에는 연산기호가 제공됨(연산자)
	+, -, *, / ,% ...
	*/
	3 + 4;							// 연산기호는 각 기능을 제공해주고 사용법이 정해져있음

	int num1, num2;
	num1 = 1, num2 = 2;

	num1 + num2;
	printf("합은 : %d", num1 + num2);

	int num3 = 0;
	num3 = num1 - num2;
	printf("\n 결과는 : %d \n", num3);
	return 0;

}
