//사용자가 아스키 코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력하는 프로그램을 작성해라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int askii;
	printf("아스키 코드값을 입력하세요 >> ");
	scanf("%d", &askii);
	printf("문자 : %c 입니다.", askii);

	return 0;
}