#include<stdio.h>

int main1() {
	char str[100];
	int num;
	double dnum;
	char chr;

	printf("������ �Է��ϼ���. >> ");				// ���	printf
	scanf("%d", &num);								// �Է� scanf
	printf("�Է��� ���� %d �Դϴ�. \n", num);

	printf("���ڿ��� �Է��ϼ���. >> ");				
	scanf("%s", &str);
	printf("�Է��� ���� %s �Դϴ�. \n", str);

	printf("�Ǽ��� �Է��ϼ���. >> ");
	scanf("%lf", &dnum);
	printf("�Է��� ���� %lf �Դϴ�. \n", dnum);

	rewind(stdin);									// scanf �����Է¹��� ==> ���� ����
	printf("���ڸ� �Է��ϼ���. >> ");
	scanf("%c", &chr);
	printf("�Է��� ���� %c �Դϴ�. \n", chr);		// chr�� �ѱ��� �Ұ���(�ѱ��� ������ 2�� ������)

	return 0;
}