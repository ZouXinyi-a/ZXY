
// usingLib1View.cpp : CusingLib1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "usingLib1.h"
#endif

#include "usingLib1Doc.h"
#include "usingLib1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "win322.h"

// CusingLib1View

IMPLEMENT_DYNCREATE(CusingLib1View, CView)

BEGIN_MESSAGE_MAP(CusingLib1View, CView)
END_MESSAGE_MAP()

// CusingLib1View ����/����

CusingLib1View::CusingLib1View()
{
	// TODO: �ڴ˴���ӹ������

}

CusingLib1View::~CusingLib1View()
{
}

BOOL CusingLib1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CusingLib1View ����

void CusingLib1View::OnDraw(CDC* pDC)
{
	CusingLib1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	FAC A;
	CString s, ss;
	s = CString(pchar());
	pDC->TextOutW(100, 100, s);
	ss.Format(_T("%f"), A.convert(90.0));
	pDC->TextOutW(100, 200, ss);
}


// CusingLib1View ���

#ifdef _DEBUG
void CusingLib1View::AssertValid() const
{
	CView::AssertValid();
}

void CusingLib1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingLib1Doc* CusingLib1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingLib1Doc)));
	return (CusingLib1Doc*)m_pDocument;
}
#endif //_DEBUG


// CusingLib1View ��Ϣ�������
