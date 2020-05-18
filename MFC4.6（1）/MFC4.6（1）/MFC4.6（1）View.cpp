
// MFC4.6（1）View.cpp : CMFC46（1）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC4.6（1）.h"
#endif

#include "MFC4.6（1）Doc.h"
#include "MFC4.6（1）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "MyDlg.h"

// CMFC46（1）View

IMPLEMENT_DYNCREATE(CMFC46（1）View, CView)

BEGIN_MESSAGE_MAP(CMFC46（1）View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_Show, &CMFC46（1）View::OnShow)
END_MESSAGE_MAP()

// CMFC46（1）View 构造/析构

CMFC46（1）View::CMFC46（1）View()
{
	// TODO: 在此处添加构造代码

}

CMFC46（1）View::~CMFC46（1）View()
{
}

BOOL CMFC46（1）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC46（1）View 绘制

void CMFC46（1）View::OnDraw(CDC* /*pDC*/)
{
	CMFC46（1）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}

void CMFC46（1）View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFC46（1）View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFC46（1）View 诊断

#ifdef _DEBUG
void CMFC46（1）View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC46（1）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC46（1）Doc* CMFC46（1）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC46（1）Doc)));
	return (CMFC46（1）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC46（1）View 消息处理程序


void CMFC46（1）View::OnShow()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	if(dlg.DoModal()==IDCANCEL){
		CClientDC dc(this);
		CString str;
		str.Format(_T("你已退出对话框"));

		dc.TextOutW(50,50,str);
	}
}
