
// 10����View.cpp : CMy10����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "10����.h"
#endif

#include "10����Doc.h"
#include "10����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy10����View

IMPLEMENT_DYNCREATE(CMy10����View, CView)

BEGIN_MESSAGE_MAP(CMy10����View, CView)
END_MESSAGE_MAP()

// CMy10����View ����/����

CMy10����View::CMy10����View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy10����View::~CMy10����View()
{
}

BOOL CMy10����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy10����View ����

void CMy10����View::OnDraw(CDC* /*pDC*/)
{
	CMy10����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy10����View ���

#ifdef _DEBUG
void CMy10����View::AssertValid() const
{
	CView::AssertValid();
}

void CMy10����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy10����Doc* CMy10����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy10����Doc)));
	return (CMy10����Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy10����View ��Ϣ�������
