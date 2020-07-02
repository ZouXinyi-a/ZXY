
// 9周实验1Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMy9周实验1Dlg 对话框
class CMy9周实验1Dlg : public CDialogEx
{
// 构造
public:
	CMy9周实验1Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY91_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int n;
	CListBox list;
	afx_msg void OnBnClickedButton1();
	virtual void OnOK();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	CString lists;
};
