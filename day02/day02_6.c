#include<stdio.h>

int main5() {
	int num1 = 27;
	printf("1 : %d\n", num1 >= 10);		
	printf("2 : %d\n", num1 != 5);
	printf("3 : %d\n", num1 >= 27);		
	printf("4 : %d\n", num1 == 27);		
	printf("5 : %d\n", num1 != 30);		
	printf("6 : %d\n", num1 <= 27);		

	// 국어 = 86, 영어 = 75, 수학 = 88, 사회 = 60, 과학 = 96
	// 평균을 구하세요(소수점까지).
	int kor = 86, eng = 75, math = 88, soc = 60, sci = 96;
	int sum = 0;
	double avg = 0.0;
	sum = kor + eng + math + soc + sci;
	avg = (double)sum / 5.0;;
	printf("평균은 = %lf\n", (double)(kor + eng + math + soc + sci) / 5.0);
	printf("평균은 = %lf\n", avg);
	
	// 증감연산자 사용
	int num = 5;
	// 각 num에 증감연산자를 적절히 사용하여 6 6 8 결과를 만들어라.
	printf("num의 값 : %d\n", ++num);
	printf("num의 값 : %d\n", num++);
	printf("num의 값 : %d\n", ++num);
	return 0;
}