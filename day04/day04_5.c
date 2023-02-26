#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main4() {
	int num = 0;
	
	while (num != -1) {
		printf("숫자를 입력하세요.(-1 입력시 종료): ");
		scanf("%d", &num);
		if (num == -1) {
			printf("종료합니다.\n");
		}
		else {
			printf("%d을(를) 입력하였습니다.\n", num);
		}
	}

	return 0;

}