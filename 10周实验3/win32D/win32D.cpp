// win32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "win32D.h"


// ���ǵ���������һ��ʾ��
WIN32D_API int nwin32D=0;

// ���ǵ���������һ��ʾ����
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
// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� win32D.h
Cwin32D::Cwin32D()
{
    return;
}

