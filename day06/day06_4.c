#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main3() {
	
	// �� ���� ���ڿ��� �Է¹޾� ������ ���� ������ �˷��ִ� ���α׷�

	/*
	������ �޽�
	������ �޽�
	==>�����ϴ�.

	������ �޽�
	ȣ����
	==>���� �ʽ��ϴ�.
	*/

	char str1[50] = { '\0', };
	char str2[50] = { '\0', };

	printf("ù��° ���ڸ� �Է��ϼ���.==> ");
	scanf("%[^\n]s", str1);
	rewind(stdin);
	printf("�ι�° ���ڸ� �Է��ϼ���.==> ");
	scanf("%[^\n]s", str2);
	rewind(stdin);
	if (strcmp(str1, str2) == 0) {
		printf("�����ϴ�.\n");
	}
	else {
		printf("���� �ʽ��ϴ�.\n");
	}

	// �� �Է¹��� ���ڿ� �� ���̰� �� ���ڿ����� ����ϰ� ���ּ���
	/*
	������ �޽�
	ȣ���� 
	==> ������ �޽� ȣ����
	*/
	char str3[50] = { '\0', };
	char str4[50] = { '\0', };
	
	printf("ù��° ���ڸ� �Է��ϼ���.==> ");
	scanf("%[^\n]s", str3);
	rewind(stdin);
	printf("�ι�° ���ڸ� �Է��ϼ���.==> ");
	scanf("%[^\n]s", str4);

	int str3_len = strlen(str3);
	int str4_len = strlen(str4);

	if (str3_len > str4_len) {
		printf("%s %s\n", str3, str4);
	}
	else {
		printf("%s %s\n", str4, str3);
	}

	return 0;
}
