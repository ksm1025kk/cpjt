#include<stdio.h>

int main7() {
	// 사용자로부터 나이를 입력받아 20살 이상이면 1250, 20살 미만이면 800을 받는 지하철 요금정상프로그램만들기
	int age, pri;
	printf("나이를 입력하시요. ==>");
	scanf("%d", &age);
	pri = (age >= 20) ? 1250 : 800;
	//(age >= 20) ? printf("당신의 나이는 %d 이며, 요금은 1250원 입니다\n", age) : printf("당신의 나이는 %d 이며, 요금은 800원입니다.\n", age);
	printf("당신의 나이는 %d살이며, 요금은 %d원 입니다.\n", age, pri);
	
	// 사용자로부터 나이와 키를 입력받아 나이가 12살 이상이고 키가 120cm 이상일 때만 놀이기구 탑승을 허용해주세요.
	/*int age2;
	double hig;
	printf("나이를 입력하세요. >> ");
	scanf("%d", &age2);
	printf("키를 입력하세요. >> ");
	scanf("%lf", &hig);
	(age2 >= 12 && hig >= 120.0) ? printf("놀이기구에 탑승할 수 있습니다.") : printf("놀이기구에 탑승할 수 없습니다.");*/

	double hig;
	printf("나이를 입력하세요. >> ");
	scanf("%d", &age);
	printf("키를 입력하세요. >> ");
	scanf("%lf", &hig);
	(age >= 12 && hig >= 120.0) ? printf("놀이기구에 탑승할 수 있습니다.") : printf("놀이기구에 탑승할 수 없습니다.");
	return 0;

}