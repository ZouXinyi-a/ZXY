
// �ۺ�ʵ��3View.cpp : C�ۺ�ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ��3.h"
#endif

#include "�ۺ�ʵ��3Set.h"
#include "�ۺ�ʵ��3Doc.h"
#include "�ۺ�ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "ADD_DLG.h"

// C�ۺ�ʵ��3View

IMPLEMENT_DYNCREATE(C�ۺ�ʵ��3View, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ��3View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &C�ۺ�ʵ��3View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_BN_CLICKED(IDC_BUTTON2, &C�ۺ�ʵ��3View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C�ۺ�ʵ��3View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &C�ۺ�ʵ��3View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &C�ۺ�ʵ��3View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C�ۺ�ʵ��3View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C�ۺ�ʵ��3View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C�ۺ�ʵ��3View::OnRecordLast)
END_MESSAGE_MAP()

// C�ۺ�ʵ��3View ����/����

C�ۺ�ʵ��3View::C�ۺ�ʵ��3View()
	: CRecordView(C�ۺ�ʵ��3View::IDD)
	, num(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

C�ۺ�ʵ��3View::~C�ۺ�ʵ��3View()
{
}

void C�ۺ�ʵ��3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL C�ۺ�ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ��3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ��3Set;
	CRecordView::OnInitialUpdate();

}


// C�ۺ�ʵ��3View ��ӡ


void C�ۺ�ʵ��3View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL C�ۺ�ʵ��3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C�ۺ�ʵ��3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C�ۺ�ʵ��3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void C�ۺ�ʵ��3View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C�ۺ�ʵ��3View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C�ۺ�ʵ��3View ���

#ifdef _DEBUG
void C�ۺ�ʵ��3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ��3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ��3Doc* C�ۺ�ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ��3Doc)));
	return (C�ۺ�ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ��3View ���ݿ�֧��
CRecordset* C�ۺ�ʵ��3View::OnGetRecordset()
{
	return m_pSet;
}



// C�ۺ�ʵ��3View ��Ϣ�������





void C�ۺ�ʵ��3View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete ();
	m_pSet->MovePrev();
	if(m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void C�ۺ�ʵ��3View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK) {
		long y = adddlg.i;
		m_pSet->AddNew();
		m_pSet->m_1 = y;
		m_pSet->Update();
		UpdateData(false);
	}
}


void C�ۺ�ʵ��3View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
}


void C�ۺ�ʵ��3View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void C�ۺ�ʵ��3View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
}


void C�ۺ�ʵ��3View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
}

void C�ۺ�ʵ��3View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ch = m_pSet->m_1;
	ADD_DLG dia;
	int t = dia.DoModal();
	if (t == IDOK) {
		long gg= dia.i;
		m_pSet->Edit();
		m_pSet->m_1 = gg;
		m_pSet->Update();
		UpdateData(false);
	}
}