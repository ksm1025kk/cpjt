#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct target {
	int num1;
	int num2;
}T;

void Swap(T* t) {
	int temp;
	temp = (*t).num1;
	(*t).num1 = (*t).num2;
	(*t).num2 = temp;
}

void Swap2(T* t) {
	int temp;
	temp = t->num1;
	t->num1 = t->num2;
	t->num2 = temp;
}

int main() {
	
	T t1 = { 1, 2 };
	T t2 = { 3, 4 };
	T* p_t2 = &t2;

	printf("변경전 %d, %d\n", t1.num1, t1.num2);

	Swap(&t1);												// 구조체 변수의 위치(주소값)을 넘겨준다

	printf("변경후 %d, %d\n", t1.num1, t1.num2);
	
	printf("=======================\n");

	printf("변경전 %d, %d\n", p_t2->num1, p_t2->num2);

	Swap2(p_t2);

	printf("변경후 %d, %d\n", p_t2->num1, p_t2->num2);

	return 0; 
}