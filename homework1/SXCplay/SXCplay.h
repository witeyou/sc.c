
// SXCplay.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

/*
#include <MMSystem.h>  
#include <Digitalv.h>  

#pragma comment(lib, "Winmm.lib")  
*/



#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CSXCplayApp: 
// �йش����ʵ�֣������ SXCplay.cpp
//

class CSXCplayApp : public CWinApp
{
public:
	CSXCplayApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSXCplayApp theApp;

 
//--
/*
HWND m_hWnd;
DWORD DeviceId;
MCI_OPEN_PARMS mciopenparms;
 
void Load(HWND hWnd, CString strFilepath)
{
	m_hWnd = hWnd;
	mciSendCommand(DeviceId, MCI_CLOSE, 0, 0); 
	mciopenparms.lpstrElementName = strFilepath; 
	DWORD dwReturn;
	if (dwReturn = mciSendCommand(NULL, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_WAIT, (DWORD)(LPVOID)&mciopenparms))
	{
		char buffer[256];
		mciGetErrorString(dwReturn, buffer, 256);  
		MessageBox(hWnd, buffer, _T("�����棡"), MB_ICONHAND | MB_ICONERROR | MB_ICONSTOP); 
	}
	DeviceId = mciopenparms.wDeviceID;
}

void play()
{
	MCI_PLAY_PARMS mciplayparms;
	mciplayparms.dwCallback = (DWORD)m_hWnd;
	mciplayparms.dwFrom = 0;  
	mciSendCommand(DeviceId, MCI_PLAY, MCI_FROM | MCI_NOTIFY, (DWORD)(LPVOID)&mciplayparms);
}

void pause()
{
	mciSendCommand(DeviceId, MCI_PAUSE, 0, 0);
}

void resume()
{
	mciSendCommand(DeviceId, MCI_RESUME, 0, 0);
}

void stop()
{
	mciSendCommand(DeviceId, MCI_STOP, 0, 0);
	mciSendCommand(DeviceId, MCI_CLOSE, 0, 0);
}

*/