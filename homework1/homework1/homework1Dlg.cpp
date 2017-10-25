
// homework1Dlg.cpp : ʵ���ļ�
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


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// Chomework1Dlg �Ի���



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


// Chomework1Dlg ��Ϣ�������

BOOL Chomework1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Chomework1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Chomework1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Chomework1Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CAboutDlg dlg;
	dlg.DoModal();


}


void Chomework1Dlg::OnBnClickedExit()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnCancel();
}


void Chomework1Dlg::OnBnClickedplay()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	play();
	SetDlgItemText(IDC_pause, _T("��ͣ"));
}


void Chomework1Dlg::OnBnClickedpause()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strTemp;
	GetDlgItemText(IDC_pause, strTemp); 
	if (strTemp.Compare(_T("��ͣ")) == 0)
	{
		pause();
		SetDlgItemText(IDC_pause, _T("�ָ�"));
	}

	if (strTemp.Compare(_T("�ָ�")) == 0)
	{
		resume();
		SetDlgItemText(IDC_pause, _T("��ͣ"));
	}
}


void Chomework1Dlg::OnBnClickedstop()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	stop();
	SetDlgItemText(IDC_pause, _T("��ͣ"));
	GetDlgItem(IDC_play)->EnableWindow(false); 
	GetDlgItem(IDC_pause)->EnableWindow(false);
}


void Chomework1Dlg::OnBnClickedfilechose()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	char szFileFilter[] = "mp3�ļ�(*.mp3)|*.mp3|"
		"wma�ļ�(*.wma)|*.wma|"
		"wav�ļ�(*.wav)|*.wav|"
		"�����ļ�(*.*)|*.*|";
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
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
