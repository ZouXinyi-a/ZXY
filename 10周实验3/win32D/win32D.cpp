// win32D.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "win32D.h"


// 这是导出变量的一个示例
WIN32D_API int nwin32D=0;

// 这是导出函数的一个示例。
WIN32D_API int fnwin32D(void)
{
    return 42;
}

WIN32D_API int factorial(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	return sum;
}

WIN32D_API float FAC::convert(float deg)
{
	float n;
	n = deg*3.14 / 180;
	return n;
}
// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 win32D.h
Cwin32D::Cwin32D()
{
    return;
}

