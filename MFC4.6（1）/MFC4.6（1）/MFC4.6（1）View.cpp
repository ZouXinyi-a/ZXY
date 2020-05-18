
// MFC4.6��1��View.cpp : CMFC46��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC4.6��1��.h"
#endif

#include "MFC4.6��1��Doc.h"
#include "MFC4.6��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "MyDlg.h"

// CMFC46��1��View

IMPLEMENT_DYNCREATE(CMFC46��1��View, CView)

BEGIN_MESSAGE_MAP(CMFC46��1��View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_Show, &CMFC46��1��View::OnShow)
END_MESSAGE_MAP()

// CMFC46��1��View ����/����

CMFC46��1��View::CMFC46��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC46��1��View::~CMFC46��1��View()
{
}

BOOL CMFC46��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC46��1��View ����

void CMFC46��1��View::OnDraw(CDC* /*pDC*/)
{
	CMFC46��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

void CMFC46��1��View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFC46��1��View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFC46��1��View ���

#ifdef _DEBUG
void CMFC46��1��View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC46��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC46��1��Doc* CMFC46��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC46��1��Doc)));
	return (CMFC46��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC46��1��View ��Ϣ�������


void CMFC46��1��View::OnShow()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	if(dlg.DoModal()==IDCANCEL){
		CClientDC dc(this);
		CString str;
		str.Format(_T("�����˳��Ի���"));

		dc.TextOutW(50,50,str);
	}
}
