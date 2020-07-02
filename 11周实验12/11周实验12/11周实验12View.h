
// 11周实验12View.h : CMy11周实验12View 类的接口
//

#pragma once

class CMy11周实验12Set;

class CMy11周实验12View : public CRecordView
{
protected: // 仅从序列化创建
	CMy11周实验12View();
	DECLARE_DYNCREATE(CMy11周实验12View)

public:
	enum{ IDD = IDD_MY1112_FORM };
	CMy11周实验12Set* m_pSet;

// 特性
public:
	CMy11周实验12Doc* GetDocument() const;

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
	virtual ~CMy11周实验12View();
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
	afx_msg void OnEnChangeEdit4();
	CString name;
	CString num;
	long age;
	CString xingbie;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 11周实验12View.cpp 中的调试版本
inline CMy11周实验12Doc* CMy11周实验12View::GetDocument() const
   { return reinterpret_cast<CMy11周实验12Doc*>(m_pDocument); }
#endif

