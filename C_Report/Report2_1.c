//����ڷκ��� 2���� ������ �޾Ƽ� ��������� �˻��ϴ� ���α׷��� �ۼ��ض�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("ù��° ������ �Է��ϼ��� >> ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ��� >> ");
	scanf("%d", &num2);

	if (num1 % num2 == 0)
		printf("����Դϴ�.");
	else
		printf("����� �ƴմϴ�.");

	return 0;
}