#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// <stdio.h>	: �Է� �� ��� ���� ��ɵ��� ����
// <string.h>	: ���ڿ� ������ ���(�Լ�)���� ����
int main2() {

	char good[] = "Good!";						// 6ĭ
	char* bad = "bad!";							// 5ĭ
	printf("%s %s", good, bad);					// Good! bad!

	// �迭�� ���� ���ڿ�
	good[0] = 'H';
	// good = "New Good!";						// ������ ���� (�迭 ���ڿ��� �ϰ����� �Ұ���)
	
	// �����ͷ� ���� ���ڿ�
	bad = "New Bad!";
	// bad[0] = 'S';							// �����͹��ڿ����� ���� ���� �Ұ���(����)

	// ��� �����ϰ� ����
	printf("%s %s\n", good, bad);				//	Hood! New bad

	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];
	char str4[50];
	// ���ڿ� ���� ���ϱ�
	int str1_len = strlen(str1);				// str1�� ���� ������ �˷���
	int str2_len = strlen(str2);				// ���� ���� (������ \0 ����)
	
	printf("str1�� ���� : %d, str2�� ���� : %d\n", str1_len, str2_len);

	// ���ڿ� ����
	strcpy(str3, str1);							// str3 <- str1	

	printf("%s\n", str3);

	strncpy(str4, str1, 5);						// 5���ڸ� ���� str4 <- str1

	// sprintf : printf ���·� ���ڿ� ����
	sprintf(str4, "���� ���ϴ� ���ڿ� : %s", str1);
	printf("%s\n", str4);

	char str5[50] = "Michael ";
	char str6[50] = "Michael ";

	// ���ڿ� �̾���̱�
	strcat(str5, "Bolton");
	printf("%s\n", str5);

	strncat(str6, "Jackson Five", 7);			// 7���ڸ� �̾���̱�
	printf("%s\n", str6);

	//strcmp : �� ���ڿ��� �� (���ڿ���==�� �ȵ�), ���ٸ� 0�̶�� �˷���(��ȯ)
	if (strcmp("�ȳ�", "�ȳ�") == 0) {
		printf("����\n");
	}
	else {
		printf("�ٸ���\n");
	}

	// str5�� str6�� ��
	printf("�� ��� : %d\n", strcmp(str5, str6));			// str5 : Michael Bolton

	// str5�� str6�� 7���ڸ� ��
	printf("�� ���: %d\n", strncmp(str5, str6, 7));		// str6 : Michael Jackson
	
	printf("str6�� �Է� >>");
	scanf("%[^\n]s", str6);
	printf("�� ��� : %d\n", strcmp(str5, str6));			// str5 = Michael Bolton
	
	return 0;
}