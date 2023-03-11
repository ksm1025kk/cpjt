#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct worker {
	char name[50];
	char number[50];
	int money;
}WORKER;

int main6() {

	// 구조체 worker를 만들고 별명을 worker로 부여
	// 멤버변수 : 이름(char*), 전화번호(char*), 월급(int)
	WORKER 직원[3] = { 
		{ "제임스", "010-1111-2222", 3000000 }, 
		{ "앤디", "010-3333-4444", 4000000 }, 
		{ "테리", "010-5555-6666", 5000000 } 
	};

	printf("%s의 전화번호는 %s 이고 월급여는 %d입니다.\n", 직원[0].name, 직원[0].number, 직원[0].money);
	printf("%s의 전화번호는 %s 이고 월급여는 %d입니다.\n", 직원[1].name, 직원[1].number, 직원[1].money);
	printf("%s의 전화번호는 %s 이고 월급여는 %d입니다.\n", 직원[2].name, 직원[2].number, 직원[2].money);
	
	for (int i = 0; i < 3; i++) {
		printf("%s의 전화번호는 %s 이고 월급여는 %d입니다.\n", 직원[i].name, 직원[i].number, 직원[i].money);
	}



	return 0;
}
