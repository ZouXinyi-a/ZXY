
// 11��ʵ��12Set.cpp : CMy11��ʵ��12Set ���ʵ��
//

#include "stdafx.h"
#include "11��ʵ��12.h"
#include "11��ʵ��12Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11��ʵ��12Set ʵ��

// ���������� 2020��7��2��, 22:33

IMPLEMENT_DYNAMIC(CMy11��ʵ��12Set, CRecordset)

CMy11��ʵ��12Set::CMy11��ʵ��12Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error ��ȫ���⣺�����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy11��ʵ��12Set::GetDefaultConnect()
{
	return _T("����Դ_11ʵ��12");
}

CString CMy11��ʵ��12Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void CMy11��ʵ��12Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// CMy11��ʵ��12Set ���

#ifdef _DEBUG
void CMy11��ʵ��12Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy11��ʵ��12Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

