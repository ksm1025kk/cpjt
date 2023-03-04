#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3() {

	int i;
	int odd[3];
	int even[5] = { 2, 4, 6 ,8, 10 };

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++) {
		printf("%d ", even[i]);
	}
	printf("\n");
	
	char mind[30] = "I Love programing!";
	printf("$s\n", mind);

	mind[7] = '\0';
	printf("%s \n", mind);

	char str[50] = { 0 };






	return 0;

}