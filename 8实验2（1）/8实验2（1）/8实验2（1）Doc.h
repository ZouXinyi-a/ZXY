﻿
// 8实验2（1）Doc.h: CMy8实验21Doc 类的接口
//


#pragma once


class CMy8实验21Doc : public CDocument
{
protected: // 仅从序列化创建
	CMy8实验21Doc() noexcept;
	DECLARE_DYNCREATE(CMy8实验21Doc)

// 特性
public:

// 操作
public:
	CRect cr;
	bool set;
	int x1, x2, y1, y2;

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMy8实验21Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
