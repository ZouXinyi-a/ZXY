
// 综合实验一View.h : C综合实验一View 类的接口
//

#pragma once

class C综合实验一Set;

class C综合实验一View : public CRecordView
{
protected: // 仅从序列化创建
	C综合实验一View();
	DECLARE_DYNCREATE(C综合实验一View)

public:
	enum{ IDD = IDD_MY_FORM };
	C综合实验一Set* m_pSet;
	CString path;
// 特性
public:
	C综合实验一Doc* GetDocument() const;
	void draw_pic(CString file);

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~C综合实验一View();
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
	afx_msg void OnRecordFirst();
	CString photo;
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // 综合实验一View.cpp 中的调试版本
inline C综合实验一Doc* C综合实验一View::GetDocument() const
   { return reinterpret_cast<C综合实验一Doc*>(m_pDocument); }
#endif

