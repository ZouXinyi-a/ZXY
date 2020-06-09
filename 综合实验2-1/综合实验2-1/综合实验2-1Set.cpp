
// 综合实验2-1Set.cpp : C综合实验21Set 类的实现
//

#include "stdafx.h"
#include "综合实验2-1.h"
#include "综合实验2-1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验21Set 实现

// 代码生成在 2020年6月9日, 16:19

IMPLEMENT_DYNAMIC(C综合实验21Set, CRecordset)

C综合实验21Set::C综合实验21Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error 安全问题：连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString C综合实验21Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x7efc\x5408\x5b9e\x9a8c\x4e8c;DBQ=D:\\ZXY_VC\\\x5b66\x751f\x4fe1\x606f_\x76f8\x7247.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C综合实验21Set::GetDefaultSQL()
{
	return _T("[学生信息表]");
}

void C综合实验21Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[相片]"), column1);

}
/////////////////////////////////////////////////////////////////////////////
// C综合实验21Set 诊断

#ifdef _DEBUG
void C综合实验21Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C综合实验21Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

