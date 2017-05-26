//---------------------------------------------------------------------------
//
// Name:        othelloApp.h
// Author:      Olivero
// Created:     25/05/2017 07:59:21 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __OTHELLOFRMApp_h__
#define __OTHELLOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class othelloFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
