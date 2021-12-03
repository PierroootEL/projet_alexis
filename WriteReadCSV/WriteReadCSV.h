
// WriteReadCSV.h : fichier d'en-tête principal de l'application WriteReadCSV
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'pch.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"       // symboles principaux


// CWriteReadCSVApp :
// Consultez WriteReadCSV.cpp pour l'implémentation de cette classe
//

class CWriteReadCSVApp : public CWinAppEx
{
public:
	CWriteReadCSVApp() noexcept;


// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWriteReadCSVApp theApp;
