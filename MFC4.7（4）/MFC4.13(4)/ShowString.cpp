// ShowString.cpp: 实现文件
//

#include "pch.h"
#include "MFC4.13(4).h"
#include "ShowString.h"
#include "afxdialogex.h"


// ShowString 对话框

IMPLEMENT_DYNAMIC(ShowString, CDialogEx)

ShowString::ShowString(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str(_T(""))
	, num(_T(""))
	, result(_T(""))
{

}

ShowString::~ShowString()
{
}

void ShowString::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str);
	DDX_Text(pDX, IDC_EDIT2, num);
	DDX_Text(pDX, IDC_EDIT3, result);
}


BEGIN_MESSAGE_MAP(ShowString, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &ShowString::OnBnClickedButton1)
END_MESSAGE_MAP()


// ShowString 消息处理程序


void ShowString::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str_1, str_2, str_3;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str_1);
	GetDlgItem(IDC_EDIT2)->GetWindowText(str_2);

	str_3 = str_1 + str_2;
	SetDlgItemText(IDC_EDIT3, str_3);
}
