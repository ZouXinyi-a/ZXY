#include "stdafx.h"
#include "win321.h"

char *pchar() {
	return "�Ӿ�̬��ȡ�õ��ַ���";
}

int factorial(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	return sum;
}