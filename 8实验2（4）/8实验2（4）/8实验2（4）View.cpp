
// 8实验2（4）View.cpp: CMy8实验24View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "8实验2（4）.h"
#endif
#include "MyDlg.h"
#include "8实验2（4）Doc.h"
#include "8实验2（4）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8实验24View

IMPLEMENT_DYNCREATE(CMy8实验24View, CView)

BEGIN_MESSAGE_MAP(CMy8实验24View, CView)
	ON_COMMAND(ID_ChangeColor, &CMy8实验24View::OnChangecolor)
END_MESSAGE_MAP()

// CMy8实验24View 构造/析构

CMy8实验24View::CMy8实验24View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy8实验24View::~CMy8实验24View()
{
}

BOOL CMy8实验24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy8实验24View 绘图

void CMy8实验24View::OnDraw(CDC* pDC)
{
	CMy8实验24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CBrush *oldbrush, brush;
	brush.CreateSolidBrush(RGB(r1,g1,b1));
	oldbrush = pDC->SelectObject(&brush);
	pDC->Ellipse(pDoc->cr);
	pDC->SelectObject(oldbrush);
}


// CMy8实验24View 诊断

#ifdef _DEBUG
void CMy8实验24View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8实验24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8实验24Doc* CMy8实验24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8实验24Doc)));
	return (CMy8实验24Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8实验24View 消息处理程序


void CMy8实验24View::OnChangecolor()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		r1 = dlg.r;
		g1 = dlg.g;
		b1 = dlg.b;
	}
	Invalidate();

}
