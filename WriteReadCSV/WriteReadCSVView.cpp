
// WriteReadCSVView.cpp : implémentation de la classe CWriteReadCSVView
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS peuvent être définis dans les gestionnaires d'aperçu, de miniature
// et de recherche d'implémentation de projet ATL, et permettent le partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "WriteReadCSV.h"
#endif

#include "WriteReadCSVDoc.h"
#include "WriteReadCSVView.h"
#include "CsvWriteOptionsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWriteReadCSVView

IMPLEMENT_DYNCREATE(CWriteReadCSVView, CView)

BEGIN_MESSAGE_MAP(CWriteReadCSVView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_CSV_ECRIRE, &CWriteReadCSVView::OnCsvEcrire)
END_MESSAGE_MAP()

// construction/destruction de CWriteReadCSVView

CWriteReadCSVView::CWriteReadCSVView() noexcept
{
	// TODO: ajoutez ici du code de construction

}

CWriteReadCSVView::~CWriteReadCSVView()
{
}

BOOL CWriteReadCSVView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: changez ici la classe ou les styles Window en modifiant
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// dessin de CWriteReadCSVView

void CWriteReadCSVView::OnDraw(CDC* /*pDC*/)
{
	CWriteReadCSVDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ajoutez ici le code de dessin pour les données natives
}

void CWriteReadCSVView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CWriteReadCSVView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// diagnostics de CWriteReadCSVView

#ifdef _DEBUG
void CWriteReadCSVView::AssertValid() const
{
	CView::AssertValid();
}

void CWriteReadCSVView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWriteReadCSVDoc* CWriteReadCSVView::GetDocument() const // la version non Debug est inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWriteReadCSVDoc)));
	return (CWriteReadCSVDoc*)m_pDocument;
}
#endif //_DEBUG


// gestionnaires de messages de CWriteReadCSVView


void CWriteReadCSVView::OnCsvEcrire()
{
	CsvWriteOptionsDlg csvWrite;
	csvWrite.DoModal();
}
