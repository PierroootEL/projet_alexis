#pragma once


// boîte de dialogue de CSV_WRITE

class CSV_WRITE : public CDialogEx
{
	DECLARE_DYNAMIC(CSV_WRITE)

public:
	CSV_WRITE(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CSV_WRITE();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_WRITE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	CString text_prenom;
	CString text_nom;
	int btn_male;
	int btn_female;
};
