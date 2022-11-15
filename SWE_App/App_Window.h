#pragma once
#include "wx/wx.h"
#include "App.h"
#include "ButtonFactory.h"


//This class need to inherit from a wxWidgets object called "wxFrame"
class App_Window: public wxFrame 
{
	
	wxTextCtrl* textbox = nullptr;
	

public:
	//wxFrame requires a default constructor
	App_Window();
	~App_Window();
	void onBtnClick(wxCommandEvent& e);
	void onExit(wxCommandEvent& e);

	wxDECLARE_EVENT_TABLE();
};

