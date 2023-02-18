#include<stdio.h>

int main2() {
	/*
	변수 : 저장공간(데이터값을 저장할 수 있는 공간)
	       자주 바뀔 것 같은, 자주 사용될 것 같은 값은 미리 저장해놓자
		   그리고 수정이 필요하다면 저장해놓은 곳만 바꾸면 되게끔
	*/
	char str[] = "2023.02.18";
	printf("오늘은 %s 입니다.\n", str);
	printf("오늘은 %s 입니다.\n", str);
	printf("오늘은 %s 입니다.\n", str);
	printf("오늘은 %s 입니다.\n", str);	
	return 0;
}