
// 11��ʵ��12Doc.h : CMy11��ʵ��12Doc ��Ľӿ�
//


#pragma once
#include "11��ʵ��12Set.h"


class CMy11��ʵ��12Doc : public CDocument
{
protected: // �������л�����
	CMy11��ʵ��12Doc();
	DECLARE_DYNCREATE(CMy11��ʵ��12Doc)

// ����
public:
	CMy11��ʵ��12Set m_My11��ʵ��12Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMy11��ʵ��12Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
