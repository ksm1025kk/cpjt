/* 2023-02-25 c 언어 전회차 리뷰 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main0() {
	// 변수 : 자주 사용되거나 변경될 것 같은 값은 미리 저장해 놓는다. 추후 업데이트를 위해)
	char a = 'W0';					//문자 type(1칸 ~ 256)
	short bb = 0;					//정수 type(2칸 ~ 65536)
	int b = 0;						//정수 type(4칸 ~ 42억) -21억 ~ 21억
	unsigned int u_b = 0u;			//정수 type(4칸 ~ 42억) 0 ~ 42억 : 음수를 없애고 범위를 늘린다(unsigned)
	long long bbb = 0;				//정수 type(8칸)
	double c = 0;					//실수 type(8칸)
	float d = 0.0f;					//실수 type(4칸)
	
	char str[256] = { 0, };           // 256개 모두 0을 넣겠다
	// 변수 선언, 대입, 초기화
	int g;
	g = 0;
	int gg = 0;
	gg;

	// 출력과 입력
	printf("값을 입력하세요 : ");
	scanf("%d", &gg);
	printf("입력값은 %d \n", gg);

	// 대입연산자 = 
	// 산술연산자 +, -, *, /, % 
	// 누적연산자 +=, -=, *=, /=, %=
	// 증감연산자 ++, --
	// 비교연산자 >, <, >=, <=, ==, !=
	// 관계연산자 = &&, ||, !
	// 삼항연산자 (조건식) ? 참 : 거짓;
	// 변수 = (조건식) ? 맞으면 저장할 값 : 틀리면 저장할 값
	return 0;
}