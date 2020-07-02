
// 6周课练1View.h : CMy6周课练1View 类的接口
//

#pragma once


class CMy6周课练1View : public CView
{
protected: // 仅从序列化创建
	CMy6周课练1View();
	DECLARE_DYNCREATE(CMy6周课练1View)

// 特性
public:
	CMy6周课练1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy6周课练1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 6周课练1View.cpp 中的调试版本
inline CMy6周课练1Doc* CMy6周课练1View::GetDocument() const
   { return reinterpret_cast<CMy6周课练1Doc*>(m_pDocument); }
#endif

