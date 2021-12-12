#pragma once


// boîte de dialogue de CSV_READ

class CSV_READ : public CDialogEx
{
	DECLARE_DYNAMIC(CSV_READ)

public:
	CSV_READ(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CSV_READ();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_READ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
};
