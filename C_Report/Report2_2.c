//1번 문제는 두번째 수가 첫번째 수보다 큰 경우는 약수를 판별하지 못한다.
//1번 문제를 수정해 큰 수가 작은 수의 약수인지 확인하는 프로그램을 작성하자.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("첫번째 정수를 입력하세요 >> ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요 >> ");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		if (num1 % num2 == 0)
			printf("약수입니다.");
		else
			printf("약수가 아닙니다.");
	}

	else
	{
		if (num2 % num1 == 0)
			printf("약수입니다.");
		else
			printf("약수가 아닙니다.");
	}

	return 0;
}