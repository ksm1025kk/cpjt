#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct coffee {
	char ������[50];
	char �ٸ���Ÿ�̸�[50];
	int ����;
};

int main4() {

	// ������, ����, �ٸ���Ÿ�̸��� ��������� ���� coffee ����ü�� ����
	
	struct coffee name = { "�ѱ�", "ȫ�浿", 1500 };
	sprintf(name.������, "ĳ����");
	printf("%s�� %sĿ�Ǹ� %d���� �Ǹ��մϴ�.\n", name.�ٸ���Ÿ�̸�, name.������, name.����);
	
	return 0;



}