// CCheck.cpp: 구현 파일
//

#include "pch.h"
#include "MFC_HW_TEST1.h"
#include "afxdialogex.h"
#include "CCheck.h"


// CCheck 대화 상자

IMPLEMENT_DYNAMIC(CCheck, CDialogEx)

CCheck::CCheck(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_CHECK, pParent)
	, m_Cr07305(_T(""))
	, m_Cr07309(_T(""))
	, m_Cr07411(_T(""))
	, m_Cr07314(_T(""))
{

}

CCheck::~CCheck()
{
}

void CCheck::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_07305, m_Cr07305);
	DDX_Text(pDX, IDC_EDIT_07309, m_Cr07309);
	DDX_Text(pDX, IDC_EDIT_07411, m_Cr07411);
	DDX_Text(pDX, IDC_EDIT_07314, m_Cr07314);
}


BEGIN_MESSAGE_MAP(CCheck, CDialogEx)
END_MESSAGE_MAP()


// CCheck 메시지 처리기
