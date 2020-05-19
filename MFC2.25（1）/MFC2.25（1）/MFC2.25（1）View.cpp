
// MFC2.25（1）View.cpp: CMFC2251View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC2.25（1）.h"
#endif

#include "MFC2.25（1）Doc.h"
#include "MFC2.25（1）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC2251View

IMPLEMENT_DYNCREATE(CMFC2251View, CView)

BEGIN_MESSAGE_MAP(CMFC2251View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC2251View 构造/析构

CMFC2251View::CMFC2251View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFC2251View::~CMFC2251View()
{
}

BOOL CMFC2251View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC2251View 绘图

void CMFC2251View::OnDraw(CDC* /*pDC*/)
{
	CMFC2251Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC2251View 诊断

#ifdef _DEBUG
void CMFC2251View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC2251View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC2251Doc* CMFC2251View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC2251Doc)));
	return (CMFC2251Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC2251View 消息处理程序


void CMFC2251View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC2251Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 300, pDoc->s);
	CView::OnLButtonDown(nFlags, point);
}
