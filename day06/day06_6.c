#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �Լ��� ���� : �Է°�, ��ȯ��(return), �ڷ���
// �ڷ��� �Լ���(){}
// �Է°� ���� ����, ��ȯ�� ���� ����, �ڷ����� return ���� ����
// �Է°��� ()�� ������ �غ� �صΰ� ������ {}�� �Է��Ѵ�.

// �Է°�x, ��ȯ��x
void First() {
	// return�� ���� ���̱� ������ ����, �ڷ����� void
	// �Է°� �ȹ��� ���̱� ������ ()�� �����
	// ����ڰ� First �Լ��� ������� �� ������ �ڵ带 ����
	char str[64];
	printf("ù��° �Լ� ���!\n");
	scanf("%s", str);
	printf("���� �Է��� ���ڿ��� >> %s", str);
}
// �Է°�0, ��ȯ��x
void Second(char* str) {
	printf("���� ������ ���ڿ�>> %s\n", str);
}
// �Է°�x, ��ȯ��0
char* Third() {
	char ss[50] = { 0, };
	printf("�Է��� ���ڿ��� ��������>>");
	scanf("%s", ss);
	return ss;
}
// �Է°�0, ��ȯ��0
int Fourth(int n1, int n2, int n3) {
	printf("���޹��� �� : %d, %d, %d �Դϴ�.\n", n1, n2, n3);
	printf("�� �����ݴϴ�.\n");
	int result = n1 + n2 + n3;
	return result;						// �Լ��� �տ� �ڷ����� return���� �����ϰ�!
}

int main5() {
										// �Լ��� ����		
	First();							// �Է�x, ��ȯx

	Second("���ڿ�");					// �Է�0, ��ȯx (�Է°��� ()�� ���ؼ� ���� ����)

	char* str = Third();				// �Է�x, ��ȯ0 (��ȯ���� ������ ������ �ްų� ����ó�� ����Ѵ�.)
	printf("��ȯ���� �� : %s\n", str);
	printf("��ȯ���� �� : %s\n", Third());
	
	char* result = Fourth(5, -2, 7);		// �Է�0, ��ȯ0
	printf("����� : %d\n", result);
	("����� : %d\n", Fourth(-1, 1, 1));


	return 0;

}