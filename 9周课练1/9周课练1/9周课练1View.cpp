
// 9周课练1View.cpp: CMy9周课练1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "9周课练1.h"
#endif

#include "9周课练1Doc.h"
#include "9周课练1View.h"
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy9周课练1View

IMPLEMENT_DYNCREATE(CMy9周课练1View, CView)

BEGIN_MESSAGE_MAP(CMy9周课练1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy9周课练1View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CMy9周课练1View::OnFileSaveAs)
	//ON_COMMAND(ID_Change, &CMy9周课练1View::OnChange)
END_MESSAGE_MAP()

// CMy9周课练1View 构造/析构

CMy9周课练1View::CMy9周课练1View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy9周课练1View::~CMy9周课练1View()
{
}

BOOL CMy9周课练1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy9周课练1View 绘图

void CMy9周课练1View::OnDraw(CDC* pDC)
{
	CMy9周课练1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(200, 300, pDoc->filename);
}


// CMy9周课练1View 诊断

#ifdef _DEBUG
void CMy9周课练1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy9周课练1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy9周课练1Doc* CMy9周课练1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy9周课练1Doc)));
	return (CMy9周课练1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy9周课练1View 消息处理程序


void CMy9周课练1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CMy9周课练1Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		pDoc->filename = cfd.GetPathName();
		ifstream ifs(pDoc->filename);
		string s;

		CClientDC dc(this);
		int x = 20, y = 10;
		while (ifs >> s)
		{
			dc.TextOutW(x, y, CString(s.c_str()));
			y += 30;
		}

	}
}


void CMy9周课练1View::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		CString ss = cfd.GetPathName();
		ofs << CT2A(ss.GetString()) << endl;
	}
}



