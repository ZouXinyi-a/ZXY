#pragma once


// mydia �Ի���

class mydia : public CDialogEx
{
	DECLARE_DYNAMIC(mydia)

public:
	mydia(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydia();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
