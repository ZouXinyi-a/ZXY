
// 10����View.h : CMy10����View ��Ľӿ�
//

#pragma once


class CMy10����View : public CView
{
protected: // �������л�����
	CMy10����View();
	DECLARE_DYNCREATE(CMy10����View)

// ����
public:
	CMy10����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy10����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 10����View.cpp �еĵ��԰汾
inline CMy10����Doc* CMy10����View::GetDocument() const
   { return reinterpret_cast<CMy10����Doc*>(m_pDocument); }
#endif

