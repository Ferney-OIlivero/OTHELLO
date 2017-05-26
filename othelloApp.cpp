//---------------------------------------------------------------------------
//
// Name:        othelloApp.cpp
// Author:      Olivero
// Created:     25/05/2017 07:59:21 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#include "othelloApp.h"
#include "othelloFrm.h"

IMPLEMENT_APP(othelloFrmApp)

bool othelloFrmApp::OnInit()
{
    othelloFrm* frame = new othelloFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int othelloFrmApp::OnExit()
{
	return 0;
}
