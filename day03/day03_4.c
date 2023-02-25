#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3() {
	// 숫자
	// < 10
	// < 100
	// < 1000
	// >= 1000
	int num = 10;
	if (num < 10) {
		printf("10보다 작다. \n");
	}
	else if (num < 100) {							// 위에 있는 if가 틀렸을 경우 검사
		printf("100보다 작다. \n");
	}
	else if (num < 1000) {
		printf("1000보다 작다. \n");
	}
	else {											// 다 틀렸을 때
		printf("1000이상이다. \n");
	}

	int age = 21;
	if (age > 20) {
		printf("성인 \n");
	}
	else if (age >= 14) {
		printf("청소년 \n");
	}
	else {
		printf("미성년자 \n");
	}

	printf("\nQuiz\n");
	int score = 0;
	printf("점수를 입력하세요>> ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("A학점");
	}
	else if (score >= 80) {
		printf("B학점");
	}
	else if (score >= 70) {
		printf("C학점");
	}
	else if (score >= 60) {
		printf("D학점");
	}
	else {
		printf("F학점");
	}



	return 0;
}