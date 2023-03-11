#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void MyFunction() {
	printf("Hello");
	printf(", world!\n");
}
void MyFunction2(int number) {
	printf("Hello %d\n", number);	
}
int MyFunction3() {
	return 333;
}
double MyFunction4(int n1, int n2) {
	double result = (double)n1 / n2;

	return result;
}

int main0() {
	MyFunction();
	MyFunction();
	MyFunction2(33);
	MyFunction2(44);

	int num1 = MyFunction3();
	num1 = MyFunction3();
	printf("%d\n", MyFunction3());
	printf("%d\n", num1);

	double num2 = MyFunction4(3, 4);
	printf("결과는 %lf\n", num2);

	num2 = MyFunction4(9, 3);
	printf("결과는 %lf\n", num2);

	return 0;
}