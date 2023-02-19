#include<stdio.h>

int main2() {
	int num1, num2;
	// 입력
	printf("num1의 값을 입력하세요. >> ");
	scanf("%d", &num1);
	printf("num2의 값을 입력하세요. >> ");
	scanf("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %lf\n", num1, num2, num1 / (double)num2);
	printf("%d를 %d로 나눈 나머지는 %d\n", num1, num2, num1 % num2);
	
	double num3, num4;
	printf("num3의 값을 입력하세요. >> ");
	scanf("%d", &num3);
	printf("num4의 값을 입력하세요. >> ");
	scanf("%d", &num4);

	printf("%if + %if = %if\n", num3, num4, num3 + num4);
	printf("%if - %if = %if\n", num3, num4, num3 - num4);
	printf("%if * %if = %if\n", num3, num4, num3 * num4);
	printf("%if / %if = %lf\n", num3, num4, num3 / num4);
	//printf("%if를 %if로 나눈 나머지는 %if", num3, num4, num3 % num4);
	return 0;

}