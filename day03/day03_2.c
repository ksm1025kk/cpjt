#define _CRT_SECURE_WARNINGS
#include<stdio.h>

int main1() {
	// 조건문 if : 조건에 따라서 내 프로그램을 다르게 동작시켜야 할 때 
	int num = 3;
	// 삼항연산자
	(num < 3) ? printf("3보다 작습니다. \n") : printf("3 이상입니다. \n");
	
	// if문(){ : ()안에 있는 조건이 맞을 때 {}에 있는 코드를 실행하는 문법(틀리면 {}무시)
	if (num < 3) {
		// 조건이 맞을 때만 실행할 코드
		printf("3보다 작습니다. \n");
	}

	if (num >= 3) {
		// num이 3보다 크거나 같을 때(맞을 때)만 실행할 코드
		printf("3 이상입니다. \n");
	}

	int age = 20;
	// 나이가 20살 이상일때만 "성인입니다." 출력
	if (age >= 20) {
		printf("성인입니다. \n");
	}





	return 0;

}