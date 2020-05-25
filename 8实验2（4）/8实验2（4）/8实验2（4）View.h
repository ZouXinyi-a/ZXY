﻿
// 8实验2（4）View.h: CMy8实验24View 类的接口
//

#pragma once


class CMy8实验24View : public CView
{
protected: // 仅从序列化创建
	CMy8实验24View() noexcept;
	DECLARE_DYNCREATE(CMy8实验24View)

// 特性
public:
	CMy8实验24Doc* GetDocument() const;

// 操作
public:
	int r1, g1, b1;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy8实验24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChangecolor();
};

#ifndef _DEBUG  // 8实验2（4）View.cpp 中的调试版本
inline CMy8实验24Doc* CMy8实验24View::GetDocument() const
   { return reinterpret_cast<CMy8实验24Doc*>(m_pDocument); }
#endif

