#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main5() {
	int num = -1;

	do			// do ~ while : 1���� ������ ����ǰԲ� ���ִ� while��			
	{
		printf("���ڸ� �Է��ϼ���.(-1 �Է½� ����): ");
		scanf("%d", &num);
		if (num == -1) {
			printf("�����մϴ�.\n");
		}
		else {
			printf("%d��(��) �Է��Ͽ����ϴ�.\n", num);
		}
	} while (num != -1);
	return 0;
}