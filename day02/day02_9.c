#include<stdio.h>

int main() {
	// �ٱ��Ͽ� �����Ƹ� 10���� ���� �� �ִ�.
	// ������ ������ ����ڷκ��� �Է¹ް� �ٱ��� ���� �������(% : ���������ϱ� ��ȣ�� ����Ͽ� ������ �������� ���� 0�� ����.)
	// ex) ������ 16���� �Է¹����� �ٱ��ϰ� 2�� �ʿ��ϴ�.
	// ex) ������ 157���� �Է¹����� �ٱ��� 16���� �ʿ��ϴ�.

	// ����ڷκ��� �Ǽ��� ������ ���� �Է¹޵� 1�� �ڸ� ���ڸ� ����ϴ� ���α׷� �����(������� ����ȯ�� ������ ���)
	// ex) 126.12 ==> 6
	// ex) 33.14 ==>3

	// ����ڷκ��� ��(second)�� �Է¹޾� [��, ��, ��] ���·� ��ȯ�϶�
	// ex) 3365 ==>1�ð� 1�� 6��)
		
		int peach = 0;
		int bracket = 0;
		printf("�������� ������ :");
		scanf("%d", &peach);

		bracket = peach / 10;
		(peach % 10 == 0) ? bracket : bracket++;
		printf("�ʿ��� �ٱ��� �� : %d \n", bracket);

		double dNum = 0.0;
		int result = 0;
		printf("NUM:");
		scanf("%lf", &dNum);

		result = (int)dNum % 10;
		printf("%d \n", result);

		int time = 0;
		int hour = 0, min = 0, sec = 0;

		printf("�ʸ� �Է��ϼ��� : ");
		scanf("%d", &time);

		hour = time / 60 / 60;
		min = time % 3600 / 60;
		sec = time / 60;
		printf("%d�ð� %d�� %d�� \n", hour, min, sec);

		return 0;
}