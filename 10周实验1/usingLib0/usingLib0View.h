
// usingLib0View.h : CusingLib0View ��Ľӿ�
//

#pragma once


class CusingLib0View : public CView
{
protected: // �������л�����
	CusingLib0View();
	DECLARE_DYNCREATE(CusingLib0View)

// ����
public:
	CusingLib0Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CusingLib0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // usingLib0View.cpp �еĵ��԰汾
inline CusingLib0Doc* CusingLib0View::GetDocument() const
   { return reinterpret_cast<CusingLib0Doc*>(m_pDocument); }
#endif

