
// LogistiqueMgmtView.h : interface de la classe CLogistiqueMgmtView
//

#pragma once


class CLogistiqueMgmtView : public CView
{
protected: // création à partir de la sérialisation uniquement
	CLogistiqueMgmtView() noexcept;
	DECLARE_DYNCREATE(CLogistiqueMgmtView)

// Attributs
public:
	CLogistiqueMgmtDoc* GetDocument() const;

// Opérations
public:

// Substitutions
public:
	virtual void OnDraw(CDC* pDC);  // substitué pour dessiner cette vue
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implémentation
public:
	virtual ~CLogistiqueMgmtView();
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
	afx_msg void OnAideHelp();
private:
	CString text_prenom;
	CString text_nom;
	int btn_male;
	int btn_female;
public:
	afx_msg void OnAideAfficher();
};

#ifndef _DEBUG  // version Debug dans LogistiqueMgmtView.cpp
inline CLogistiqueMgmtDoc* CLogistiqueMgmtView::GetDocument() const
   { return reinterpret_cast<CLogistiqueMgmtDoc*>(m_pDocument); }
#endif

