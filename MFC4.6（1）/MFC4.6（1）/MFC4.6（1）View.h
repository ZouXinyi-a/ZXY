
// MFC4.6��1��View.h : CMFC46��1��View ��Ľӿ�
//

#pragma once


class CMFC46��1��View : public CView
{
protected: // �������л�����
	CMFC46��1��View();
	DECLARE_DYNCREATE(CMFC46��1��View)

// ����
public:
	CMFC46��1��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC46��1��View();
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
	afx_msg void OnShow();
};

#ifndef _DEBUG  // MFC4.6��1��View.cpp �еĵ��԰汾
inline CMFC46��1��Doc* CMFC46��1��View::GetDocument() const
   { return reinterpret_cast<CMFC46��1��Doc*>(m_pDocument); }
#endif

