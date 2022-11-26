#pragma once
#include "afxdialogex.h"


// CCheck 대화 상자

class CCheck : public CDialogEx
{
	DECLARE_DYNAMIC(CCheck)

public:
	CCheck(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CCheck();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CHECK };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString m_Cr07305;
	CString m_Cr07309;
	CString m_Cr07314;
	CString m_Cr07411;
};
