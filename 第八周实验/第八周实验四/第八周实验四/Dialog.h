#pragma once


// Dialog �Ի���

class Dialog : public CDialogEx
{
	DECLARE_DYNAMIC(Dialog)

public:
	Dialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	double a;
	CString b;
	double c;
	double d;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnEnChangeEdit4();
};
