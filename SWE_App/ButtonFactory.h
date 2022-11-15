#pragma once
#include "wx/wx.h"
#include "App.h"
#include "App_Window.h"

class ButtonFactory: public wxFrame
{
public: 
	
	 wxButton* createButton(wxWindow* Parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size);

private:
	 wxButton* createNum0Btn(wxWindow* Parent);
	 wxButton* createNum1Btn(wxWindow* Parent);
	 wxButton* createNum2Btn(wxWindow* Parent);
	 wxButton* createNum3Btn(wxWindow* Parent);
	 wxButton* createNum4Btn(wxWindow* Parent);
	 wxButton* createNum5Btn(wxWindow* Parent);
	 wxButton* createNum6Btn(wxWindow* Parent);
	 wxButton* createNum7Btn(wxWindow* Parent);
	 wxButton* createNum8Btn(wxWindow* Parent);
	 wxButton* createNum9Btn(wxWindow* Parent);
	 wxButton* createNegateBtn(wxWindow* Parent);
	 wxButton* createAddBtn(wxWindow* Parent);
	 wxButton* createSubtractBtn(wxWindow* Parent);
	 wxButton* createMultiplyBtn(wxWindow* Parent);
	 wxButton* createDivideBtn(wxWindow* Parent);
	 wxButton* createModuloBtn(wxWindow* Parent);
	 wxButton* createSinBtn(wxWindow* Parent);
	 wxButton* createCosBtn(wxWindow* Parent);
	 wxButton* createTanBtn(wxWindow* Parent);
	 wxButton* createNumBtn(wxWindow* Parent);
	 wxButton* createClearBtn(wxWindow* Parent);
	 wxButton* creaeteDelBtn(wxWindow* Parent);
	 wxButton* createEqualsBtn(wxWindow* Parent);
};




