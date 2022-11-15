#pragma once
#include "wx/wx.h"
#include "App.h"
#include "App_Window.h"

static class ButtonFactory: public wxFrame
{
public: 

	virtual wxButton* createButton(wxWindow* Parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size);

private:
	static wxButton* createNum0Btn();
	static wxButton* createNum1Btn();
	static wxButton* createNum2Btn();
	static wxButton* createNum3Btn();
	static wxButton* createNum4Btn();
	static wxButton* createNum5Btn();
	static wxButton* createNum6Btn();
	static wxButton* createNum7Btn();
	static wxButton* createNum8Btn();
	static wxButton* createNum9Btn();
	static wxButton* createNegateBtn();
	static wxButton* createAddBtn();
	static wxButton* createSubtractBtn();
	static wxButton* createMultiplyBtn();
	static wxButton* createDivideBtn();
	static wxButton* createModuloBtn();
	static wxButton* createSinBtn();
	static wxButton* createCosBtn();
	static wxButton* createTanBtn();
	static wxButton* createNumBtn();
	static wxButton* createClearBtn();
	static wxButton* creaeteDelBtn();
	static wxButton* createEqualsBtn();
};




