//int�� ���� x�� y�� ���� ���� ��ȯ�ϴ� ���α׷��� �ۼ��غ���.
//������ ������ �ʿ��ϸ� ������ ����Ѵ�.
//���� x�� y�� 10, 20�� ������ �ʱ�ȭ�ض�.
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