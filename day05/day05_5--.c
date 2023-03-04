#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main4() {

	// 길이가 5인 int형 배열을 선언하고 초기화한다. 이때 각 요소는 원하는 값을 담는다
	// 해당 배열에 대해 다음 결과를 출력하기

	int nums[5] = { 5, 10, 15 ,20, 25 };
	int sum = 0;
	double avg = 0.0;
	sum = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
	avg = (double)sum / 5.0;
	printf("%d\n", sum);
	printf("%lf\n", avg);

	// 반복문을 돌릴 수 있는가
	char str[64] = {'\0', };
	char reverse[64] = { 0, };

	scanf("%s", str);											// str[0] = 'h', str[1]= 'e' ...
	int j = 0;
	for (int i = 63; i >= 0; i--) {
		if (str[i] == '\0') {
			continue;
		}
		reverse[j] = str[i];
		j++;
	}
	printf("%s", reverse);
	// null 문자가 아닌 시점부터
	// reverse[0] = str[4]
	// reverse[1] = str[3]
	// reverse[2] = str[2]
	// reverse[3] = str[1]
	// reverse[4] = str[0]

	

	return 0;

}