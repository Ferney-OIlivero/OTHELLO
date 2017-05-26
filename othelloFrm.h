///-----------------------------------------------------------------
///
/// @file      othelloFrm.h
/// @author    Olivero
/// Created:   25/05/2017 07:59:22 p.m.
/// @section   DESCRIPTION
///            othelloFrm class declaration
///
///------------------------------------------------------------------

#ifndef __OTHELLOFRM_H__
#define __OTHELLOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/button.h>
#include <wx/sizer.h>
////Header Include End

////Dialog Style Start
#undef othelloFrm_STYLE
#define othelloFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class othelloFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		othelloFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("othello"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = othelloFrm_STYLE);
		void WxButton1Click(wxCommandEvent& event);
		virtual ~othelloFrm();
		void othelloFrmActivate(wxActivateEvent& event);
		void WxButton1Click0(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *WxButton64;
		wxButton *WxButton63;
		wxButton *WxButton62;
		wxButton *WxButton61;
		wxButton *WxButton60;
		wxButton *WxButton59;
		wxButton *WxButton58;
		wxButton *WxButton57;
		wxButton *WxButton56;
		wxButton *WxButton55;
		wxButton *WxButton54;
		wxButton *WxButton53;
		wxButton *WxButton52;
		wxButton *WxButton51;
		wxButton *WxButton50;
		wxButton *WxButton49;
		wxButton *WxButton48;
		wxButton *WxButton47;
		wxButton *WxButton46;
		wxButton *WxButton45;
		wxButton *WxButton44;
		wxButton *WxButton43;
		wxButton *WxButton42;
		wxButton *WxButton41;
		wxButton *WxButton40;
		wxButton *WxButton39;
		wxButton *WxButton38;
		wxButton *WxButton37;
		wxButton *WxButton36;
		wxButton *WxButton35;
		wxButton *WxButton34;
		wxButton *WxButton33;
		wxButton *WxButton32;
		wxButton *WxButton31;
		wxButton *WxButton30;
		wxButton *WxButton29;
		wxButton *WxButton28;
		wxButton *WxButton27;
		wxButton *WxButton26;
		wxButton *WxButton25;
		wxButton *WxButton24;
		wxButton *WxButton23;
		wxButton *WxButton22;
		wxButton *WxButton21;
		wxButton *WxButton20;
		wxButton *WxButton19;
		wxButton *WxButton18;
		wxButton *WxButton17;
		wxButton *WxButton16;
		wxButton *WxButton15;
		wxButton *WxButton14;
		wxButton *WxButton13;
		wxButton *WxButton12;
		wxButton *WxButton11;
		wxButton *WxButton10;
		wxButton *WxButton9;
		wxButton *WxButton8;
		wxButton *WxButton7;
		wxButton *WxButton6;
		wxButton *WxButton5;
		wxButton *WxButton4;
		wxButton *WxButton3;
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxGridSizer *WxGridSizer1;
		////GUI Control Declaration End
		int color;
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBUTTON64 = 1067,
			ID_WXBUTTON63 = 1066,
			ID_WXBUTTON62 = 1065,
			ID_WXBUTTON61 = 1064,
			ID_WXBUTTON60 = 1063,
			ID_WXBUTTON59 = 1062,
			ID_WXBUTTON58 = 1061,
			ID_WXBUTTON57 = 1060,
			ID_WXBUTTON56 = 1059,
			ID_WXBUTTON55 = 1058,
			ID_WXBUTTON54 = 1057,
			ID_WXBUTTON53 = 1056,
			ID_WXBUTTON52 = 1055,
			ID_WXBUTTON51 = 1054,
			ID_WXBUTTON50 = 1053,
			ID_WXBUTTON49 = 1052,
			ID_WXBUTTON48 = 1051,
			ID_WXBUTTON47 = 1050,
			ID_WXBUTTON46 = 1049,
			ID_WXBUTTON45 = 1048,
			ID_WXBUTTON44 = 1047,
			ID_WXBUTTON43 = 1046,
			ID_WXBUTTON42 = 1045,
			ID_WXBUTTON41 = 1044,
			ID_WXBUTTON40 = 1043,
			ID_WXBUTTON39 = 1042,
			ID_WXBUTTON38 = 1041,
			ID_WXBUTTON37 = 1040,
			ID_WXBUTTON36 = 1039,
			ID_WXBUTTON35 = 1038,
			ID_WXBUTTON34 = 1037,
			ID_WXBUTTON33 = 1036,
			ID_WXBUTTON32 = 1035,
			ID_WXBUTTON31 = 1034,
			ID_WXBUTTON30 = 1033,
			ID_WXBUTTON29 = 1032,
			ID_WXBUTTON28 = 1031,
			ID_WXBUTTON27 = 1030,
			ID_WXBUTTON26 = 1029,
			ID_WXBUTTON25 = 1028,
			ID_WXBUTTON24 = 1027,
			ID_WXBUTTON23 = 1026,
			ID_WXBUTTON22 = 1025,
			ID_WXBUTTON21 = 1024,
			ID_WXBUTTON20 = 1023,
			ID_WXBUTTON19 = 1022,
			ID_WXBUTTON18 = 1021,
			ID_WXBUTTON17 = 1020,
			ID_WXBUTTON16 = 1019,
			ID_WXBUTTON15 = 1018,
			ID_WXBUTTON14 = 1017,
			ID_WXBUTTON13 = 1016,
			ID_WXBUTTON12 = 1015,
			ID_WXBUTTON11 = 1014,
			ID_WXBUTTON10 = 1013,
			ID_WXBUTTON9 = 1012,
			ID_WXBUTTON8 = 1011,
			ID_WXBUTTON7 = 1009,
			ID_WXBUTTON6 = 1008,
			ID_WXBUTTON5 = 1007,
			ID_WXBUTTON4 = 1006,
			ID_WXBUTTON3 = 1005,
			ID_WXBUTTON2 = 1004,
			ID_WXBUTTON1 = 1003,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
