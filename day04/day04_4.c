#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3() {
	// ���ѹݺ� --> ���ϴ� Ƚ����ŭ �ݺ�(�÷���, ������)
	int i = 0;							// �÷���(������)

	while (i < 5) {
		printf("ȫ�浿\n");
		i++;							// �÷��׸� ���ؼ� �ݺ�Ƚ���� ����	
	}
	
	//
	int num = 0;
	while (num < 3) {
		printf("num is %d now \n", num);
		num++;
	}

	return 0;

}