// Dialog2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ���ʵ����.h"
#include "Dialog2.h"
#include "afxdialogex.h"


// Dialog2 �Ի���

IMPLEMENT_DYNAMIC(Dialog2, CDialogEx)

Dialog2::Dialog2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, a(_T("�������!"))
{

}

Dialog2::~Dialog2()
{
}

void Dialog2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
}


BEGIN_MESSAGE_MAP(Dialog2, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &Dialog2::OnEnChangeEdit1)
END_MESSAGE_MAP()


// Dialog2 ��Ϣ�������


void Dialog2::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
