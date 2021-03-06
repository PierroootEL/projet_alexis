
// LogistiqueMgmtDoc.cpp : implémentation de la classe CLogistiqueMgmtDoc
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS peuvent être définis dans les gestionnaires d'aperçu, de miniature
// et de recherche d'implémentation de projet ATL, et permettent le partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "LogistiqueMgmt.h"
#endif

#include "LogistiqueMgmtDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CLogistiqueMgmtDoc

IMPLEMENT_DYNCREATE(CLogistiqueMgmtDoc, CDocument)

BEGIN_MESSAGE_MAP(CLogistiqueMgmtDoc, CDocument)
END_MESSAGE_MAP()


// construction/destruction de CLogistiqueMgmtDoc

CLogistiqueMgmtDoc::CLogistiqueMgmtDoc() noexcept
{
	// TODO: ajoutez ici le code d'une construction unique

}

CLogistiqueMgmtDoc::~CLogistiqueMgmtDoc()
{
}

BOOL CLogistiqueMgmtDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ajoutez ici le code de réinitialisation
	// (les documents SDI réutiliseront ce document)

	return TRUE;
}




// sérialisation de CLogistiqueMgmtDoc

void CLogistiqueMgmtDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ajoutez ici le code de stockage
	}
	else
	{
		// TODO: ajoutez ici le code de chargement
	}
}

#ifdef SHARED_HANDLERS

// Prise en charge des miniatures
void CLogistiqueMgmtDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modifier ce code pour dessiner les données du document
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support pour les gestionnaires de recherche
void CLogistiqueMgmtDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Définir le contenu de recherche à partir des données du document.
	// Les parties du contenu doivent être séparées par ";"

	// Par exemple :  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CLogistiqueMgmtDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// diagnostics de CLogistiqueMgmtDoc

#ifdef _DEBUG
void CLogistiqueMgmtDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CLogistiqueMgmtDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// commandes de CLogistiqueMgmtDoc
