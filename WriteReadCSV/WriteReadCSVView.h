
// WriteReadCSVView.h : interface de la classe CWriteReadCSVView
//

#pragma once


class CWriteReadCSVView : public CView
{
protected: // création à partir de la sérialisation uniquement
	CWriteReadCSVView() noexcept;
	DECLARE_DYNCREATE(CWriteReadCSVView)

// Attributs
public:
	CWriteReadCSVDoc* GetDocument() const;

// Opérations
public:

// Substitutions
public:
	virtual void OnDraw(CDC* pDC);  // substitué pour dessiner cette vue
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implémentation
public:
	virtual ~CWriteReadCSVView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Fonctions générées de la table des messages
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCsvEcrire();
};

#ifndef _DEBUG  // version Debug dans WriteReadCSVView.cpp
inline CWriteReadCSVDoc* CWriteReadCSVView::GetDocument() const
   { return reinterpret_cast<CWriteReadCSVDoc*>(m_pDocument); }
#endif

