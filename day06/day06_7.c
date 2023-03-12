#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 정수 2개를 전달받아 더 큰 정수를 반환(같으면 0 반환)
int getbigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2){
		return n2;
	}
	else {
		return 0;
	}
}
int math(int n3, int n4) {
	printf("%d + %d = %d\n", n3, n4, n3 + n4);
	printf("%d - %d = %d\n", n3, n4, n3 - n4);
	printf("%d * %d = %d\n", n3, n4, n3 * n4);
	printf("%d / %d = %d\n", n3, n4, n3 / n4);
}
int numadd(int n5, int n6) {
	int sum = 0;
	if (n5 < n6) {
		for (int i = n5; i <= n6; i++) {
			sum += i;
		}
		printf("%d와 %d 사이의 합은 %d\n", n5, n6, sum);
		return sum;
	}
	else if (n5 > n6) {
		for (int i = n6; i <= n5; i++) {
			sum += i;
		}
		printf("%d와 %d 사이의 합은 %d\n", n6, n5, sum);
		return sum;
	}
	else {
		sum = n5;
		printf("%d", sum);
	}
}

int seven(int n7) {
	int result = 0;
	int end = n7 + 200;
	for (int i = n7; i <= end; i++) {
		if (i % 7 == 0) {
			result += 1;
		}
	}
	printf("%d와 %d 사이의 7의 배수는 %d개입니다.\n", n7, end, result);
	return result;
}

int high(n8) {
	int tall1 = 0;
	int tall2 = 0;
	tall1 = n8 / 100;
	tall2 = n8 % 100;
	printf("입력한 키 : %dcm\n", n8);
	printf("결과 : %d.%dm입니다.\n", tall1, tall2);
}

int time(int n9) {
	int hour = 0;
	int minute = 0;
	int second = 0;

	hour = n9 / 60 / 60;
	minute = n9 % 3600 / 60;
	second = n9 % 60;

	printf("%d시간/%d분/%d초", hour, minute, second);
}

int main() {

	/*
	int result;
	result = getbigger(3, 5);
	printf("첫번째 결과 : %d\n", result);

	result = getbigger(8, 2);
	printf("두번째 결과 : %d\n", result);

	result = getbigger(7, 7);
	printf("세번째 결과 : %d\n", result);
	*/

	// 두 개의 정수를 매개 변수로 입력받아 두 정수의 덧셈 뺄셈, 곱셈, 나눗셈 결과를 모두 출력하는 함수 정의(반환x)
	//int result = math(10, 2);

	// 두 정수를 매개변수로 받아 두 정수 사이에 모든 숫자의 합을 반환하는 함수 정의
	numadd(1, 10);
	numadd(10, 1);
	numadd(10, 10);

	// 3. 정수 한개를 매개변수()로 받아 그 수보다 200 더 큰 정수 사이중 7의 배수가 몇개나 존재하는지 반환해주는 프로그램
	// 정수를 입력하세요 : 100
	// 100과 300 사이 7의 배수는 28개 입니다.
	
	seven(100);

	// 4. 사용자로부터 키를 입력받아 m 단위로 반환하는 함수 정의
	// 키를 cm단위로 입력하세요 : 181cm
	// 결과 : 1.81m
	
	high(181);

	// 5. 초(second)를 입력받아 매개변수()로 전달한다
	// 함수는 전달받은 초를 시/분/초 형태로 출력해주기
	// 초 : 3615
	// 몇시간/몇분/몇초
	
	time(3615);

	return 0;

}