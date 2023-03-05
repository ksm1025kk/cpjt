#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// <stdio.h>	: 입력 및 출력 관련 기능들을 제공
// <string.h>	: 문자열 관련한 기능(함수)들을 제공
int main2() {

	char good[] = "Good!";						// 6칸
	char* bad = "bad!";							// 5칸
	printf("%s %s", good, bad);					// Good! bad!

	// 배열로 만든 문자열
	good[0] = 'H';
	// good = "New Good!";						// 컴파일 에러 (배열 문자열은 일괄수정 불가능)
	
	// 포인터로 만들 문자열
	bad = "New Bad!";
	// bad[0] = 'S';							// 포인터문자열에서 개별 수정 불가능(무시)

	// 결과 예측하고 실행
	printf("%s %s\n", good, bad);				//	Hood! New bad

	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];
	char str4[50];
	// 문자열 길이 구하기
	int str1_len = strlen(str1);				// str1의 문자 갯수를 알려줌
	int str2_len = strlen(str2);				// 문자 갯수 (마지막 \0 제외)
	
	printf("str1의 길이 : %d, str2의 길이 : %d\n", str1_len, str2_len);

	// 문자열 복붙
	strcpy(str3, str1);							// str3 <- str1	

	printf("%s\n", str3);

	strncpy(str4, str1, 5);						// 5글자만 복붙 str4 <- str1

	// sprintf : printf 형태로 문자열 저장
	sprintf(str4, "내가 원하는 문자열 : %s", str1);
	printf("%s\n", str4);

	char str5[50] = "Michael ";
	char str6[50] = "Michael ";

	// 문자열 이어붙이기
	strcat(str5, "Bolton");
	printf("%s\n", str5);

	strncat(str6, "Jackson Five", 7);			// 7글자만 이어붙이기
	printf("%s\n", str6);

	//strcmp : 두 문자열을 비교 (문자열은==가 안됨), 같다면 0이라고 알려줌(반환)
	if (strcmp("안녕", "안녕") == 0) {
		printf("같다\n");
	}
	else {
		printf("다르다\n");
	}

	// str5와 str6을 비교
	printf("비교 결과 : %d\n", strcmp(str5, str6));			// str5 : Michael Bolton

	// str5와 str6을 7글자만 비교
	printf("비교 결과: %d\n", strncmp(str5, str6, 7));		// str6 : Michael Jackson
	
	printf("str6을 입력 >>");
	scanf("%[^\n]s", str6);
	printf("비교 결과 : %d\n", strcmp(str5, str6));			// str5 = Michael Bolton
	
	return 0;
}