
// usingLib1View.h : CusingLib1View ��Ľӿ�
//

#pragma once


class CusingLib1View : public CView
{
protected: // �������л�����
	CusingLib1View();
	DECLARE_DYNCREATE(CusingLib1View)

// ����
public:
	CusingLib1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CusingLib1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // usingLib1View.cpp �еĵ��԰汾
inline CusingLib1Doc* CusingLib1View::GetDocument() const
   { return reinterpret_cast<CusingLib1Doc*>(m_pDocument); }
#endif

