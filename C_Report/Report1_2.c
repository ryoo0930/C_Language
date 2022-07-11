//int형 변수 x와 y의 값을 서로 교환하는 프로그램을 작성해보자.
//별도의 변수가 필요하면 정의해 사용한다.
//변수 x와 y는 10, 20의 값으로 초기화해라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	int temp;
	printf("x=%d, y=%d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("x=%d, y=%d", x, y);

	return 0;
}