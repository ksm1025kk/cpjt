#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// ��Ÿũ����Ʈ ����(�̸�, ü��, ���ݷ�, ����)
struct Unit {
	char name[100];
	int hp;
	int atk;
	int def;
};

//typedef ���� ������ �༭ ���θ��� ����� �� �ִ�.
//typedef : �ڷ����� �̸��� �༭ ���� ���ϴ� Ű����� ġȯ(�����ֱ�)
typedef struct Building
{
	char name[100];
	int hp;
}�ǹ�;										// struct Building -> �ǹ�  �� ġȯ

int main5() {

	struct Unit ���۸� = { "���۸�", 35, 5, 0 };
	struct Unit ���� = { "����", 40, 6, 0 };
	struct Unit ���� = { "����", 160, 16, 1 };
	�ǹ� �跰 = { "����", 1500 };

	for (int i = 1; i < 10; i++) {
		���۸�.hp -= ����.atk;
		if (���۸�.hp <= 0) {
			printf("%dŸ, %s die", i, ���۸�.name);
			break;
		}
		else {
			printf("%dŸ, ���۸��� ü���� %d\n", i, ���۸�.hp);
		}
	}





	return 0;

}