#include "ButtonFactory.h"


ButtonFactory::ButtonFactory() {
	
}
wxButton* createButton(wxWindow* Parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size){
	wxButton* NewButton = new wxButton;
	NewButton->SetParent(Parent);
	NewButton->SetId(id);
	NewButton->SetLabel(title);
	NewButton->SetPosition(pos);
	NewButton->SetSize(size);
}
wxButton* createNum1Btn() {
	wxButton* num1Btn = new wxButton;
	num1Btn->SetParent(this);
	num1Btn->SetId(1);
	num1Btn->SetLabel("1");
	num1Btn->SetPosition(wxPoint(8,350));
	num1Btn->SetSize(wxSize(75,75));
}
wxButton* createNum2Btn() {
	wxButton* num2Btn = new wxButton;
	num2Btn->SetParent(this);
	num2Btn->SetId(2);
	num2Btn->SetLabel("2");
	num2Btn->SetPosition(wxPoint(83, 350));
	num2Btn->SetSize(wxSize(75, 75));
}
wxButton* createNum3Btn() {
	wxButton* num3Btn = new wxButton;
	num3Btn->SetParent(this);
	num3Btn->SetId(3);
	num3Btn->SetLabel("3");
	num3Btn->SetPosition(wxPoint(158, 350));
	num3Btn->SetSize(wxSize(75, 75));
}
wxButton* createNum4Btn() {
	wxButton* num4Btn = new wxButton;
	num4Btn->SetParent(this);
	num4Btn->SetId(4);
	num4Btn->SetLabel("4");
	num4Btn->SetPosition(wxPoint(8, 275));
	num4Btn->SetSize(wxSize(75, 75));
}
wxButton* createNum5Btn() {
	wxButton* num5Btn = new wxButton;
	num5Btn->SetParent(this);
	num5Btn->SetId(5);
	num5Btn->SetLabel("5");
	num5Btn->SetPosition(wxPoint(83, 275));
	num5Btn->SetSize(wxSize(75, 75));
}
wxButton* createNum6Btn() {
	wxButton* num6Btn = new wxButton;
	num6Btn->SetParent(this);
	num6Btn->SetId(6);
	num6Btn->SetLabel("6");
	num6Btn->SetPosition(wxPoint(158, 275));
	num6Btn->SetSize(wxSize(75, 75));
}
wxButton* createNum7Btn() {
	wxButton* num7Btn = new wxButton;
	num7Btn->SetParent(this);
	num7Btn->SetId(7);
	num7Btn->SetLabel("7");
	num7Btn->SetPosition(wxPoint(8, 200));
	num7Btn->SetSize(wxSize(75, 75));
}
wxButton* createNum8Btn() {
	wxButton* num8Btn = new wxButton;
	num8Btn->SetParent(this);
	num8Btn->SetId(8);
	num8Btn->SetLabel("8");
	num8Btn->SetPosition(wxPoint(83, 200));
	num8Btn->SetSize(wxSize(75, 75));
}
wxButton* createNum9Btn() {
	wxButton* num9Btn = new wxButton;
	num9Btn->SetParent(this);
	num9Btn->SetId(9);
	num9Btn->SetLabel("9");
	num9Btn->SetPosition(wxPoint(158, 200));
	num9Btn->SetSize(wxSize(75, 75));
}
wxButton* createNum0Btn() {
	wxButton* num0Btn = new wxButton;
	num0Btn->SetParent(this);
	num0Btn->SetId(10);
	num0Btn->SetLabel("0");
	num0Btn->SetPosition(wxPoint(8, 350));
	num0Btn->SetSize(wxSize(75, 75));
}
wxButton* createAddBtn() {
	wxButton* addBtn = new wxButton;
	addBtn->SetParent(this);
	addBtn->SetId(11);
	addBtn->SetLabel("+");
	addBtn->SetPosition(wxPoint(233, 425));
	addBtn->SetSize(wxSize(75, 75));
}
wxButton* createSubtractBtn() {
	wxButton* subtractBtn = new wxButton;
	subtractBtn->SetParent(this);
	subtractBtn->SetId(12);
	subtractBtn->SetLabel("-");
	subtractBtn->SetPosition(wxPoint(233, 350));
	subtractBtn->SetSize(wxSize(75, 75));
}
wxButton* createMultiplyBtn() {
	wxButton* multiplyBtn = new wxButton;
	multiplyBtn->SetParent(this);
	multiplyBtn->SetId(13);
	multiplyBtn->SetLabel("*");
	multiplyBtn->SetPosition(wxPoint(233, 275));
	multiplyBtn->SetSize(wxSize(75, 75));
}
wxButton* createDivideBtn() {
	wxButton* divideBtn = new wxButton;
	divideBtn->SetParent(this);
	divideBtn->SetId(14);
	divideBtn->SetLabel("/");
	divideBtn->SetPosition(wxPoint(233, 200));
	divideBtn->SetSize(wxSize(75, 75));
	return divideBtn;
}
wxButton* createModuloBtn() {
	wxButton* moduloBtn = new wxButton;
	moduloBtn->SetParent(this);
	moduloBtn->SetId(15);
	moduloBtn->SetLabel("%");
	moduloBtn->SetPosition(wxPoint(233, 130));
	moduloBtn->SetSize(wxSize(75, 75));
}
wxButton* createSinBtn() {
	wxButton* sinBtn = new wxButton;
	sinBtn->SetParent(this);
	sinBtn->SetId(16);
	sinBtn->SetLabel("sin");
	sinBtn->SetPosition(wxPoint(8, 165));
	sinBtn->SetSize(wxSize(75,35));
}
wxButton* createCosBtn() {
	wxButton* cosBtn = new wxButton;
	cosBtn->SetParent(this);
	cosBtn->SetId(17);
	cosBtn->SetLabel("cos");
	cosBtn->SetPosition(wxPoint(83, 165));
	cosBtn->SetSize(wxSize(75, 35));
}
wxButton* createTanBtn() {
	wxButton* tanBtn = new wxButton;
	tanBtn->SetParent(this);
	tanBtn->SetId(18);
	tanBtn->SetLabel("tan");
	tanBtn->SetPosition(wxPoint(158, 165));
	tanBtn->SetSize(wxSize(75, 35));
}
wxButton* createClearBtn() {
	wxButton* clearBtn = new wxButton;
	clearBtn->SetParent(this);
	clearBtn->SetId(19);
	clearBtn->SetLabel("clr");
	clearBtn->SetPosition(wxPoint(8, 130));
	clearBtn->SetSize(wxSize(75, 35));
}
wxButton* creaeteDelBtn() {
	wxButton* delBtn = new wxButton;
	delBtn->SetParent(this);
	delBtn->SetId(20);
	delBtn->SetLabel("del");
	delBtn->SetPosition(wxPoint(8, 425));
	delBtn->SetSize(wxSize(75, 75));
}
wxButton* createEqualsBtn() {
	wxButton* equalBtn = new wxButton;
	equalBtn->SetParent(this);
	equalBtn->SetId(21);
	equalBtn->SetLabel("=");
    equalBtn->SetPosition(wxPoint(158, 425));
	equalBtn->SetSize(wxSize(75, 75));
}
wxButton* createNegateBtn() {
	wxButton* negateBtn = new wxButton;
	negateBtn->SetParent(this);
	negateBtn->SetId(22);
	negateBtn->SetLabel("~");
	negateBtn->SetPosition(wxPoint(83, 130));
	negateBtn->SetSize(wxSize(75, 35));
}

