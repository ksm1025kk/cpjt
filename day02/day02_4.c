#include<stdio.h>

int main3() {
	//연산자
	// 1. 대입 연산자
	int num1 = 3;
	int num2 = 4;
	// 2. 산술 연산자
	
	// 3. 누적 연산자
	// +=, -=, *=, /=, %=
	num1 = num1;								// 왼쪽은 공간개념, 오른쪽은 안에 들어있는 값
	num1 = num1 + 2;							// num1에 들어있는 값을 +2를 한다음 num1에 그대로 담는다.
	num1 += 2;									// 누적연산자는 줄인말이다.
	printf("%d\n", num1);						// 7
	
	printf("원본 num2 : %d\n", num2);			// 4	
	num2 += 1;
	printf("누적연산한 num2 : %d\n", num2);		// 5
	// 4. 증감 연산자
	// ++, --
	// 누적연산자를 한번더 줄인 표현(+1, -1을 누적연산하는 경우만)
	num1 = num1 + 1;
	num1 += 1;
	num1++;
	++num1;

	num1 = num1 - 1;
	num1 -= 1;
	num1--;
	--num1;

	printf("%d\n", ++num2);
	printf("%d\n", num2++);
	// 5. 비교 연산자
	// 6. 관계 연산자
	// 7. 삼항 연산자
	// 8. 비트 연산자
	// 9. 쉬프트 연산자
	
	return 0;

}