
// usingDllView.h : CusingDllView ��Ľӿ�
//

#pragma once


class CusingDllView : public CView
{
protected: // �������л�����
	CusingDllView();
	DECLARE_DYNCREATE(CusingDllView)

// ����
public:
	CusingDllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CusingDllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // usingDllView.cpp �еĵ��԰汾
inline CusingDllDoc* CusingDllView::GetDocument() const
   { return reinterpret_cast<CusingDllDoc*>(m_pDocument); }
#endif

