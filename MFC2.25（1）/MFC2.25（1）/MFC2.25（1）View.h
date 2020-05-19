
// MFC2.25（1）View.h: CMFC2251View 类的接口
//

#pragma once


class CMFC2251View : public CView
{
protected: // 仅从序列化创建
	CMFC2251View() noexcept;
	DECLARE_DYNCREATE(CMFC2251View)

// 特性
public:
	CMFC2251Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC2251View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC2.25（1）View.cpp 中的调试版本
inline CMFC2251Doc* CMFC2251View::GetDocument() const
   { return reinterpret_cast<CMFC2251Doc*>(m_pDocument); }
#endif

