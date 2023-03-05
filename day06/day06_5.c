#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 함수 add
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

	// 함수 : 연산 기호에 한계가 있으니 사용자가 직접 만드는 연산자, 코드를 저장하는 기술
	// (){}

	// + - * / % : 각각의 기능들이 있음, 수가 제한되어 있음
	int num1 = -3 + 5;
	printf("%d\n", num1);
	
	int num2 = add(-3, 5);
	printf("%d\n", num2);

	// 절대값으로 만들어 더해주는 기능을 만들어보자
	int num3 = AbsAdd(-3, 5);
	printf("%d\n", num3);


	return 0;

}