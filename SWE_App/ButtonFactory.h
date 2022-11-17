#pragma once
#include "wx/wx.h"

class ButtonFactory: public wxFrame
{

protected:
	 wxButton* createButton(wxWindow* Parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size);

public:
	static wxButton* createNum0Btn(wxWindow* Parent);
	static wxButton* createNum1Btn(wxWindow* Parent);
	static wxButton* createNum2Btn(wxWindow* Parent);
	static wxButton* createNum3Btn(wxWindow* Parent);
	static wxButton* createNum4Btn(wxWindow* Parent);
	static wxButton* createNum5Btn(wxWindow* Parent);
	static wxButton* createNum6Btn(wxWindow* Parent);
	static wxButton* createNum7Btn(wxWindow* Parent);
	static wxButton* createNum8Btn(wxWindow* Parent);
	static wxButton* createNum9Btn(wxWindow* Parent);
	static wxButton* createNegateBtn(wxWindow* Parent);
	static wxButton* createAddBtn(wxWindow* Parent);
	static wxButton* createSubtractBtn(wxWindow* Parent);
	static wxButton* createMultiplyBtn(wxWindow* Parent);
	static wxButton* createDivideBtn(wxWindow* Parent);
	static wxButton* createModuloBtn(wxWindow* Parent);
	static wxButton* createSinBtn(wxWindow* Parent);
	static wxButton* createCosBtn(wxWindow* Parent);
	static wxButton* createTanBtn(wxWindow* Parent);
	static wxButton* createNumBtn(wxWindow* Parent);
	static wxButton* createClearBtn(wxWindow* Parent);
	static wxButton* createDelBtn(wxWindow* Parent);
	static wxButton* createEqualsBtn(wxWindow* Parent);


};




