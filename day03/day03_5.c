#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 정수를 입력받아 홀수인지 짝수인지 판별
	/*int num = 0;
	printf("정수를 입력하세요>> ");
	scanf("%d", &num);
	if (num % 2 == 1) {
		printf("홀수입니다. \n");
	}
	else {
		printf("짝수입니다. \n");
	}*/

	// 나이에 따른 지하철 요금표
	// 나이를 입력하면 요금을 안내해주는 프로그램 
	// age < 6, age >= 65	: 0원
	// 6 <= age < 13		: 500원
	// 13 <= age < 19		: 900원
	// 19 <= age < 65		: 1250원
	/*int age = 0;
	printf("나이를 입력하세요.>> ");
	scanf("%d", &age);
	if (age < 6 || age >= 65) {
		printf("요금은 0원입니다.\n");
	}
	else if (age < 13) {
		printf("요금은 500원입니다.\n");
	}
	else if (age < 19) {
		printf("요금은 900원입니다.\n");
	}
	else{
		printf("요금은 1250원입니다.\n");
	}*/

	// 중간고사 평균을 구하고 점수에 따라서 학점을 부여
	// switch문 사용
	// 국어88 영어90 수학58 사회81 과학72
	// 90이상 : A, 80이상 : B ,70이상 : C, 60이상 : D, 60미만 : F
	/*int kor = 88, eng = 90, math = 58, soc = 81, sci = 72;
	int sum = (kor + eng + math + soc + sci);
	double avg = sum / 5.0;
	printf("%lf\n", avg);

	switch ((int)avg/10){
	case 10:
		printf("A학점");
		break;
	case 9:
		printf("A학점");
		break;
	case 8:
		printf("B학점");
		break;
	case 7:
		printf("C학점");
		break;
	case 6:
		printf("D학점");
		break;
	default:
		printf("F학점");
	}*/

	// 윤년 구하는 프로그램
	// 년도를 4의 배수이면서 100의 배수가 아닌 년도 or 400의 배수인 년도
	// 윤년이면 2월이 29일로 끝남

	int day = 0;
	printf("년도를 입력하게요.>> ");
	scanf("%d", &day);

	if ((day % 4 == 0 && day % 100 != 0) || day % 400 == 0) {
		printf("윤년");
	}
	else {
		printf("윤년이 아님");
	}

	return 0;
}