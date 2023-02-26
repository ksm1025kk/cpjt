#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main12() {
	
	// 1. 사용자가 1이상의 정수 n을 입력하면 1부터 n까지의 합을 구하는 프로그램을 만드세요
	int n = 0;
	int sum = 0;
	printf("1이상의 정수를 입력하세요.: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	
	
	// 2. 1부터 100까지의 정수 중 6의 배수만 출력하는 프로그램 만들기
	for (int number = 1; number <= 100; number++) {
		if (number % 6 == 0) {
			printf("%d\n", number);
		}
	}

	// 3.알파벳을 입력받아 출력하는 프로그램 (단, 대문자면 프로그램 종료)
	// 65 ~ 90 : 대문자, 97 ~ 122 : 소문자
	char word = 0;

	while (1) {
		printf("알파벳을 입력하세요: ");
		rewind(stdin);					//쓰레기 값 제거
		scanf("%c", &word);

		if (word >= 65 && word <= 90) {
			printf("종료합니다.\n");
			break;
		}
		else if (word >= 97 && word <= 122) {
			printf("%c 입력했습니다.\n", word);
		}

	}


	return 0;

}