#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// '���'�̶�� ����ä(����ڰ� ���� �ڷ���)�� ����� �̸�, ���̸� �����ϰԲ� ����
// ����ü : �Լ� �ٱ���
struct ��� {
	char �̸�[30];					// �ִ� 29�� (�ѱ��� 14��)
	int ����;
};

int main2() {
	char name[30];
	int age;
	struct ��� boy;				// �ڷ����� struct ���, �������� boy
	struct ��� girl;

	sprintf(name, "%s", "��ҳ�");				// name ������ printf ���·� %s�� ����
	age = 30;
	printf("�̸��� %s, ���̴� %d\n", name, age);

	// ����ü
	sprintf(boy.�̸�, "%s", "��ҳ�");
	sprintf(girl.�̸�, "%s", "�̼ҳ�");

	boy.���� = 12;
	girl.���� = 9;

	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy.�̸�, boy.����);
	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girl.�̸�, girl.����);
	
	struct ��� man = { "�̼���", 20 };
	printf("������ �̸��� %s, ���̴� %d��\n", man.�̸�, man.����);
	
	
	
	return 0;
}