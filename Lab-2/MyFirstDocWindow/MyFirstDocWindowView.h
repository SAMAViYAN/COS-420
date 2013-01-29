
// MyFirstDocWindowView.h : interface of the CMyFirstDocWindowView class
//

#pragma once


class CMyFirstDocWindowView : public CEditView
{
protected: // create from serialization only
	CMyFirstDocWindowView();
	DECLARE_DYNCREATE(CMyFirstDocWindowView)

// Attributes
public:
	CMyFirstDocWindowDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMyFirstDocWindowView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyFirstDocWindowView.cpp
inline CMyFirstDocWindowDoc* CMyFirstDocWindowView::GetDocument() const
   { return reinterpret_cast<CMyFirstDocWindowDoc*>(m_pDocument); }
#endif

