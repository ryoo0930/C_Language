//사용자로부터 2개의 정수를 받아서 약수인지를 검사하는 프로그램을 작성해라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("첫번째 정수를 입력하세요 >> ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요 >> ");
	scanf("%d", &num2);

	if (num1 % num2 == 0)
		printf("약수입니다.");
	else
		printf("약수가 아닙니다.");

	return 0;
}