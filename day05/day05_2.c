#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;

int main1() {

	// 배열
	char s;					// 문자
	char str[10];			// 문자배열(문자열)10개

	int num;				// 정수변수 1개
	int numbers[100];		// 정수변수 100개

	// 예를들어 정수변수 10개를 만들고자한다
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;			// 일반변수
	int nn[10];												// 배열		nn1 ~ nn10

	// 반복문 사용을 위해서(일반변수명은 반복문 처리가 불가능)
	// 일반변수는 한번에 출력 불가능
	// 배열은 붙여놓고 첫번째 변수를 기준으로 일괄사용
	int nums[10] = { 1, 2, 3 ,4, 5, 6, 7, 8 ,9, 10 };
	for (int i = 0; i < 10; i++) {
		printf("%d", nums[i]);
	}

	printf("\n %d \n", nums[0]);							// 0번방은 첫번째 것
	printf("\n %d \n", nums[9]);							// 9번방은 10번째 항목


	return 0;
}