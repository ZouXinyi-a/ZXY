
// �ۺ�ʵ��3View.h : C�ۺ�ʵ��3View ��Ľӿ�
//

#pragma once

class C�ۺ�ʵ��3Set;

class C�ۺ�ʵ��3View : public CRecordView
{
protected: // �������л�����
	C�ۺ�ʵ��3View();
	DECLARE_DYNCREATE(C�ۺ�ʵ��3View)

public:
	enum{ IDD = IDD_MY3_FORM };
	C�ۺ�ʵ��3Set* m_pSet;

// ����
public:
	C�ۺ�ʵ��3Doc* GetDocument() const;

// ����
public:
	long ch;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~C�ۺ�ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // �ۺ�ʵ��3View.cpp �еĵ��԰汾
inline C�ۺ�ʵ��3Doc* C�ۺ�ʵ��3View::GetDocument() const
   { return reinterpret_cast<C�ۺ�ʵ��3Doc*>(m_pDocument); }
#endif

