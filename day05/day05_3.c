#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main2() {

	int numbers[3] = { 1, 2, 3 };
	double dnum[] = { 0.0, 1.0, 2.0 };
	// 문자 배열에 한해서는 문자열 문법을 제공

	char str[] = "hello";
	char ss[] = { 'h','e','l','l','o', '\0' };

	printf("%s\n", str);
	printf("%s\n", ss);

	int num[3];
	// 배열 대입
	// {}는 초기화할때만 사용 가능
	return 0;
}