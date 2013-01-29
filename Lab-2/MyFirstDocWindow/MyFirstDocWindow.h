
// MyFirstDocWindow.h : main header file for the MyFirstDocWindow application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyFirstDocWindowApp:
// See MyFirstDocWindow.cpp for the implementation of this class
//

class CMyFirstDocWindowApp : public CWinAppEx
{
public:
	CMyFirstDocWindowApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMyFirstDocWindowApp theApp;
