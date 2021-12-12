#pragma once


// boîte de dialogue de CsvWriteOptionsDlg

class CsvWriteOptionsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CsvWriteOptionsDlg)

public:
	CsvWriteOptionsDlg(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CsvWriteOptionsDlg();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_WRITE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	CString write_prenom;
	CString write_nom;
	int write_male;
	int write_female;
};
