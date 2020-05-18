
// MFC4.6(2)View.cpp: CMFC462View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC4.6(2).h"
#endif
#include "MyDlg.h"
#include "MFC4.6(2)Doc.h"
#include "MFC4.6(2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC462View

IMPLEMENT_DYNCREATE(CMFC462View, CView)

BEGIN_MESSAGE_MAP(CMFC462View, CView)
	ON_COMMAND(ID_Exchange, &CMFC462View::OnExchange)
END_MESSAGE_MAP()

// CMFC462View 构造/析构

CMFC462View::CMFC462View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFC462View::~CMFC462View()
{
}

BOOL CMFC462View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC462View 绘图

void CMFC462View::OnDraw(CDC* /*pDC*/)
{
	CMFC462Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC462View 诊断

#ifdef _DEBUG
void CMFC462View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC462View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC462Doc* CMFC462View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC462Doc)));
	return (CMFC462Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC462View 消息处理程序


void CMFC462View::OnExchange()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	CClientDC dc(this);
	int t = dlg.DoModal();
	if (t == IDOK) {
		CString ss1, ss2, h1, h2;
		ss1 = dlg.str2;
		ss2 = dlg.str1;
		h1.Format(_T("交换后的第一个为：%s,第二个为：%s"), ss1, ss2);
		dc.TextOutW(100, 100, h1);
	}
}
