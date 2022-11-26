// CRent.cpp: 구현 파일
//

#include "pch.h"
#include "MFC_HW_TEST1.h"
#include "afxdialogex.h"
#include "CRent.h"


// CRent 대화 상자

IMPLEMENT_DYNAMIC(CRent, CDialogEx)

CRent::CRent(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_RENT, pParent)
	, m_InputCallnum(_T(""))
	, m_InputName(_T(""))
	, m_Stnum(_T(""))
{

}

CRent::~CRent()
{
}

void CRent::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_INPUT_CALLNUM, m_InputCallnum);
	DDX_Text(pDX, IDC_EDIT_INPUT_NAME, m_InputName);
	DDX_Text(pDX, IDC_EDIT_INPUT_STNUM, m_Stnum);
}


BEGIN_MESSAGE_MAP(CRent, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_07305, &CRent::OnClickedButton07305)
	ON_BN_CLICKED(IDC_BUTTON_07309, &CRent::OnClickedButton07309)
	ON_BN_CLICKED(IDC_BUTTON_07314, &CRent::OnClickedButton07314)
	ON_BN_CLICKED(IDC_BUTTON_07411, &CRent::OnClickedButton07411)
	ON_BN_CLICKED(IDC_BUTTON_RENTINPUT, &CRent::OnClickedButtonRentinput)
END_MESSAGE_MAP()


// CRent 메시지 처리기


void CRent::OnClickedButton07305()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (m_Roomnum305 == false)
		MessageBox(_T("이미 열쇠가 선택 되었거나, 대여된 강의실입니다."), _T("대여 불가능"), MB_OK | MB_ICONERROR);
	else {
		Result = MessageBox(_T("305강의실을 선택하시겠습니까?"), _T("강의실 선택"), MB_YESNO | MB_ICONINFORMATION);
		m_Roomnum305 = false;
	}
}


void CRent::OnClickedButton07309()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (m_Roomnum309 == false)
		MessageBox(_T("이미 열쇠가 선택 되었거나, 대여된 강의실입니다."), _T("대여 불가능"), MB_OK | MB_ICONERROR);
	else {
		 Result = MessageBox(_T("309강의실을 선택하시겠습니까?"), _T("강의실 선택"), MB_YESNO | MB_ICONINFORMATION);
		 m_Roomnum309 = false;
	}
}


void CRent::OnClickedButton07314()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (m_Roomnum314 == false)
		MessageBox(_T("이미 열쇠가 선택 되었거나, 대여된 강의실입니다."), _T("대여 불가능"), MB_OK | MB_ICONERROR);
	else {
		Result = MessageBox(_T("314강의실을 선택하시겠습니까?"), _T("강의실 선택"), MB_YESNO | MB_ICONINFORMATION);
		m_Roomnum314 = false;
	}
}


void CRent::OnClickedButton07411()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (m_Roomnum411 == false)
		MessageBox(_T("이미 열쇠가 선택 되었거나, 대여된 강의실입니다."), _T("대여 불가능"), MB_OK | MB_ICONERROR);
	else {
		Result = MessageBox(_T("411강의실을 선택하시겠습니까?"), _T("강의실 선택"), MB_YESNO | MB_ICONINFORMATION);
		m_Roomnum411 = false;
	}
}


BOOL CRent::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	m_InputName = "";
	m_InputCallnum = "";
	m_Stnum = "";
	Result = IDNO;
	UpdateData(FALSE);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void CRent::OnClickedButtonRentinput()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	if (m_InputName != "" && m_InputCallnum != "" && m_Stnum != "") {
		if (Result == IDYES) {
			MessageBox(_T("열쇠를 대여합니다."), _T("열쇠 대여"), MB_OK | MB_ICONINFORMATION);
			OnOK();
		}
		else 
			MessageBox(_T("강의실을 선택하세요."), _T("강의실 미선택"), MB_OK | MB_ICONSTOP);
	}
	else
		MessageBox(_T("인적 사항을 기록하세요. 인적 사항 미기입시 열쇠 대여가 불가합니다."), _T("인적 사항 미기입"), MB_OK | MB_ICONSTOP);
}
