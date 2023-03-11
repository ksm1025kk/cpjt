#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct numbers {
	int num1;
	int num2;
	int num3;
}NUM;

// 숫자 두 개를 입력받아 합쳐서 return
int MyFunc2(NUM n) {
	int result = n.num1 + n.num2 + n.num3;
	return result;
}

int main8() {
	NUM n4 = { 1, 2, 3};
	int n1 = 1, n2 = 2, n3 = 3;
	int result = MyFunc2(n4);
	printf("결과 : %d\n", result);
	
	
	
	
	return 0;

}