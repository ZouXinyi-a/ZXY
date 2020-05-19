
// 8课练1View.cpp: CMy8课练1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "8课练1.h"
#endif

#include "8课练1Doc.h"
#include "8课练1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8课练1View

IMPLEMENT_DYNCREATE(CMy8课练1View, CView)

BEGIN_MESSAGE_MAP(CMy8课练1View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy8课练1View 构造/析构

CMy8课练1View::CMy8课练1View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy8课练1View::~CMy8课练1View()
{
}

BOOL CMy8课练1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy8课练1View 绘图

void CMy8课练1View::OnDraw(CDC* /*pDC*/)
{
	CMy8课练1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy8课练1View 诊断

#ifdef _DEBUG
void CMy8课练1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8课练1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8课练1Doc* CMy8课练1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8课练1Doc)));
	return (CMy8课练1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8课练1View 消息处理程序


void CMy8课练1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString str = cfd.GetFileName();
		CString filename = str.Left(str.Find('.'));//加了这个显示的只有文件名str.Find('.')
		dc.TextOutW(200, 300, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
