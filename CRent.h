#pragma once
#include "afxdialogex.h"


// CRent 대화 상자

class CRent : public CDialogEx
{
	DECLARE_DYNAMIC(CRent)

public:
	CRent(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CRent();
	bool m_Roomnum305 = true;
	bool m_Roomnum309 = true;
	bool m_Roomnum314 = true;
	bool m_Roomnum411 = true;
	int Result;
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_RENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString m_InputCallnum;
	CString m_InputName;
	CString m_Stnum;
	afx_msg void OnClickedButton07305();
	afx_msg void OnClickedButton07309();
	afx_msg void OnClickedButton07314();
	afx_msg void OnClickedButton07411();
	virtual BOOL OnInitDialog();
	afx_msg void OnClickedButtonRentinput();
};
