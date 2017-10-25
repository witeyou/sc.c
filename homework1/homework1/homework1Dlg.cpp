
// homework1Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "homework1.h"
#include "homework1Dlg.h"
#include "afxdialogex.h"

#include"gongneng.h"
//
#include <MMSystem.h>  
#include <Digitalv.h>  

#pragma comment(lib, "Winmm.lib")  

//







#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Chomework1Dlg 对话框



Chomework1Dlg::Chomework1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_HOMEWORK1_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Chomework1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(Chomework1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON5, &Chomework1Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_EXIT, &Chomework1Dlg::OnBnClickedExit)
	ON_BN_CLICKED(IDC_play, &Chomework1Dlg::OnBnClickedplay)
	ON_BN_CLICKED(IDC_pause, &Chomework1Dlg::OnBnClickedpause)
	ON_BN_CLICKED(IDC_stop, &Chomework1Dlg::OnBnClickedstop)
	ON_BN_CLICKED(IDC_filechose, &Chomework1Dlg::OnBnClickedfilechose)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER1, &Chomework1Dlg::OnNMCustomdrawSlider1)
	ON_EN_CHANGE(IDC_volumn, &Chomework1Dlg::OnEnChangevolumn)
END_MESSAGE_MAP()


// Chomework1Dlg 消息处理程序

BOOL Chomework1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void Chomework1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Chomework1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Chomework1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Chomework1Dlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	CAboutDlg dlg;
	dlg.DoModal();


}


void Chomework1Dlg::OnBnClickedExit()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnCancel();
}


void Chomework1Dlg::OnBnClickedplay()
{
	// TODO: 在此添加控件通知处理程序代码
	play();
	SetDlgItemText(IDC_pause, _T("暂停"));
}


void Chomework1Dlg::OnBnClickedpause()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strTemp;
	GetDlgItemText(IDC_pause, strTemp); 
	if (strTemp.Compare(_T("暂停")) == 0)
	{
		pause();
		SetDlgItemText(IDC_pause, _T("恢复"));
	}

	if (strTemp.Compare(_T("恢复")) == 0)
	{
		resume();
		SetDlgItemText(IDC_pause, _T("暂停"));
	}
}


void Chomework1Dlg::OnBnClickedstop()
{
	// TODO: 在此添加控件通知处理程序代码
	stop();
	SetDlgItemText(IDC_pause, _T("暂停"));
	GetDlgItem(IDC_play)->EnableWindow(false); 
	GetDlgItem(IDC_pause)->EnableWindow(false);
}


void Chomework1Dlg::OnBnClickedfilechose()
{
	// TODO: 在此添加控件通知处理程序代码
	char szFileFilter[] = "mp3文件(*.mp3)|*.mp3|"
		"wma文件(*.wma)|*.wma|"
		"wav文件(*.wav)|*.wav|"
		"所有文件(*.*)|*.*|";
	CFileDialog dlg(true, NULL, NULL, OFN_HIDEREADONLY, szFileFilter);
	if (dlg.DoModal() == IDOK)
	{
		CString strFilepath = dlg.GetPathName();
		CString strFilename = dlg.GetFileName();
		SetDlgItemText(IDC_filename, strFilename);
		Load(this->m_hWnd, strFilepath);
	}
	GetDlgItem(IDC_play)->EnableWindow(true); 
	GetDlgItem(IDC_pause)->EnableWindow(true);
	GetDlgItem(IDC_stop)->EnableWindow(true);
}



void Chomework1Dlg::OnEnChangevolumn()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
