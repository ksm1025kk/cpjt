#include<stdio.h>

int main4() {
	// 5. 비교 연산자
	// 비교식을 제시하면 맞을때는 1, 틀릴때는 0으로 알려줌
	// >, <, >=, <=, ==, !=  (크다, 작다, 크거나 같다, 작거나 같다, 같다, 다르다) 
	int num1 = 10, num2 = 11;
	printf("== : %d\n", num1 == num2);
	printf(">  : %d\n", num1 > num2);
	printf("<  : %d\n", num1 < num2);
	printf(">= : %d\n", num1 >= num2);
	printf("<= : %d\n", num1 <= num2);
	printf("!= : %d\n", num1 != num2);
	
	// 6. 관계 연산자
	// &&, ||, !(and, or, not)
	 
	// and ==> &&	양쪽이 모두 맞다면 1, 하나라도 틀리면 0
	printf("&& : %d\n", num1 != num2 && num1 == 11);
	// or ==> ||		둘 중 하나라도 맞으면 1, 둘 다 틀리면0		
	printf("|| : %d\n", num1 == num2 || num2 == 11);
	// not ==> !		0은 1로 바꾸고, 0 이외의 숫자는 0으로 바꾼다.
	printf("!  : %d\n", !(num1 == 10));
	// 7. 삼항 연산자
	// 8. 비트 연산자
	// 9. 쉬프트 연산자
	return 0;

}