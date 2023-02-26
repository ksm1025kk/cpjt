#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main11() {

	// 제어문(control flow) : 조건문, 반복문, 분기문...
	// 조건문 : if, switch
	// 반복문 : while, for
	// 기타제어문 : 반복문 끝내기, switch문 끝내기

	// break : 반복문 끝내기, switch문 끝내기
	// continue : 반복문 맨위로 돌아가기

	int num;

	while (1) {
		printf("-1 입력시 종료 : ");
		scanf("%d", &num);
		if (num == -1) {
			break;
			printf("이 코드는 Dead Code 입니다.");
		}
	}
	
	// continue : 밑에 코드는 더이상 실행하지 않고 위로 올라감
	for (int n = 1; n <= 5; n++) {
		if (n == 3) {
			continue;
		}
		printf("%d\n", n);
	}
	
	return 0;
}