
// usingLib1.h : usingLib1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CusingLib1App:
// �йش����ʵ�֣������ usingLib1.cpp
//

class CusingLib1App : public CWinApp
{
public:
	CusingLib1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CusingLib1App theApp;
