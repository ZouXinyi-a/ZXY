
// usingLib1View.h : CusingLib1View 类的接口
//

#pragma once


class CusingLib1View : public CView
{
protected: // 仅从序列化创建
	CusingLib1View();
	DECLARE_DYNCREATE(CusingLib1View)

// 特性
public:
	CusingLib1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CusingLib1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // usingLib1View.cpp 中的调试版本
inline CusingLib1Doc* CusingLib1View::GetDocument() const
   { return reinterpret_cast<CusingLib1Doc*>(m_pDocument); }
#endif

