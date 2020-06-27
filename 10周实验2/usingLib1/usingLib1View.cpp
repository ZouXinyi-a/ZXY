
// usingLib1View.cpp : CusingLib1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CusingLib1View 构造/析构

CusingLib1View::CusingLib1View()
{
	// TODO: 在此处添加构造代码

}

CusingLib1View::~CusingLib1View()
{
}

BOOL CusingLib1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CusingLib1View 绘制

void CusingLib1View::OnDraw(CDC* pDC)
{
	CusingLib1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	FAC A;
	CString s, ss;
	s = CString(pchar());
	pDC->TextOutW(100, 100, s);
	ss.Format(_T("%f"), A.convert(90.0));
	pDC->TextOutW(100, 200, ss);
}


// CusingLib1View 诊断

#ifdef _DEBUG
void CusingLib1View::AssertValid() const
{
	CView::AssertValid();
}

void CusingLib1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingLib1Doc* CusingLib1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingLib1Doc)));
	return (CusingLib1Doc*)m_pDocument;
}
#endif //_DEBUG


// CusingLib1View 消息处理程序
