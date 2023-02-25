#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main5() {
	// if(){} else if(){} else{}
	// switch ~ case ~ break
	// switch문 : 일치하는 값을 찾을 때 사용하는 조건문

	// if문 : 범위조건 ,일치/불일치 조건(>, ==)
	// switch : 일치조건(==)
	char word = 'a';
	// 대상이 되는 변수를 ()안에 적는다
	switch (word) {
	case 'a':
		printf("단어는 a 입니다.\n");
		break;
	case 'b':
		printf("단어는 b입니다.\n");
		break;
	case 'c':
		printf("단어는 c입니다.\n");
		break;
	default:
		printf("해당하는 단어가 없습니다.\n");
	}

	int num = 0;
	printf("번호를 선택하세요.>>");
	scanf("%d", &num);
	switch (num) {
	case 1:
		printf("1을 선택했습니다.\n");
		break;
	case 2:
		printf("2을 선택했습니다.\n");
		break;
	case 3:
		printf("3을 선택했습니다.\n");
		break;
	case 4:
		printf("4을 선택했습니다.\n");
		break;
	default:
		printf("선택한 값이 없습니다.\n");
	}




	return 0;

}