#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// ������ �Է¹޾� Ȧ������ ¦������ �Ǻ�
	/*int num = 0;
	printf("������ �Է��ϼ���>> ");
	scanf("%d", &num);
	if (num % 2 == 1) {
		printf("Ȧ���Դϴ�. \n");
	}
	else {
		printf("¦���Դϴ�. \n");
	}*/

	// ���̿� ���� ����ö ���ǥ
	// ���̸� �Է��ϸ� ����� �ȳ����ִ� ���α׷� 
	// age < 6, age >= 65	: 0��
	// 6 <= age < 13		: 500��
	// 13 <= age < 19		: 900��
	// 19 <= age < 65		: 1250��
	/*int age = 0;
	printf("���̸� �Է��ϼ���.>> ");
	scanf("%d", &age);
	if (age < 6 || age >= 65) {
		printf("����� 0���Դϴ�.\n");
	}
	else if (age < 13) {
		printf("����� 500���Դϴ�.\n");
	}
	else if (age < 19) {
		printf("����� 900���Դϴ�.\n");
	}
	else{
		printf("����� 1250���Դϴ�.\n");
	}*/

	// �߰���� ����� ���ϰ� ������ ���� ������ �ο�
	// switch�� ���
	// ����88 ����90 ����58 ��ȸ81 ����72
	// 90�̻� : A, 80�̻� : B ,70�̻� : C, 60�̻� : D, 60�̸� : F
	/*int kor = 88, eng = 90, math = 58, soc = 81, sci = 72;
	int sum = (kor + eng + math + soc + sci);
	double avg = sum / 5.0;
	printf("%lf\n", avg);

	switch ((int)avg/10){
	case 10:
		printf("A����");
		break;
	case 9:
		printf("A����");
		break;
	case 8:
		printf("B����");
		break;
	case 7:
		printf("C����");
		break;
	case 6:
		printf("D����");
		break;
	default:
		printf("F����");
	}*/

	// ���� ���ϴ� ���α׷�
	// �⵵�� 4�� ����̸鼭 100�� ����� �ƴ� �⵵ or 400�� ����� �⵵
	// �����̸� 2���� 29�Ϸ� ����

	int day = 0;
	printf("�⵵�� �Է��ϰԿ�.>> ");
	scanf("%d", &day);

	if ((day % 4 == 0 && day % 100 != 0) || day % 400 == 0) {
		printf("����");
	}
	else {
		printf("������ �ƴ�");
	}

	return 0;
}