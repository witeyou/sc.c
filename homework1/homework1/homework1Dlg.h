
// homework1Dlg.h : ͷ�ļ�
//

#pragma once


// Chomework1Dlg �Ի���
class Chomework1Dlg : public CDialogEx
{
// ����
public:
	Chomework1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HOMEWORK1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedExit();
	afx_msg void OnBnClickedplay();
	afx_msg void OnBnClickedpause();
	afx_msg void OnBnClickedstop();
	afx_msg void OnBnClickedfilechose();
	afx_msg void OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangevolumn();
};
