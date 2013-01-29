
// MyFirstWindow.h : main header file for the MyFirstWindow application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyFirstWindowApp:
// See MyFirstWindow.cpp for the implementation of this class
//

class CMyFirstWindowApp : public CWinApp
{
public:
	CMyFirstWindowApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMyFirstWindowApp theApp;
