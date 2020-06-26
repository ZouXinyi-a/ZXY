
// 综合实验3View.h : C综合实验3View 类的接口
//

#pragma once

class C综合实验3Set;

class C综合实验3View : public CRecordView
{
protected: // 仅从序列化创建
	C综合实验3View();
	DECLARE_DYNCREATE(C综合实验3View)

public:
	enum{ IDD = IDD_MY3_FORM };
	C综合实验3Set* m_pSet;

// 特性
public:
	C综合实验3Doc* GetDocument() const;

// 操作
public:
	long ch;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C综合实验3View();
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
	CString num;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // 综合实验3View.cpp 中的调试版本
inline C综合实验3Doc* C综合实验3View::GetDocument() const
   { return reinterpret_cast<C综合实验3Doc*>(m_pDocument); }
#endif

