
// 11��ʵ��12View.cpp : CMy11��ʵ��12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "11��ʵ��12.h"
#endif

#include "11��ʵ��12Set.h"
#include "11��ʵ��12Doc.h"
#include "11��ʵ��12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11��ʵ��12View

IMPLEMENT_DYNCREATE(CMy11��ʵ��12View, CRecordView)

BEGIN_MESSAGE_MAP(CMy11��ʵ��12View, CRecordView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_EN_CHANGE(IDC_EDIT4, &CMy11��ʵ��12View::OnEnChangeEdit4)
	ON_COMMAND(ID_RECORD_FIRST, &CMy11��ʵ��12View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMy11��ʵ��12View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMy11��ʵ��12View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMy11��ʵ��12View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &CMy11��ʵ��12View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CMy11��ʵ��12View ����/����

CMy11��ʵ��12View::CMy11��ʵ��12View()
	: CRecordView(CMy11��ʵ��12View::IDD)
	, name(_T(""))
	, num(_T(""))
	, age(0)
	, xingbie(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy11��ʵ��12View::~CMy11��ʵ��12View()
{
}

void CMy11��ʵ��12View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_4);
}

BOOL CMy11��ʵ��12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy11��ʵ��12View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My11��ʵ��12Set;
	CRecordView::OnInitialUpdate();

}

void CMy11��ʵ��12View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMy11��ʵ��12View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMy11��ʵ��12View ���

#ifdef _DEBUG
void CMy11��ʵ��12View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy11��ʵ��12View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy11��ʵ��12Doc* CMy11��ʵ��12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11��ʵ��12Doc)));
	return (CMy11��ʵ��12Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11��ʵ��12View ���ݿ�֧��
CRecordset* CMy11��ʵ��12View::OnGetRecordset()
{
	return m_pSet;
}



// CMy11��ʵ��12View ��Ϣ�������


void CMy11��ʵ��12View::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMy11��ʵ��12View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy11��ʵ��12View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy11��ʵ��12View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy11��ʵ��12View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void CMy11��ʵ��12View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString filename;
	filename=m_pSet->m_1;
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
