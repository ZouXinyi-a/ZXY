﻿
// 8实验2（2）View.h: CMy8实验22View 类的接口
//

#pragma once


class CMy8实验22View : public CView
{
protected: // 仅从序列化创建
	CMy8实验22View() noexcept;
	DECLARE_DYNCREATE(CMy8实验22View)

// 特性
public:
	CMy8实验22Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy8实验22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEllipse();
};

#ifndef _DEBUG  // 8实验2（2）View.cpp 中的调试版本
inline CMy8实验22Doc* CMy8实验22View::GetDocument() const
   { return reinterpret_cast<CMy8实验22Doc*>(m_pDocument); }
#endif

