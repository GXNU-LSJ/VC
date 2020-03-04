
// 第一次实验View.cpp : C第一次实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第一次实验.h"
#endif

#include "第一次实验Doc.h"
#include "第一次实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第一次实验View

IMPLEMENT_DYNCREATE(C第一次实验View, CView)

BEGIN_MESSAGE_MAP(C第一次实验View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// C第一次实验View 构造/析构

C第一次实验View::C第一次实验View()
{
	// TODO: 在此处添加构造代码

}

C第一次实验View::~C第一次实验View()
{
}

BOOL C第一次实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第一次实验View 绘制

void C第一次实验View::OnDraw(CDC* pDC)
{
	C第一次实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString S1 = _T("我是***");
	int A1 = 0;
	CString a1;
	a1.Format(_T("%d"),A1);
	pDC->TextOutW(100, 100, S1);
	pDC->TextOutW(100, 200, a1);
	CString s2 = pDoc->S2;
	pDC->TextOutW(100, 300, s2);
	int a2 = pDoc->A2;
	CString _a;
	_a.Format(_T("%d"), a2);
	pDC->TextOutW(100, 400, _a);
	

}


// C第一次实验View 诊断

#ifdef _DEBUG
void C第一次实验View::AssertValid() const
{
	CView::AssertValid();
}

void C第一次实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第一次实验Doc* C第一次实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第一次实验Doc)));
	return (C第一次实验Doc*)m_pDocument;
}
#endif //_DEBUG


// C第一次实验View 消息处理程序


void C第一次实验View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第一次实验Doc* pDoc = GetDocument();
	//CClientDC dc(this);
	pDoc->count++;
	
	CView::OnLButtonDown(nFlags, point);
}


void C第一次实验View::OnRButtonDown(UINT nFlags, CPoint point)
{
	C第一次实验Doc* pDoc = GetDocument();
	CString s;
	CClientDC dc(this);
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(point.x, point.y, s);
	pDoc->count = 0;
	CView::OnRButtonDown(nFlags, point);
}
