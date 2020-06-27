
// usingDllView.cpp : CusingDllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CusingDllView 构造/析构

CusingDllView::CusingDllView()
{
	// TODO: 在此处添加构造代码

}

CusingDllView::~CusingDllView()
{
}

BOOL CusingDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CusingDllView 绘制

void CusingDllView::OnDraw(CDC* pDC)
{
	CusingDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	s.Format(_T("这是从动态库中返回的第一题的字符串：%d"),factorial(5));
	pDC->TextOutW(300, 100, s);

	//CString ss;
	FAC A;
	s.Format(_T("这是从动态库中返回的第二题的字符串：%f"),A.convert(90.0));
	pDC->TextOutW(300, 200, s);
}


// CusingDllView 诊断

#ifdef _DEBUG
void CusingDllView::AssertValid() const
{
	CView::AssertValid();
}

void CusingDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingDllDoc* CusingDllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingDllDoc)));
	return (CusingDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CusingDllView 消息处理程序
