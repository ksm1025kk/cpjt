#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main0() {
	// 출력 : printf
	printf("hello world\n");
	// ( ctrl + shift + / ) 전체주석
	// (/*   */)  여러줄 주석
	
	// 변수 : 저장공간
	// 변수선언 : 변수를 만드는 방법
	// 자료형 변수명;
	char word;				// 문자형 변수 선언 (1 byte == 8 bit)				
	int number;				// 정수형 변수		(4 byte)
	double dnumber;			// 실수형 변수		(8 byte)
	char str[256];			// 문자열형 변수	(1*256 byte)

	// 변수에 값을 대입(대입연산자)
	// 변수명 = 데이터값;
	word = 'q';
	number = -3;
	dnumber = 3.141592;
	sprintf(str, "hi world\n");
	// 변수 초기화(변수선언과 동시에 대입까지)
	char str2[256] = "hello world";
	// 변수 사용
	int  number2 = number;			// number에 들어있는 값을 사용 (자료형 없이 적어주기)
	printf("문자형을 %c\n", word);
	printf("정수형을 %d\n", number);
	printf("실수형을 %lf\n", dnumber);
	printf("문자열형을 %s\n", str2);

	int num1 = 2, num2 = 3;
	int sum = num1 + num2;
	int a = num1 - num2;
	int s = num1 * num2;
	int d = num1 / num2;
	int f = num1 % num2;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d\n", sum);
	printf("%d\n", a);
	printf("%d\n", s);
	printf("%d\n", d);
	printf("%lf\n", num1 / (double)num2);
	printf("%d\n", f);

	double num3 = 8.5, num4 = 1.2;
	double sum2 = num3 + num4;
	double q = num3 - num4;
	double w = num3 * num4;
	double e = num3 / num4;
	//double r = num3 % num4;
	printf("%lf + %lf = %lf\n", num3, num4, num3 + num4);
	printf("%lf\n", sum2);
	printf("%lf\n", q);
	printf("%lf\n", w);
	printf("%lf\n", e);
	//printf("%lf\n", r);

	return 0;
}



