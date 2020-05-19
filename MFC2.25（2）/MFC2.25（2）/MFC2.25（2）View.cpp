
// MFC2.25（2）View.cpp: CMFC2252View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC2.25（2）.h"
#endif

#include "MFC2.25（2）Doc.h"
#include "MFC2.25（2）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC2252View

IMPLEMENT_DYNCREATE(CMFC2252View, CView)

BEGIN_MESSAGE_MAP(CMFC2252View, CView)
	ON_WM_RBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC2252View 构造/析构

CMFC2252View::CMFC2252View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFC2252View::~CMFC2252View()
{
}

BOOL CMFC2252View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC2252View 绘图

void CMFC2252View::OnDraw(CDC* /*pDC*/)
{
	CMFC2252Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC2252View 诊断

#ifdef _DEBUG
void CMFC2252View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC2252View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC2252Doc* CMFC2252View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC2252Doc)));
	return (CMFC2252Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC2252View 消息处理程序


void CMFC2252View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC2252Doc* pDoc = GetDocument();
	CString s;
	CClientDC dc(this);
	s.Format(L"%d", pDoc->count);
	dc.TextOutW(200,300,s);
	CView::OnRButtonDown(nFlags, point);
}


void CMFC2252View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC2252Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}
