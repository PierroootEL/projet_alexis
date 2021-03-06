// CSV_WRITE.cpp : fichier d'implémentation
//

#include "pch.h"
#include "LogistiqueMgmt.h"
#include "CSV_WRITE.h"
#include "afxdialogex.h"


// boîte de dialogue de CSV_WRITE

IMPLEMENT_DYNAMIC(CSV_WRITE, CDialogEx)

CSV_WRITE::CSV_WRITE(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_WRITE, pParent)
	, text_prenom(_T("Entrer le prénom"))
	, text_nom(_T("Entrer le nom"))
{

}

CSV_WRITE::~CSV_WRITE()
{
}

void CSV_WRITE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_PRENOM, text_prenom);
	DDX_Text(pDX, IDC_EDIT_NOM, text_nom);
}


BEGIN_MESSAGE_MAP(CSV_WRITE, CDialogEx)
END_MESSAGE_MAP()


// gestionnaires de messages de CSV_WRITE
