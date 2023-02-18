#include<stdio.h>

int main4() {
	/*
	이름, 연도, 월, 일, f ==> 변수
	문자변수 : 이름
	정수변수 : 년, 월, 일
	문자변수 : f
	*/
	char name[] = "홍길동";			// %s
	int year = 2023;				// %d
	int month = 2;					// %d
	int day = 18;					// %d
	char word = 'f';				// %c
	
	printf("작성자 : %s\n", name);
	printf("작성날짜 : %d.%d.%d\n", year, month, day);
	printf("기능 : print%c로 문자열 출력", word);

	return 0;
}