#include<stdio.h>

int main5() {
	/*
	변수 =  저장공간
	자료형 = 변수 안에 데이터값의 형태

	변수선언(공간 생성)
	자료형 변수명;
	*/
	int num;
	char chr;
	double num2;

	num = -33;
	chr = 'a';
	num2 = 3.14;
	num2 = -0.01;					// 또 담으면 전에 있던 값은 삭제하고 들어감
	

	printf("%d \n", num);

	num = 1515;
	printf("%d \n", num);
	// 변수 초기화(선언과 대입을 동시에)
	int num3 = 119;
	char ch2 = 3;

	// 자료형이 적혀있다 == 공간을 처음 만든다
	// 자료형이 안적혀있다 == 변수안에 있는 값을 사용하겠다 or 변수 안에 값을 변경하겠다

	int num4 = 4;			// 공간을 처음만듬
	num4 = 44;				// 자료형을 안적었다 == 이미 있는 변수를 활용하겠다.
	printf("%d", num4);	
	
	//한번에 선언, 한번에 초기화
	int n1, n2, n3;
	int n4 = 1, n5 = 6, n6 = 6;

	return 0;
}