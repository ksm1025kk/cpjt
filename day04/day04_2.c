#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main1() {

	// 반복문 while, for
	// 중복되거나 유사한 코드를 줄이기 위해 사용함

	// while(){}
	// 1. 몇 번 썼는지 알 수 없음, 일일히 갯수를 세야함
	// 2. 갯수가 많아지면(만개 이상) 사람이 일일히 작업할 수 없음
	// ==> 반복문 문법을 도입

	char name[] = "홍길동";
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	printf("%s는 잘생겼다.\n", name);
	return 0;
}