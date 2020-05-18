
// MFC4.6(2)View.h: CMFC462View 类的接口
//

#pragma once


class CMFC462View : public CView
{
protected: // 仅从序列化创建
	CMFC462View() noexcept;
	DECLARE_DYNCREATE(CMFC462View)

// 特性
public:
	CMFC462Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC462View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnExchange();
};

#ifndef _DEBUG  // MFC4.6(2)View.cpp 中的调试版本
inline CMFC462Doc* CMFC462View::GetDocument() const
   { return reinterpret_cast<CMFC462Doc*>(m_pDocument); }
#endif

