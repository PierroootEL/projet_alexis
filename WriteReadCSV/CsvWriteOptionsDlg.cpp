// CsvWriteOptionsDlg.cpp : fichier d'implémentation
//

#include "pch.h"
#include "WriteReadCSV.h"
#include "CsvWriteOptionsDlg.h"
#include "afxdialogex.h"


// boîte de dialogue de CsvWriteOptionsDlg

IMPLEMENT_DYNAMIC(CsvWriteOptionsDlg, CDialogEx)

CsvWriteOptionsDlg::CsvWriteOptionsDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_WRITE, pParent)
	, write_prenom(_T("Entrer votre prenom"))
	, write_nom(_T("Entrer votre nom"))
{

}

CsvWriteOptionsDlg::~CsvWriteOptionsDlg()
{
}

void CsvWriteOptionsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_CSV_WRITE_PRENOM, write_prenom);
	DDX_Text(pDX, IDC_CSV_WRITE_NOM, write_nom);
}


BEGIN_MESSAGE_MAP(CsvWriteOptionsDlg, CDialogEx)
END_MESSAGE_MAP()


// gestionnaires de messages de CsvWriteOptionsDlg
