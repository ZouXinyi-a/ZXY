
// usingDllView.cpp : CusingDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "usingDll.h"
#endif

#include "usingDllDoc.h"
#include "usingDllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "win32D.h"

// CusingDllView

IMPLEMENT_DYNCREATE(CusingDllView, CView)

BEGIN_MESSAGE_MAP(CusingDllView, CView)
END_MESSAGE_MAP()

// CusingDllView ����/����

CusingDllView::CusingDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CusingDllView::~CusingDllView()
{
}

BOOL CusingDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CusingDllView ����

void CusingDllView::OnDraw(CDC* pDC)
{
	CusingDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s.Format(_T("���ǴӶ�̬���з��صĵ�һ����ַ�����%d"),factorial(5));
	pDC->TextOutW(300, 100, s);

	//CString ss;
	FAC A;
	s.Format(_T("���ǴӶ�̬���з��صĵڶ�����ַ�����%f"),A.convert(90.0));
	pDC->TextOutW(300, 200, s);
}


// CusingDllView ���

#ifdef _DEBUG
void CusingDllView::AssertValid() const
{
	CView::AssertValid();
}

void CusingDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingDllDoc* CusingDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingDllDoc)));
	return (CusingDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CusingDllView ��Ϣ�������
