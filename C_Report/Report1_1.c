//사용자에게 나이를 물어보고 이것을 다시 화면에 출력하는 프로그램을 작성해라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;
	printf("나이를 입력하시오 >> ");
	scanf("%d", &age);
	printf("당신은 %d살 입니다.", age);

	return 0;
}