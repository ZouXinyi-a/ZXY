﻿
// 8实验2（3）.h: 8实验2（3） 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// CMy8实验23App:
// 有关此类的实现，请参阅 8实验2（3）.cpp
//

class CMy8实验23App : public CWinApp
{
public:
	CMy8实验23App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy8实验23App theApp;
