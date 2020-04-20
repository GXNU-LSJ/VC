// Dialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ���ʵ����.h"
#include "Dialog.h"
#include "afxdialogex.h"
#include "Dialog2.h"

// Dialog �Ի���

IMPLEMENT_DYNAMIC(Dialog, CDialogEx)

Dialog::Dialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(_T(""))
	, c(0)
	, d(0)
{

}

Dialog::~Dialog()
{
}

void Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDX_Text(pDX, IDC_EDIT4, d);
}


BEGIN_MESSAGE_MAP(Dialog, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &Dialog::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &Dialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Dialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Dialog::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Dialog::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON7, &Dialog::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON6, &Dialog::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON5, &Dialog::OnBnClickedButton5)
	ON_EN_CHANGE(IDC_EDIT4, &Dialog::OnEnChangeEdit4)
END_MESSAGE_MAP()


// Dialog ��Ϣ�������


void Dialog::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Dialog::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	b = "+";
	UpdateData(false);
}


void Dialog::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	b = "-";
	UpdateData(false);
}


void Dialog::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	b = "��";
	UpdateData(false);
}


void Dialog::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	b = "��";
	UpdateData(false);
}


void Dialog::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	b = "��ƽ��";
	UpdateData(false);
}


void Dialog::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	b = "�ĵ���";
	UpdateData(false);
}


void Dialog::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	this->UpdateData(true);
	if (b == "+") { d = a + c; }
	if (b == "-") { d = a - c; }
	if (b == "��") { d = a * c; }
	if (b == "��") {
		if (c == 0) { Dialog2 a; a.DoModal(); }
		else
		{
			d = a / c;
		}
	}
	if (b == "��ƽ��") {
		if (a < 0) { Dialog2 a; a.DoModal(); }
		else
		{
			d = sqrt((double)a);
		}
	}
	if (b == "�ĵ���") {
		if (a == 0) { Dialog2 a; a.DoModal(); }
		else
		{
			d = 1/a;
		}
	}
	
	UpdateData(false);
}


void Dialog::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
