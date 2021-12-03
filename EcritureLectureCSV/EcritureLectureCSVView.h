
// EcritureLectureCSVView.h : interface de la classe CEcritureLectureCSVView
//

#pragma once


class CEcritureLectureCSVView : public CView
{
protected: // création à partir de la sérialisation uniquement
	CEcritureLectureCSVView() noexcept;
	DECLARE_DYNCREATE(CEcritureLectureCSVView)

// Attributs
public:
	CEcritureLectureCSVDoc* GetDocument() const;

// Opérations
public:

// Substitutions
public:
	virtual void OnDraw(CDC* pDC);  // substitué pour dessiner cette vue
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implémentation
public:
	virtual ~CEcritureLectureCSVView();
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
};

#ifndef _DEBUG  // version Debug dans EcritureLectureCSVView.cpp
inline CEcritureLectureCSVDoc* CEcritureLectureCSVView::GetDocument() const
   { return reinterpret_cast<CEcritureLectureCSVDoc*>(m_pDocument); }
#endif

