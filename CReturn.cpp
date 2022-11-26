// CReturn.cpp: 구현 파일
//

#include "pch.h"
#include "MFC_HW_TEST1.h"
#include "afxdialogex.h"
#include "CReturn.h"


// CReturn 대화 상자

IMPLEMENT_DYNAMIC(CReturn, CDialogEx)

CReturn::CReturn(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_RETURN, pParent)
	, m_ReturnName(_T(""))
	, m_ReturnCallnum(_T(""))
	, m_ReturnStnum(_T(""))
{

}

CReturn::~CReturn()
{
}

void CReturn::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_RETRUN_NAME, m_ReturnName);
	DDX_Text(pDX, IDC_EDIT_RETURN_CALLNUM, m_ReturnCallnum);
	DDX_Text(pDX, IDC_EDIT_RETURN_STNUM, m_ReturnStnum);
}


BEGIN_MESSAGE_MAP(CReturn, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_07305, &CReturn::OnClickedButton07305)
	ON_BN_CLICKED(IDC_BUTTON_07309, &CReturn::OnClickedButton07309)
	ON_BN_CLICKED(IDC_BUTTON_07314, &CReturn::OnClickedButton07314)
	ON_BN_CLICKED(IDC_BUTTON_07411, &CReturn::OnClickedButton07411)
	ON_BN_CLICKED(IDC_BUTTON_INPUT, &CReturn::OnClickedButtonInput)
//	ON_BN_CLICKED(IDCANCEL, &CReturn::OnBnClickedCancel)
END_MESSAGE_MAP()


// CReturn 메시지 처리기


void CReturn::OnClickedButton07305()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Result = MessageBox(_T("305강의실 열쇠를 반납하시겠습니까?"), _T("반납 여부"), MB_YESNO | MB_ICONQUESTION);

	if (Result == IDYES) {
		if (m_R305 == true) {
			MessageBox(_T("열쇠가 대여되지 않은 강의실입니다."), _T("반납 불가능"), MB_OK | MB_ICONERROR);
			Result = IDNO;
		}
		else
			m_R305 = true;
	}
}


void CReturn::OnClickedButton07309()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Result = MessageBox(_T("309강의실 열쇠를 반납하시겠습니까?"), _T("반납 여부"), MB_YESNO | MB_ICONQUESTION);

	if (Result == IDYES) {
		if (m_R309 == true) {
			MessageBox(_T("열쇠가 대여되지 않은 강의실입니다."), _T("반납 불가능"), MB_OK | MB_ICONERROR);
			Result = IDNO;
		}
		else
			m_R309 = true;
	}
}


void CReturn::OnClickedButton07314()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Result = MessageBox(_T("314강의실 열쇠를 반납하시겠습니까?"), _T("반납 여부"), MB_YESNO | MB_ICONQUESTION);

	if (Result == IDYES) {
		if (m_R314 == true) {
			MessageBox(_T("열쇠가 대여되지 않은 강의실입니다."), _T("반납 불가능"), MB_OK | MB_ICONERROR);
			Result = IDNO;
		}
		else
			m_R314 = true;
	}
}


void CReturn::OnClickedButton07411()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Result = MessageBox(_T("411강의실 열쇠를 반납하시겠습니까?"), _T("반납 여부"), MB_YESNO | MB_ICONQUESTION);

	if (Result == IDYES) {
		if (m_R411 == true) {
			MessageBox(_T("열쇠가 대여되지 않은 강의실입니다."), _T("반납 불가능"), MB_OK | MB_ICONERROR);
			Result = IDNO;
		}
		else
			m_R411 = true;
	}
}


void CReturn::OnClickedButtonInput()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	
	if (m_ReturnName == m_RName && m_ReturnStnum == m_RStnum && m_ReturnCallnum == m_RCallnum) {
		if (Result == IDYES) {
			MessageBox(_T("반납이 완료되었습니다. 좋은 하루 되세요~!"), _T("반납 완료"), MB_OK | MB_ICONINFORMATION);
			OnOK();
		}
		else {
			MessageBox(_T("강의실을 선택하세요."), _T("강의실 미선택"), MB_OK | MB_ICONSTOP);
		}
	}
	else
		MessageBox(_T("대여자와 반납자의 인적 사항이 불일치합니다."), _T("오류"), MB_OK | MB_ICONSTOP);
}


BOOL CReturn::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	m_ReturnName = "";
	m_ReturnStnum = "";
	m_ReturnCallnum = "";
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}