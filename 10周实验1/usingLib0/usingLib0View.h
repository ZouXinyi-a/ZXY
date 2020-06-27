
// usingLib0View.h : CusingLib0View 类的接口
//

#pragma once


class CusingLib0View : public CView
{
protected: // 仅从序列化创建
	CusingLib0View();
	DECLARE_DYNCREATE(CusingLib0View)

// 特性
public:
	CusingLib0Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CusingLib0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // usingLib0View.cpp 中的调试版本
inline CusingLib0Doc* CusingLib0View::GetDocument() const
   { return reinterpret_cast<CusingLib0Doc*>(m_pDocument); }
#endif

