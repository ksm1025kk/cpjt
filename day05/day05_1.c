#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main0() {

	// switch ~ case ~ default
	switch (5) {
	case 1: 
		printf("대상은 1과 같다.");
		break;
	case 5:
		printf("대상은 5와 같다.");
		break;
	default:
		printf("대상과 같은 값이 없다.");
	}

	// 반복문 while
	// while은 플래그 i 가 필요함, 중복코드를 관리
	int i = 0;
	while (i < 3){
		printf("반복횟수 %d번", i + 1);				// i 보다 1 큰 숫자 출력
		i++;										// 변수 i에 들어있는 값을 1 증가시킴(i = i + 1)
	}

	for (int i = 0; i < 3; i + 1) {
		printf("\n반복횟수 %d회\n", i + 1);			// 반복하고자하는 코드만 남음
	}

	// 기타제어문 continue, break
	// break : 반복문을 종료(switch종료)
	// continue : 반복문 처음 ()로 돌아감(1회성 취소)
	for (int i = 0; i < 3; i++) {
		if (i == 2) {
			break;									// i = 2일때 반복문 종료
		}
	
	for (int i = 0; i < 3; i++) {
		if (i == 1) {
			continue;								// continue 보다 밑에 있는 코드는 무시하도 위로 올라감
		}
		}




	}


	return 0;

}