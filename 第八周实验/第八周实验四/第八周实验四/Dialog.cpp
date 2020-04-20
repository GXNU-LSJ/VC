// Dialog.cpp : 实现文件
//

#include "stdafx.h"
#include "第八周实验四.h"
#include "Dialog.h"
#include "afxdialogex.h"
#include "Dialog2.h"

// Dialog 对话框

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


// Dialog 消息处理程序


void Dialog::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void Dialog::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	b = "+";
	UpdateData(false);
}


void Dialog::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	b = "-";
	UpdateData(false);
}


void Dialog::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	b = "×";
	UpdateData(false);
}


void Dialog::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	b = "÷";
	UpdateData(false);
}


void Dialog::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	b = "开平方";
	UpdateData(false);
}


void Dialog::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	b = "的倒数";
	UpdateData(false);
}


void Dialog::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码

	this->UpdateData(true);
	if (b == "+") { d = a + c; }
	if (b == "-") { d = a - c; }
	if (b == "×") { d = a * c; }
	if (b == "÷") {
		if (c == 0) { Dialog2 a; a.DoModal(); }
		else
		{
			d = a / c;
		}
	}
	if (b == "开平方") {
		if (a < 0) { Dialog2 a; a.DoModal(); }
		else
		{
			d = sqrt((double)a);
		}
	}
	if (b == "的倒数") {
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
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
