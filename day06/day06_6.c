#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 함수의 구조 : 입력값, 반환값(return), 자료형
// 자료형 함수명(){}
// 입력값 생략 가능, 반환값 생략 가능, 자료형은 return 값을 따라감
// 입력값은 ()에 변수로 준비를 해두고 내용은 {}에 입력한다.

// 입력값x, 반환값x
void First() {
	// return을 안할 것이기 때문에 생략, 자료형은 void
	// 입력값 안받을 것이기 때문에 ()는 비워둠
	// 사용자가 First 함수를 사용했을 때 동작할 코드를 적음
	char str[64];
	printf("첫번째 함수 사용!\n");
	scanf("%s", str);
	printf("내가 입력한 문자열은 >> %s", str);
}
// 입력값0, 반환값x
void Second(char* str) {
	printf("내가 전달한 문자열>> %s\n", str);
}
// 입력값x, 반환값0
char* Third() {
	char ss[50] = { 0, };
	printf("입력할 문자열을 적으세요>>");
	scanf("%s", ss);
	return ss;
}
// 입력값0, 반환값0
int Fourth(int n1, int n2, int n3) {
	printf("전달받은 값 : %d, %d, %d 입니다.\n", n1, n2, n3);
	printf("다 더해줍니다.\n");
	int result = n1 + n2 + n3;
	return result;						// 함수명 앞에 자료형은 return형과 동일하게!
}

int main5() {
										// 함수의 사용법		
	First();							// 입력x, 반환x

	Second("문자열");					// 입력0, 반환x (입력값은 ()를 통해서 전달 가능)

	char* str = Third();				// 입력x, 반환0 (반환값이 있으면 변수로 받거나 변수처럼 사용한다.)
	printf("반환받은 값 : %s\n", str);
	printf("반환받은 값 : %s\n", Third());
	
	char* result = Fourth(5, -2, 7);		// 입력0, 반환0
	printf("결과값 : %d\n", result);
	("결과값 : %d\n", Fourth(-1, 1, 1));


	return 0;

}