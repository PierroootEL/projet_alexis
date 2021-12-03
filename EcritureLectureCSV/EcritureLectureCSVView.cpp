
// EcritureLectureCSVView.cpp : implémentation de la classe CEcritureLectureCSVView
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS peuvent être définis dans les gestionnaires d'aperçu, de miniature
// et de recherche d'implémentation de projet ATL, et permettent le partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "EcritureLectureCSV.h"
#endif

#include "EcritureLectureCSVDoc.h"
#include "EcritureLectureCSVView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEcritureLectureCSVView

IMPLEMENT_DYNCREATE(CEcritureLectureCSVView, CView)

BEGIN_MESSAGE_MAP(CEcritureLectureCSVView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// construction/destruction de CEcritureLectureCSVView

CEcritureLectureCSVView::CEcritureLectureCSVView() noexcept
{
	// TODO: ajoutez ici du code de construction

}

CEcritureLectureCSVView::~CEcritureLectureCSVView()
{
}

BOOL CEcritureLectureCSVView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: changez ici la classe ou les styles Window en modifiant
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// dessin de CEcritureLectureCSVView

void CEcritureLectureCSVView::OnDraw(CDC* /*pDC*/)
{
	CEcritureLectureCSVDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ajoutez ici le code de dessin pour les données natives
}

void CEcritureLectureCSVView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CEcritureLectureCSVView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// diagnostics de CEcritureLectureCSVView

#ifdef _DEBUG
void CEcritureLectureCSVView::AssertValid() const
{
	CView::AssertValid();
}

void CEcritureLectureCSVView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEcritureLectureCSVDoc* CEcritureLectureCSVView::GetDocument() const // la version non Debug est inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEcritureLectureCSVDoc)));
	return (CEcritureLectureCSVDoc*)m_pDocument;
}
#endif //_DEBUG


// gestionnaires de messages de CEcritureLectureCSVView
