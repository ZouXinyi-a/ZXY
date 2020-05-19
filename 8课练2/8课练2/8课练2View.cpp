﻿
// 8课练2View.cpp: CMy8课练2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "8课练2.h"
#endif
#include "MyDlg.h"
#include "8课练2Doc.h"
#include "8课练2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8课练2View

IMPLEMENT_DYNCREATE(CMy8课练2View, CView)

BEGIN_MESSAGE_MAP(CMy8课练2View, CView)
	ON_COMMAND(ID_ShowFilename, &CMy8课练2View::OnShowfilename)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy8课练2View 构造/析构

CMy8课练2View::CMy8课练2View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy8课练2View::~CMy8课练2View()
{
}

BOOL CMy8课练2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy8课练2View 绘图

void CMy8课练2View::OnDraw(CDC* /*pDC*/)
{
	CMy8课练2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy8课练2View 诊断

#ifdef _DEBUG
void CMy8课练2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8课练2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8课练2Doc* CMy8课练2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8课练2Doc)));
	return (CMy8课练2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8课练2View 消息处理程序





void CMy8课练2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString str = cfd.GetFileName();
		filename = str.Left(str.Find('.'));
		dc.TextOutW(200, 300, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
void CMy8课练2View::OnShowfilename()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	dlg.SetString(filename);
	dlg.DoModal();
}