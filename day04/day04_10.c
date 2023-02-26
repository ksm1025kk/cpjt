#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main9() {
	
	for (int i = 0; i < 3; i++) {
		printf("i is %d now \n", i);
	}
	
	int num;
	for (num = 0; num != -1;) {
		printf("숫자를 입력하세요.(-1입력시 종료)");
		scanf("%d", &num);
	}


	// for(초기값;조건식;증감량){}


	return 0;

}