
// usingLib0View.cpp : CusingLib0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "usingLib0.h"
#endif

#include "usingLib0Doc.h"
#include "usingLib0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"win321.h"

// CusingLib0View

IMPLEMENT_DYNCREATE(CusingLib0View, CView)

BEGIN_MESSAGE_MAP(CusingLib0View, CView)
END_MESSAGE_MAP()

// CusingLib0View ����/����

CusingLib0View::CusingLib0View()
{
	// TODO: �ڴ˴���ӹ������

}

CusingLib0View::~CusingLib0View()
{
}

BOOL CusingLib0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CusingLib0View ����

void CusingLib0View::OnDraw(CDC* pDC)
{
	CusingLib0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s, ss;
	s = CString(pchar());
	pDC->TextOutW(100, 100, s);
	ss.Format(_T("%d"), factorial(3));
	pDC->TextOutW(300, 100, ss);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CusingLib0View ���

#ifdef _DEBUG
void CusingLib0View::AssertValid() const
{
	CView::AssertValid();
}

void CusingLib0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingLib0Doc* CusingLib0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingLib0Doc)));
	return (CusingLib0Doc*)m_pDocument;
}
#endif //_DEBUG


// CusingLib0View ��Ϣ�������
