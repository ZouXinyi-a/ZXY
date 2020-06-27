#include "stdafx.h"
#include "win321.h"

char *pchar() {
	return "从静态库取得的字符串";
}

int factorial(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	return sum;
}