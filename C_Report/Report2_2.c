//1�� ������ �ι�° ���� ù��° ������ ū ���� ����� �Ǻ����� ���Ѵ�.
//1�� ������ ������ ū ���� ���� ���� ������� Ȯ���ϴ� ���α׷��� �ۼ�����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("ù��° ������ �Է��ϼ��� >> ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ��� >> ");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		if (num1 % num2 == 0)
			printf("����Դϴ�.");
		else
			printf("����� �ƴմϴ�.");
	}

	else
	{
		if (num2 % num1 == 0)
			printf("����Դϴ�.");
		else
			printf("����� �ƴմϴ�.");
	}

	return 0;
}