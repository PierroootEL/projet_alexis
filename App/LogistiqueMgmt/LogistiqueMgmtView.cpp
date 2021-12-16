
// LogistiqueMgmtView.cpp : implémentation de la classe CLogistiqueMgmtView
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS peuvent être définis dans les gestionnaires d'aperçu, de miniature
// et de recherche d'implémentation de projet ATL, et permettent le partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "LogistiqueMgmt.h"
#endif

#include "LogistiqueMgmtDoc.h"
#include "LogistiqueMgmtView.h"
#include "CSV_WRITE.h"
#include "CSV_READ.h"
#include "string"
#include "iostream"
#include "fstream"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;

// CLogistiqueMgmtView

IMPLEMENT_DYNCREATE(CLogistiqueMgmtView, CView)

BEGIN_MESSAGE_MAP(CLogistiqueMgmtView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_AIDE_HELP, &CLogistiqueMgmtView::OnAideHelp)
	ON_COMMAND(ID_AIDE_AFFICHER, &CLogistiqueMgmtView::OnAideAfficher)
END_MESSAGE_MAP()

// construction/destruction de CLogistiqueMgmtView

CLogistiqueMgmtView::CLogistiqueMgmtView() noexcept
{
	// TODO: ajoutez ici du code de construction

}

CLogistiqueMgmtView::~CLogistiqueMgmtView()
{
}

BOOL CLogistiqueMgmtView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: changez ici la classe ou les styles Window en modifiant
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// dessin de CLogistiqueMgmtView

void CLogistiqueMgmtView::OnDraw(CDC* pDC)
{
	CLogistiqueMgmtDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ajoutez ici le code de dessin pour les données natives
	CRect clientRect;
	GetClientRect(clientRect);
	pDC->FillSolidRect(clientRect, RGB(255, 255, 0));
	pDC->TextOutW(200, 200, text_prenom);
	pDC->TextOutW(250, 250, text_nom);

		ofstream monFlux("C:/Users/Pierre/Documents/projet_alexis/WriteReadCSV/fichier_txt_test.txt");
		// std::cout << "Hello World!\n";


		if (monFlux) {
			// Tout est OK

			monFlux << text_prenom << endl;
			monFlux << text_nom << endl;

		}
		else {
			cout << "ERREUR : Impossible d'ouvrir le fichier" << endl;
		}
}

void CLogistiqueMgmtView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CLogistiqueMgmtView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// diagnostics de CLogistiqueMgmtView

#ifdef _DEBUG
void CLogistiqueMgmtView::AssertValid() const
{
	CView::AssertValid();
}

void CLogistiqueMgmtView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLogistiqueMgmtDoc* CLogistiqueMgmtView::GetDocument() const // la version non Debug est inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLogistiqueMgmtDoc)));
	return (CLogistiqueMgmtDoc*)m_pDocument;
}
#endif //_DEBUG


// gestionnaires de messages de CLogistiqueMgmtView


void CLogistiqueMgmtView::OnAideHelp()
{
	// TODO: ajoutez ici le code de votre gestionnaire de commande
	CSV_WRITE csvWrite;
	if (csvWrite.DoModal() == IDOK) {
		text_prenom = csvWrite.text_prenom;
		text_nom = csvWrite.text_nom;
	}
}


void CLogistiqueMgmtView::OnAideAfficher()
{
	// TODO: ajoutez ici le code de votre gestionnaire de commande
	CSV_READ csvRead;
	csvRead.DoModal();
}
