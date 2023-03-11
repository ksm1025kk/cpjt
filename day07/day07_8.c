#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int global_variable = 0;
// 함수 바깥에서 만드는 변수는 '전역변수', 한번 만들면 없어지지 않으나 많이 만들면 프로그램 성능이 저하됨
// (전역변수는 좁은 공간에 생성되어 삭제되지 않고 계속 차지하고 있음), 

// 숫자 2개를 매개변수로 받아서 서로 위치를 바꾼다
int Swap_old(int num1, int num2) {
	// 지역변수는 넓은 공간에 생성되어 {}가 끝나면 즉시 삭제되기 때문에 최적화 효율이 우수
	// 함수안에서 만든 변수는 '지역변수', {}가 끝나면 공간이 없어짐
	int temp = num1;
	num1 = num2;
	num2 = temp;
	// 값이 복제되기 때문에 원본 변수에는 영향을 줄 수 없음
	// 함수 안에서 만들어진 매개변수와 지역변수는 {}가 끝나면 공간이 없어진다.
}

int Swap_new(int* num1, int* num2) {
	// 위치를 넘겨받아서 원본의 위치를 활용
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main7() {
	// C언어 : 함수 + 구조체 + 포인터
	int n1 = 1, n2 = 2;
	printf("변경 전 %d, %d\n", n1, n2);
	Swap_old(n1, n2);										// n1과 num1은 다르다 ==> 주소를 사용한다(값을 옮기지 말고 주소를 옮기자)(포인터 사용)
	printf("변경 후 %d, %d\n", n1, n2);
	Swap_new(&n1, &n2);										// 변수의 위치(주소)를 전달해준다.
	printf("변경 후 %d, %d\n", n1, n2);


	return 0;

}