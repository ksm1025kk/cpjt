#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct coffee {
	char 원산지[50];
	char 바리스타이름[50];
	int 가격;
};

int main4() {

	// 원산지, 가격, 바리스타이름을 멤버변수를 갖는 coffee 구조체를 정의
	
	struct coffee name = { "한국", "홍길동", 1500 };
	sprintf(name.원산지, "캐나다");
	printf("%s은 %s커피를 %d원에 판매합니다.\n", name.바리스타이름, name.원산지, name.가격);
	
	return 0;



}