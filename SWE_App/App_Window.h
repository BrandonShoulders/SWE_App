#pragma once
#include "wx/wx.h"


//This class need to inherit from a wxWidgets object called "wxFrame"
class App_Window: public wxFrame 
{

private:
	//create buttons for user UI
	wxButton* num1 = nullptr;
	wxButton* num2 = nullptr;
	wxButton* num3 = nullptr;
	wxButton* num4 = nullptr;
	wxButton* num5 = nullptr;
	wxButton* num6 = nullptr;
	wxButton* num7 = nullptr;
	wxButton* num8 = nullptr;
	wxButton* num9 = nullptr;
	wxButton* num0 = nullptr;
	wxButton* addButton = nullptr;
	wxButton* subtractButton = nullptr;
	wxButton* negativeSignButton = nullptr;
	wxButton* multiplyButton = nullptr;
	wxButton* divideButton = nullptr;
	wxButton* equalsButton = nullptr;
	wxButton* clearButton = nullptr;
	wxButton* deleteButton = nullptr;
	wxButton* modeButton = nullptr;
	wxButton* sinButton = nullptr;
	wxButton* cosButton = nullptr;
	wxButton* tanButton = nullptr;
	wxTextCtrl* displayBox = nullptr;




public:

	//wxFrame requires a default constructor
	App_Window();


};

