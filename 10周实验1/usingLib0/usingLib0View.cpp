
// usingLib0View.cpp : CusingLib0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CusingLib0View 构造/析构

CusingLib0View::CusingLib0View()
{
	// TODO: 在此处添加构造代码

}

CusingLib0View::~CusingLib0View()
{
}

BOOL CusingLib0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CusingLib0View 绘制

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
	// TODO: 在此处为本机数据添加绘制代码
}


// CusingLib0View 诊断

#ifdef _DEBUG
void CusingLib0View::AssertValid() const
{
	CView::AssertValid();
}

void CusingLib0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingLib0Doc* CusingLib0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingLib0Doc)));
	return (CusingLib0Doc*)m_pDocument;
}
#endif //_DEBUG


// CusingLib0View 消息处理程序
