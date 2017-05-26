///-----------------------------------------------------------------
///
/// @file      othelloFrm.cpp
/// @author    Olivero
/// Created:   25/05/2017 07:59:22 p.m.
/// @section   DESCRIPTION
///            othelloFrm class implementation
///
///------------------------------------------------------------------

#include "othelloFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// othelloFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(othelloFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(othelloFrm::OnClose)
	EVT_ACTIVATE(othelloFrm::othelloFrmActivate)
	EVT_BUTTON(ID_WXBUTTON64,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON63,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON62,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON61,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON60,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON59,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON58,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON57,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON56,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON55,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON54,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON53,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON52,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON51,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON50,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON49,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON48,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON47,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON46,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON45,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON44,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON43,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON42,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON41,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON40,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON39,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON38,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON35,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON34,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON33,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON32,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON31,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON30,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON27,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON26,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON25,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON24,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON23,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON22,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON21,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON20,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON19,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON18,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON17,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON16,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON15,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON14,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON13,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON12,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON11,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON10,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON9,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON8,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON7,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON6,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON5,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON4,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON3,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON2,othelloFrm::WxButton1Click0)
	EVT_BUTTON(ID_WXBUTTON1,othelloFrm::WxButton1Click0)
END_EVENT_TABLE()
////Event Table End

othelloFrm::othelloFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

othelloFrm::~othelloFrm()
{
}

void othelloFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxGridSizer1 = new wxGridSizer(0, 8, 0, 0);
	this->SetSizer(WxGridSizer1);
	this->SetAutoLayout(true);

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _(""), wxPoint(5, 5), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->Enable(false);
	WxButton1->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton1, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _(""), wxPoint(56, 5), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->Enable(false);
	WxButton2->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton2, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _(""), wxPoint(107, 5), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton3"));
	WxButton3->Enable(false);
	WxButton3->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton3, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _(""), wxPoint(158, 5), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton4"));
	WxButton4->Enable(false);
	WxButton4->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton4, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton5 = new wxButton(this, ID_WXBUTTON5, _(""), wxPoint(209, 5), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton5"));
	WxButton5->Enable(false);
	WxButton5->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton5, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton6 = new wxButton(this, ID_WXBUTTON6, _(""), wxPoint(260, 5), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton6"));
	WxButton6->Enable(false);
	WxButton6->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton6, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton7 = new wxButton(this, ID_WXBUTTON7, _(""), wxPoint(311, 5), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton7"));
	WxButton7->Enable(false);
	WxButton7->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton7, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton8 = new wxButton(this, ID_WXBUTTON8, _(""), wxPoint(362, 5), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton8"));
	WxButton8->Enable(false);
	WxButton8->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton8, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton9 = new wxButton(this, ID_WXBUTTON9, _(""), wxPoint(5, 51), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton9"));
	WxButton9->Enable(false);
	WxButton9->SetForegroundColour(wxColour(255,255,255));
	WxButton9->SetBackgroundColour(wxColour(_("GREY")));
	WxButton9->SetFont(wxFont(36, wxSWISS, wxNORMAL, wxBOLD, false, _("Wingdings")));
	WxGridSizer1->Add(WxButton9, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton10 = new wxButton(this, ID_WXBUTTON10, _(""), wxPoint(56, 51), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton10"));
	WxButton10->Enable(false);
	WxButton10->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton10, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton11 = new wxButton(this, ID_WXBUTTON11, _(""), wxPoint(107, 51), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton11"));
	WxButton11->Enable(false);
	WxButton11->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton11, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton12 = new wxButton(this, ID_WXBUTTON12, _(""), wxPoint(158, 51), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton12"));
	WxButton12->Enable(false);
	WxButton12->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton12, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton13 = new wxButton(this, ID_WXBUTTON13, _(""), wxPoint(209, 51), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton13"));
	WxButton13->Enable(false);
	WxButton13->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton13, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton14 = new wxButton(this, ID_WXBUTTON14, _(""), wxPoint(260, 51), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton14"));
	WxButton14->Enable(false);
	WxButton14->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton14, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton15 = new wxButton(this, ID_WXBUTTON15, _(""), wxPoint(311, 51), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton15"));
	WxButton15->Enable(false);
	WxButton15->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton15, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton16 = new wxButton(this, ID_WXBUTTON16, _(""), wxPoint(362, 51), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton16"));
	WxButton16->Enable(false);
	WxButton16->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton16, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton17 = new wxButton(this, ID_WXBUTTON17, _(""), wxPoint(5, 97), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton17"));
	WxButton17->Enable(false);
	WxButton17->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton17, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton18 = new wxButton(this, ID_WXBUTTON18, _(""), wxPoint(56, 97), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton18"));
	WxButton18->Enable(false);
	WxButton18->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton18, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton19 = new wxButton(this, ID_WXBUTTON19, _(""), wxPoint(107, 97), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton19"));
	WxButton19->Enable(false);
	WxButton19->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton19, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton20 = new wxButton(this, ID_WXBUTTON20, _(""), wxPoint(158, 97), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton20"));
	WxButton20->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton20, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton21 = new wxButton(this, ID_WXBUTTON21, _(""), wxPoint(209, 97), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton21"));
	WxButton21->Enable(false);
	WxButton21->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton21, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton22 = new wxButton(this, ID_WXBUTTON22, _(""), wxPoint(260, 97), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton22"));
	WxButton22->Enable(false);
	WxButton22->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton22, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton23 = new wxButton(this, ID_WXBUTTON23, _(""), wxPoint(311, 97), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton23"));
	WxButton23->Enable(false);
	WxButton23->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton23, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton24 = new wxButton(this, ID_WXBUTTON24, _(""), wxPoint(362, 97), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton24"));
	WxButton24->Enable(false);
	WxButton24->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton24, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton25 = new wxButton(this, ID_WXBUTTON25, _(""), wxPoint(5, 143), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton25"));
	WxButton25->Enable(false);
	WxButton25->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton25, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton26 = new wxButton(this, ID_WXBUTTON26, _(""), wxPoint(56, 143), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton26"));
	WxButton26->Enable(false);
	WxButton26->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton26, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton27 = new wxButton(this, ID_WXBUTTON27, _(""), wxPoint(107, 143), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton27"));
	WxButton27->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton27, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton28 = new wxButton(this, ID_WXBUTTON28, _(""), wxPoint(158, 143), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton28"));
	WxButton28->Enable(false);
	WxButton28->SetBackgroundColour(wxColour(_("SKY BLUE")));
	WxGridSizer1->Add(WxButton28, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton29 = new wxButton(this, ID_WXBUTTON29, _(""), wxPoint(209, 143), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton29"));
	WxButton29->Enable(false);
	WxButton29->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton29, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton30 = new wxButton(this, ID_WXBUTTON30, _(""), wxPoint(260, 143), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton30"));
	WxButton30->Enable(false);
	WxButton30->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton30, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton31 = new wxButton(this, ID_WXBUTTON31, _(""), wxPoint(311, 143), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton31"));
	WxButton31->Enable(false);
	WxButton31->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton31, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton32 = new wxButton(this, ID_WXBUTTON32, _(""), wxPoint(362, 143), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton32"));
	WxButton32->Enable(false);
	WxButton32->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton32, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton33 = new wxButton(this, ID_WXBUTTON33, _(""), wxPoint(5, 189), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton33"));
	WxButton33->Enable(false);
	WxButton33->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton33, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton34 = new wxButton(this, ID_WXBUTTON34, _(""), wxPoint(56, 189), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton34"));
	WxButton34->Enable(false);
	WxButton34->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton34, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton35 = new wxButton(this, ID_WXBUTTON35, _(""), wxPoint(107, 189), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton35"));
	WxButton35->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton35, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton36 = new wxButton(this, ID_WXBUTTON36, _(""), wxPoint(158, 189), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton36"));
	WxButton36->Enable(false);
	WxButton36->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton36, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton37 = new wxButton(this, ID_WXBUTTON37, _(""), wxPoint(209, 189), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton37"));
	WxButton37->Enable(false);
	WxButton37->SetBackgroundColour(wxColour(_("SKY BLUE")));
	WxGridSizer1->Add(WxButton37, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton38 = new wxButton(this, ID_WXBUTTON38, _(""), wxPoint(260, 189), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton38"));
	WxButton38->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton38, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton39 = new wxButton(this, ID_WXBUTTON39, _(""), wxPoint(311, 189), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton39"));
	WxButton39->Enable(false);
	WxButton39->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton39, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton40 = new wxButton(this, ID_WXBUTTON40, _(""), wxPoint(362, 189), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton40"));
	WxButton40->Enable(false);
	WxButton40->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton40, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton41 = new wxButton(this, ID_WXBUTTON41, _(""), wxPoint(5, 235), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton41"));
	WxButton41->Enable(false);
	WxButton41->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton41, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton42 = new wxButton(this, ID_WXBUTTON42, _(""), wxPoint(56, 235), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton42"));
	WxButton42->Enable(false);
	WxButton42->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton42, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton43 = new wxButton(this, ID_WXBUTTON43, _(""), wxPoint(107, 235), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton43"));
	WxButton43->Enable(false);
	WxButton43->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton43, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton44 = new wxButton(this, ID_WXBUTTON44, _(""), wxPoint(158, 235), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton44"));
	WxButton44->Enable(false);
	WxButton44->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton44, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton45 = new wxButton(this, ID_WXBUTTON45, _(""), wxPoint(209, 235), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton45"));
	WxButton45->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton45, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton46 = new wxButton(this, ID_WXBUTTON46, _(""), wxPoint(260, 235), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton46"));
	WxButton46->Enable(false);
	WxButton46->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton46, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton47 = new wxButton(this, ID_WXBUTTON47, _(""), wxPoint(311, 235), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton47"));
	WxButton47->Enable(false);
	WxButton47->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton47, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton48 = new wxButton(this, ID_WXBUTTON48, _(""), wxPoint(362, 235), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton48"));
	WxButton48->Enable(false);
	WxButton48->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton48, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton49 = new wxButton(this, ID_WXBUTTON49, _(""), wxPoint(5, 281), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton49"));
	WxButton49->Enable(false);
	WxButton49->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton49, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton50 = new wxButton(this, ID_WXBUTTON50, _(""), wxPoint(56, 281), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton50"));
	WxButton50->Enable(false);
	WxButton50->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton50, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton51 = new wxButton(this, ID_WXBUTTON51, _(""), wxPoint(107, 281), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton51"));
	WxButton51->Enable(false);
	WxButton51->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton51, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton52 = new wxButton(this, ID_WXBUTTON52, _(""), wxPoint(158, 281), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton52"));
	WxButton52->Enable(false);
	WxButton52->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton52, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton53 = new wxButton(this, ID_WXBUTTON53, _(""), wxPoint(209, 281), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton53"));
	WxButton53->Enable(false);
	WxButton53->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton53, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton54 = new wxButton(this, ID_WXBUTTON54, _(""), wxPoint(260, 281), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton54"));
	WxButton54->Enable(false);
	WxButton54->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton54, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton55 = new wxButton(this, ID_WXBUTTON55, _(""), wxPoint(311, 281), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton55"));
	WxButton55->Enable(false);
	WxButton55->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton55, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton56 = new wxButton(this, ID_WXBUTTON56, _(""), wxPoint(362, 281), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton56"));
	WxButton56->Enable(false);
	WxButton56->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton56, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton57 = new wxButton(this, ID_WXBUTTON57, _(""), wxPoint(5, 327), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton57"));
	WxButton57->Enable(false);
	WxButton57->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton57, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton58 = new wxButton(this, ID_WXBUTTON58, _(""), wxPoint(56, 327), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton58"));
	WxButton58->Enable(false);
	WxButton58->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton58, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton59 = new wxButton(this, ID_WXBUTTON59, _(""), wxPoint(107, 327), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton59"));
	WxButton59->Enable(false);
	WxButton59->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton59, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton60 = new wxButton(this, ID_WXBUTTON60, _(""), wxPoint(158, 327), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton60"));
	WxButton60->Enable(false);
	WxButton60->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton60, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton61 = new wxButton(this, ID_WXBUTTON61, _(""), wxPoint(209, 327), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton61"));
	WxButton61->Enable(false);
	WxButton61->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton61, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton62 = new wxButton(this, ID_WXBUTTON62, _(""), wxPoint(260, 327), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton62"));
	WxButton62->Enable(false);
	WxButton62->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton62, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton63 = new wxButton(this, ID_WXBUTTON63, _(""), wxPoint(311, 327), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton63"));
	WxButton63->Enable(false);
	WxButton63->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton63, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton64 = new wxButton(this, ID_WXBUTTON64, _(""), wxPoint(362, 327), wxSize(41, 36), 0, wxDefaultValidator, _("WxButton64"));
	WxButton64->Enable(false);
	WxButton64->SetBackgroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton64, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("othello"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
}

void othelloFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * othelloFrmActivate
 */
void othelloFrm::othelloFrmActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * WxButton1Click
 */


/*
 * WxButton1Click0
 */
int t1a=0,t2a=0,t3a=0,t4a=0,t5a=0,t6a=0,t7a=0,t8a=0,t9a=0,t1b=0,t2b=0,t3b=0,t4b=0,t5b=0,t6b=0,t7b=0,t8b=0,t9b=0; 


void othelloFrm::WxButton1Click0(wxCommandEvent& event)
{
    wxButton*boton= (wxButton*)event.GetEventObject();
    if (color==0){
        boton->SetBackgroundColour(wxColour(_("BLACK")));
        color=1;
        if((WxButton20->GetBackgroundColour()=="BLACK") && (t1a==0)){
            WxButton28->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton19->Enable(true);///
            WxButton35->Enable(true);
            WxButton21->Enable(true);
            WxButton27->Enable(false);
            WxButton38->Enable(false);
            WxButton45->Enable(false);
            t1a=1;
        }else if((WxButton27->GetBackgroundColour()=="BLACK") && (t1a==0)){
            WxButton28->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton19->Enable(true);////
            WxButton35->Enable(true);
            WxButton21->Enable(true);
            WxButton20->Enable(false);
            WxButton38->Enable(false);
            WxButton45->Enable(false);
            t1a=1;
        }else if((WxButton38->GetBackgroundColour()=="BLACK") && (t1a==0)){
            WxButton37->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton30->Enable(true);
            WxButton44->Enable(true);
            WxButton46->Enable(true);
            WxButton20->Enable(false);
            WxButton27->Enable(false);
            WxButton45->Enable(false);
            t1a=1;           
        }else if((WxButton45->GetBackgroundColour()=="BLACK") && (t1a==0)){
            WxButton37->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton30->Enable(true);
            WxButton44->Enable(true);
            WxButton46->Enable(true);
            WxButton20->Enable(false);
            WxButton27->Enable(false);
            WxButton38->Enable(false);
            t1a=1;
            
            
            //TURNO 2
        }else if((WxButton27->GetBackgroundColour()=="BLACK") && (t2a==0)){
            WxButton28->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton35->Enable(true);
            WxButton21->Enable(true);
            WxButton38->Enable(false);
            WxButton45->Enable(false);
            t2a=1;
        }else if((WxButton18->GetBackgroundColour()=="BLACK") && (t3a==0)){
            WxButton19->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton21->Enable(true);
            WxButton26->Enable(false);
            WxButton42->Enable(false);
            WxButton45->Enable(false);
            WxButton44->Enable(false);
            t3a=1;
        }else if((WxButton22->GetBackgroundColour()=="BLACK") && (t4a==0)){
            WxButton21->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton11->Enable(true); ///
            WxButton12->Enable(true);
            WxButton13->Enable(true);
            WxButton43->Enable(false);
            WxButton44->Enable(false);
            t4a=1;
        }else if((WxButton45->GetBackgroundColour()=="BLACK") && (t5a==0)){
            WxButton29->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton37->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton27->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton36->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton17->Enable(true);
            WxButton30->Enable(true);///
            WxButton38->Enable(true);
            WxButton25->Enable(true);
            WxButton26->Enable(true);
            WxButton14->Enable(true);
            WxButton23->Enable(true);
            WxButton34->Enable(true);
            WxButton44->Enable(true);
            WxButton46->Enable(true);
            t5a=1;
        }else if((WxButton38->GetBackgroundColour()=="BLACK") && (t6a==0)){
            WxButton30->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton39->Enable(true);///
            t6a=1;
        }else if((WxButton30->GetBackgroundColour()=="BLACK") && (t7a==0)){
            WxButton29->SetBackgroundColour(wxColour(_("BLACK")));
            WxButton23->Enable(true);
            WxButton34->Enable(true);
            t7a=1;
        }
 //TURNO DE LOS AZULES       
    }else{
        boton->SetBackgroundColour(wxColour(_("SKY BLUE")));
        color=0;
        if((WxButton19->GetBackgroundColour()=="SKY BLUE")&&(WxButton20->GetBackgroundColour()=="BLACK") && (t1b==0)){
            WxButton28->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton21->Enable(false);
            WxButton35->Enable(false);
            WxButton27->Enable(true);
            WxButton38->Enable(true);
            WxButton45->Enable(true);
            t1b=1;
        }else if((WxButton19->GetBackgroundColour()=="SKY BLUE")&&(WxButton27->GetBackgroundColour()=="BLACK") && (t1b==0)){
            WxButton28->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton20->Enable(true);
            WxButton21->Enable(false);
            WxButton35->Enable(false);
            WxButton38->Enable(true);
            WxButton45->Enable(true);
            t1b=1;
        }else if((WxButton35->GetBackgroundColour()=="SKY BLUE") && (t2b==0)){
            WxButton27->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton36->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton18->Enable(true);////////
            WxButton26->Enable(true);
            WxButton42->Enable(true);
            WxButton44->Enable(true);
            WxButton45->Enable(true);
            WxButton20->Enable(false);
            WxButton21->Enable(false);
            WxButton38->Enable(false);
            t2b=1;
            
            //turno 3 azul
        }else if(WxButton21->GetBackgroundColour()=="SKY BLUE" && (t3b==0)){
            WxButton28->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton29->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton22->Enable(true); ///
            WxButton43->Enable(true);
            WxButton44->Enable(true);
            t3b=1;       
        }else if(WxButton11->GetBackgroundColour()=="SKY BLUE" && (t4b==0)){
            WxButton19->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton20->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton45->Enable(true);
            WxButton12->Enable(false);
            WxButton13->Enable(false);
            t4b=1;
        }else if(WxButton30->GetBackgroundColour()=="SKY BLUE" && (t5b==0)){
            WxButton29->SetBackgroundColour(wxColour(_("SKY BLUE")));
            t5b=1;
        }else if(WxButton17->GetBackgroundColour()=="SKY BLUE" && (t6b==0)){
            WxButton18->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton30->Enable(true);
            WxButton23->Enable(false);
            WxButton25->Enable(false);
            t6b=1;
        }else if(WxButton23->GetBackgroundColour()=="SKY BLUE" && (t7b==0)){
            WxButton22->SetBackgroundColour(wxColour(_("SKY BLUE")));
            WxButton2->Enable(true);
            WxButton5->Enable(true);
            WxButton43->Enable(true);
            WxButton45->Enable(true);
            WxButton24->Enable(true);
            WxButton34->Enable(false);
            t7b=1;
        }
        
        
        
    }

      
    
    
    
    
    
    boton->Enable(false);
	// insert your code here
}
