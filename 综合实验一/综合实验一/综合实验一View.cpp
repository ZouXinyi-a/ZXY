
// �ۺ�ʵ��һView.cpp : C�ۺ�ʵ��һView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ��һ.h"
#endif

#include "�ۺ�ʵ��һSet.h"
#include "�ۺ�ʵ��һDoc.h"
#include "�ۺ�ʵ��һView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��һView

IMPLEMENT_DYNCREATE(C�ۺ�ʵ��һView, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ��һView, CRecordView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_RECORD_FIRST, &C�ۺ�ʵ��һView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C�ۺ�ʵ��һView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C�ۺ�ʵ��һView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C�ۺ�ʵ��һView::OnRecordLast)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// C�ۺ�ʵ��һView ����/����

C�ۺ�ʵ��һView::C�ۺ�ʵ��һView()
	: CRecordView(C�ۺ�ʵ��һView::IDD)
	, photo(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path=_T("D:\\���Ӱ屨\\������Ƭ.ͼƬ\\");
}

C�ۺ�ʵ��һView::~C�ۺ�ʵ��һView()
{
}

void C�ۺ�ʵ��һView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL C�ۺ�ʵ��һView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ��һView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ��һSet;
	CRecordView::OnInitialUpdate();

}

void C�ۺ�ʵ��һView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C�ۺ�ʵ��һView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C�ۺ�ʵ��һView ���

#ifdef _DEBUG
void C�ۺ�ʵ��һView::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ��һView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ��һDoc* C�ۺ�ʵ��һView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ��һDoc)));
	return (C�ۺ�ʵ��һDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ��һView ���ݿ�֧��
CRecordset* C�ۺ�ʵ��һView::OnGetRecordset()
{
	return m_pSet;
}



// C�ۺ�ʵ��һView ��Ϣ�������


void C�ۺ�ʵ��һView::OnRecordFirst()
{
	// TODO: �ڴ�������GEt��������
	m_pSet->MoveFirst();
	UpdateData(false);
	/*
	CString filename,s;
	GetDlgItemText(IDC_EDIT1,s);
	filename=path+s;
	draw_pic(filename);*/
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C�ۺ�ʵ��һView::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if(m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	/*
	CString filename,s;
	GetDlgItemText(IDC_EDIT1,s);
	filename=path+s;
	draw_pic(filename);*/
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C�ۺ�ʵ��һView::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if(m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	/*
	CString filename,s;
	GetDlgItemText(IDC_EDIT1,s);
	filename=path+s;
	draw_pic(filename);*/
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C�ۺ�ʵ��һView::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	/*
	CString filename,s;
	GetDlgItemText(IDC_EDIT1,s);
	filename=path+s;
	draw_pic(filename);*/
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}
void C�ۺ�ʵ��һView::draw_pic(CString file)
{/*
	CImage img;
	img.Load(file);
	CDC* pDC=GetDlgItem(IDC_STATIC)->GetDC();
	int sx,sy,w,h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio=1.0*rect.Width()/rect.Height();
	float img_ratio=1.0*img.GetWidth()/img.GetHeight();
	if(rect_ratio>img_ratio)
	{
		h=rect.Height();
		w=img_ratio*h;
		sx=(rect.Width()-w)/2;
		sy=0;
	}
	else
	{
		w=rect.Width();
		h=w/img_ratio;
		sx=0;
		sy=(rect.Height()-h)/2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC,sx,sy,w,h);
	ReleaseDC(pDC);
	*/
}

void C�ۺ�ʵ��һView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: �ڴ˴������Ϣ����������
	// ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, m_pSet->column1);
	filename = path + m_pSet->column1;
	CImage img;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	//InvalidateRect(rect);
	ReleaseDC(pDC);
}
