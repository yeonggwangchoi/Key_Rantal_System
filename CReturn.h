#pragma once
#include "afxdialogex.h"


// CReturn 대화 상자

class CReturn : public CDialogEx
{
	DECLARE_DYNAMIC(CReturn)

public:
	CReturn(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CReturn();

	CString m_RName;
	CString m_RStnum;
	CString m_RCallnum;
	bool m_R305;
	bool m_R309;
	bool m_R314;
	bool m_R411;
	int Result = 0;
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_RETURN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButton07305();
	afx_msg void OnClickedButton07309();
	afx_msg void OnClickedButton07314();
	afx_msg void OnClickedButton07411();
	CString m_ReturnName;
	CString m_ReturnCallnum;
	CString m_ReturnStnum;
	afx_msg void OnClickedButtonInput();
	virtual BOOL OnInitDialog();
//	afx_msg void OnBnClickedCancel();
};
