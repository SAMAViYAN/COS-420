
// MyFirstDocWindowView.cpp : implementation of the CMyFirstDocWindowView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MyFirstDocWindow.h"
#endif

#include "MyFirstDocWindowDoc.h"
#include "MyFirstDocWindowView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyFirstDocWindowView

IMPLEMENT_DYNCREATE(CMyFirstDocWindowView, CEditView)

BEGIN_MESSAGE_MAP(CMyFirstDocWindowView, CEditView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMyFirstDocWindowView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMyFirstDocWindowView construction/destruction

CMyFirstDocWindowView::CMyFirstDocWindowView()
{
	// TODO: add construction code here

}

CMyFirstDocWindowView::~CMyFirstDocWindowView()
{
}

BOOL CMyFirstDocWindowView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
}


// CMyFirstDocWindowView printing


void CMyFirstDocWindowView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMyFirstDocWindowView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CMyFirstDocWindowView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CMyFirstDocWindowView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}

void CMyFirstDocWindowView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMyFirstDocWindowView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMyFirstDocWindowView diagnostics

#ifdef _DEBUG
void CMyFirstDocWindowView::AssertValid() const
{
	CEditView::AssertValid();
}

void CMyFirstDocWindowView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CMyFirstDocWindowDoc* CMyFirstDocWindowView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyFirstDocWindowDoc)));
	return (CMyFirstDocWindowDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyFirstDocWindowView message handlers
