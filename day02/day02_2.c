#include<stdio.h>

int main1() {
	char str[100];
	int num;
	double dnum;
	char chr;

	printf("정수를 입력하세요. >> ");				// 출력	printf
	scanf("%d", &num);								// 입력 scanf
	printf("입력한 값은 %d 입니다. \n", num);

	printf("문자열을 입력하세요. >> ");				
	scanf("%s", &str);
	printf("입력한 값은 %s 입니다. \n", str);

	printf("실수를 입력하세요. >> ");
	scanf("%lf", &dnum);
	printf("입력한 값은 %lf 입니다. \n", dnum);

	rewind(stdin);									// scanf 문자입력버그 ==> 버퍼 비우기
	printf("문자를 입력하세요. >> ");
	scanf("%c", &chr);
	printf("입력한 값은 %c 입니다. \n", chr);		// chr은 한글이 불가능(한글은 공간을 2개 차지함)

	return 0;
}