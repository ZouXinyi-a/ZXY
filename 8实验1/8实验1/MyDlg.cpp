// MyDlg.cpp: 实现文件
//

#include "pch.h"
#include "8实验1.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include"math.h"

// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, Box);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT3, b);
	DDX_Text(pDX, IDC_EDIT2, c);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg 消息处理程序


void MyDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	int n = Box.GetCurSel();
	Box.GetLBText(n, s);
	if (s == _T("+")) {
		c = a + b;
	}
	if (s == _T("-")) {
		c = a - b;
	}
	if (s == _T("*")) {
		c = a * b;
	}
	if (s == _T("/")) {
		c = a /b;
	}
	if (s == _T("开平方")) {
		c = sqrt(a);
	}
	if (s == _T("倒数")) {
		c = 1/a;
	}
	UpdateData(false);
}


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	s = "";
	Box.AddString(_T("+"));
	Box.AddString(_T("-")); 
	Box.AddString(_T("*"));
	Box.AddString(_T("/"));
	Box.AddString(_T("开平方"));
	Box.AddString(_T("倒数"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
