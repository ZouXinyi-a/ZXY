
// 8实验2（2）View.cpp: CMy8实验22View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "8实验2（2）.h"
#endif
#include "MyDlg.h"
#include "8实验2（2）Doc.h"
#include "8实验2（2）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy8实验22View

IMPLEMENT_DYNCREATE(CMy8实验22View, CView)

BEGIN_MESSAGE_MAP(CMy8实验22View, CView)
	ON_COMMAND(ID_Ellipse, &CMy8实验22View::OnEllipse)
END_MESSAGE_MAP()

// CMy8实验22View 构造/析构

CMy8实验22View::CMy8实验22View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy8实验22View::~CMy8实验22View()
{
}

BOOL CMy8实验22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy8实验22View 绘图

void CMy8实验22View::OnDraw(CDC* /*pDC*/)
{
	CMy8实验22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy8实验22View 诊断

#ifdef _DEBUG
void CMy8实验22View::AssertValid() const
{
	CView::AssertValid();
}

void CMy8实验22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy8实验22Doc* CMy8实验22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy8实验22Doc)));
	return (CMy8实验22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy8实验22View 消息处理程序


void CMy8实验22View::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int t=dlg.DoModal();
	if (t == IDOK)
	{
		int L, T, R, B;
		L = dlg.left;
		T = dlg.top;
		R = dlg.right;
		B = dlg.bottom;
		CRect cr(L,T,R,B);
		GetDC()->Ellipse(cr);
	}
}
