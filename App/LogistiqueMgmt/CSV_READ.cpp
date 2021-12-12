// CSV_READ.cpp : fichier d'implémentation
//

#include "pch.h"
#include "LogistiqueMgmt.h"
#include "CSV_READ.h"
#include "afxdialogex.h"


// boîte de dialogue de CSV_READ

IMPLEMENT_DYNAMIC(CSV_READ, CDialogEx)

CSV_READ::CSV_READ(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_READ, pParent)
{

}

CSV_READ::~CSV_READ()
{
}

void CSV_READ::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSV_READ, CDialogEx)
END_MESSAGE_MAP()


// gestionnaires de messages de CSV_READ
