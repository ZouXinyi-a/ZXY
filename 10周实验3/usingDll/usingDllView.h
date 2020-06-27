
// usingDllView.h : CusingDllView 类的接口
//

#pragma once


class CusingDllView : public CView
{
protected: // 仅从序列化创建
	CusingDllView();
	DECLARE_DYNCREATE(CusingDllView)

// 特性
public:
	CusingDllDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CusingDllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // usingDllView.cpp 中的调试版本
inline CusingDllDoc* CusingDllView::GetDocument() const
   { return reinterpret_cast<CusingDllDoc*>(m_pDocument); }
#endif

