#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct worker {
	char name[50];
	char number[50];
	int money;
}WORKER;

int main6() {

	// ����ü worker�� ����� ������ worker�� �ο�
	// ������� : �̸�(char*), ��ȭ��ȣ(char*), ����(int)
	WORKER ����[3] = { 
		{ "���ӽ�", "010-1111-2222", 3000000 }, 
		{ "�ص�", "010-3333-4444", 4000000 }, 
		{ "�׸�", "010-5555-6666", 5000000 } 
	};

	printf("%s�� ��ȭ��ȣ�� %s �̰� ���޿��� %d�Դϴ�.\n", ����[0].name, ����[0].number, ����[0].money);
	printf("%s�� ��ȭ��ȣ�� %s �̰� ���޿��� %d�Դϴ�.\n", ����[1].name, ����[1].number, ����[1].money);
	printf("%s�� ��ȭ��ȣ�� %s �̰� ���޿��� %d�Դϴ�.\n", ����[2].name, ����[2].number, ����[2].money);
	
	for (int i = 0; i < 3; i++) {
		printf("%s�� ��ȭ��ȣ�� %s �̰� ���޿��� %d�Դϴ�.\n", ����[i].name, ����[i].number, ����[i].money);
	}



	return 0;
}
