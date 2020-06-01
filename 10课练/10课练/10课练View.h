
// 10课练View.h : CMy10课练View 类的接口
//

#pragma once


class CMy10课练View : public CView
{
protected: // 仅从序列化创建
	CMy10课练View();
	DECLARE_DYNCREATE(CMy10课练View)

// 特性
public:
	CMy10课练Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy10课练View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 10课练View.cpp 中的调试版本
inline CMy10课练Doc* CMy10课练View::GetDocument() const
   { return reinterpret_cast<CMy10课练Doc*>(m_pDocument); }
#endif

