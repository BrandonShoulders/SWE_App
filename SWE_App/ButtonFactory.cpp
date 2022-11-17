#include "ButtonFactory.h"


wxButton* createButton(wxWindow* Parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size){
	wxButton* NewButton = new wxButton;
	NewButton->SetParent(Parent);
	NewButton->SetId(id);
	NewButton->SetLabel(title);
	NewButton->SetPosition(pos);
	NewButton->SetSize(size);
	return NewButton;
}
 wxButton* createNum1Btn(wxWindow* Parent) {
	wxButton* num1Btn = new wxButton;
	num1Btn->SetParent(Parent);
	num1Btn->SetId(1);
	num1Btn->SetLabel("1");
	num1Btn->SetPosition(wxPoint(8,350));
	num1Btn->SetSize(wxSize(75,75));
	return num1Btn;
}
 wxButton* createNum2Btn(wxWindow* Parent) {
	wxButton* num2Btn = new wxButton;
	num2Btn->SetParent(Parent);
	num2Btn->SetId(2);
	num2Btn->SetLabel("2");
	num2Btn->SetPosition(wxPoint(83, 350));
	num2Btn->SetSize(wxSize(75, 75));
	return num2Btn;
}
 wxButton* createNum3Btn(wxWindow* Parent) {
	wxButton* num3Btn = new wxButton;
	num3Btn->SetParent(Parent);
	num3Btn->SetId(3);
	num3Btn->SetLabel("3");
	num3Btn->SetPosition(wxPoint(158, 350));
	num3Btn->SetSize(wxSize(75, 75));
	return num3Btn;
}
 wxButton* createNum4Btn(wxWindow* Parent) {
	wxButton* num4Btn = new wxButton;
	num4Btn->SetParent(Parent);
	num4Btn->SetId(4);
	num4Btn->SetLabel("4");
	num4Btn->SetPosition(wxPoint(8, 275));
	num4Btn->SetSize(wxSize(75, 75));
	return num4Btn;
}
 wxButton* createNum5Btn(wxWindow* Parent) {
	wxButton* num5Btn = new wxButton;
	num5Btn->SetParent(Parent);
	num5Btn->SetId(5);
	num5Btn->SetLabel("5");
	num5Btn->SetPosition(wxPoint(83, 275));
	num5Btn->SetSize(wxSize(75, 75));
	return num5Btn;
}
 wxButton* createNum6Btn(wxWindow* Parent) {
	wxButton* num6Btn = new wxButton;
	num6Btn->SetParent(Parent);
	num6Btn->SetId(6);
	num6Btn->SetLabel("6");
	num6Btn->SetPosition(wxPoint(158, 275));
	num6Btn->SetSize(wxSize(75, 75));
	return num6Btn;
}
 wxButton* createNum7Btn(wxWindow* Parent) {
	wxButton* num7Btn = new wxButton;
	num7Btn->SetParent(Parent);
	num7Btn->SetId(7);
	num7Btn->SetLabel("7");
	num7Btn->SetPosition(wxPoint(8, 200));
	num7Btn->SetSize(wxSize(75, 75));
	return num7Btn;
}
 wxButton* createNum8Btn(wxWindow* Parent) {
	wxButton* num8Btn = new wxButton;
	num8Btn->SetParent(Parent);
	num8Btn->SetId(8);
	num8Btn->SetLabel("8");
	num8Btn->SetPosition(wxPoint(83, 200));
	num8Btn->SetSize(wxSize(75, 75));
	return num8Btn;
}
 wxButton* createNum9Btn(wxWindow* Parent) {
	wxButton* num9Btn = new wxButton;
	num9Btn->SetParent(Parent);
	num9Btn->SetId(9);
	num9Btn->SetLabel("9");
	num9Btn->SetPosition(wxPoint(158, 200));
	num9Btn->SetSize(wxSize(75, 75));
	return num9Btn;
}
wxButton* createNum0Btn(wxWindow* Parent) {
	wxButton* num0Btn = new wxButton;
	num0Btn->SetParent(Parent);
	num0Btn->SetId(10);
	num0Btn->SetLabel("0");
	num0Btn->SetPosition(wxPoint(8, 350));
	num0Btn->SetSize(wxSize(75, 75));
	return num0Btn;
}
wxButton* createAddBtn(wxWindow* Parent) {
	wxButton* addBtn = new wxButton;
	addBtn->SetParent(Parent);
	addBtn->SetId(11);
	addBtn->SetLabel("+");
	addBtn->SetPosition(wxPoint(233, 425));
	addBtn->SetSize(wxSize(75, 75));
	return addBtn;
}
wxButton* createSubtractBtn(wxWindow* Parent) {
	wxButton* subtractBtn = new wxButton;
	subtractBtn->SetParent(Parent);
	subtractBtn->SetId(12);
	subtractBtn->SetLabel("-");
	subtractBtn->SetPosition(wxPoint(233, 350));
	subtractBtn->SetSize(wxSize(75, 75));
	return subtractBtn;
}
wxButton* createMultiplyBtn(wxWindow* Parent) {
	wxButton* multiplyBtn = new wxButton;
	multiplyBtn->SetParent(Parent);
	multiplyBtn->SetId(13);
	multiplyBtn->SetLabel("*");
	multiplyBtn->SetPosition(wxPoint(233, 275));
	multiplyBtn->SetSize(wxSize(75, 75));
	return multiplyBtn;
}
wxButton* createDivideBtn(wxWindow* Parent) {
	wxButton* divideBtn = new wxButton;
	divideBtn->SetParent(Parent);
	divideBtn->SetId(14);
	divideBtn->SetLabel("/");
	divideBtn->SetPosition(wxPoint(233, 200));
	divideBtn->SetSize(wxSize(75, 75));
	return divideBtn;
}
wxButton* createModuloBtn(wxWindow* Parent) {
	wxButton* moduloBtn = new wxButton;
	moduloBtn->SetParent(Parent);
	moduloBtn->SetId(15);
	moduloBtn->SetLabel("%");
	moduloBtn->SetPosition(wxPoint(233, 130));
	moduloBtn->SetSize(wxSize(75, 75));
	return moduloBtn;
}
wxButton* createSinBtn(wxWindow* Parent) {
	wxButton* sinBtn = new wxButton;
	sinBtn->SetParent(Parent);
	sinBtn->SetId(16);
	sinBtn->SetLabel("sin");
	sinBtn->SetPosition(wxPoint(8, 165));
	sinBtn->SetSize(wxSize(75,35));
	return sinBtn;
}
wxButton* createCosBtn(wxWindow* Parent) {
	wxButton* cosBtn = new wxButton;
	cosBtn->SetParent(Parent);
	cosBtn->SetId(17);
	cosBtn->SetLabel("cos");
	cosBtn->SetPosition(wxPoint(83, 165));
	cosBtn->SetSize(wxSize(75, 35));
	return cosBtn;
}
wxButton* createTanBtn(wxWindow* Parent) {
	wxButton* tanBtn = new wxButton;
	tanBtn->SetParent(Parent);
	tanBtn->SetId(18);
	tanBtn->SetLabel("tan");
	tanBtn->SetPosition(wxPoint(158, 165));
	tanBtn->SetSize(wxSize(75, 35));
	return tanBtn;
}
wxButton* createClearBtn(wxWindow* Parent) {
	wxButton* clearBtn = new wxButton;
	clearBtn->SetParent(Parent);
	clearBtn->SetId(19);
	clearBtn->SetLabel("clr");
	clearBtn->SetPosition(wxPoint(8, 130));
	clearBtn->SetSize(wxSize(75, 35));
	return clearBtn;
}
wxButton* creaeteDelBtn(wxWindow* Parent) {
	wxButton* delBtn = new wxButton;
	delBtn->SetParent(Parent);
	delBtn->SetId(20);
	delBtn->SetLabel("del");
	delBtn->SetPosition(wxPoint(8, 425));
	delBtn->SetSize(wxSize(75, 75));
	return delBtn;
}
wxButton* createEqualsBtn(wxWindow* Parent) {
	wxButton* equalBtn = new wxButton;
	equalBtn->SetParent(Parent);
	equalBtn->SetId(21);
	equalBtn->SetLabel("=");
    equalBtn->SetPosition(wxPoint(158, 425));
	equalBtn->SetSize(wxSize(75, 75));
	return equalBtn;
}
wxButton* createNegateBtn(wxWindow* Parent) {
	wxButton* negateBtn = new wxButton;
	negateBtn->SetParent(Parent);
	negateBtn->SetId(22);
	negateBtn->SetLabel("~");
	negateBtn->SetPosition(wxPoint(83, 130));
	negateBtn->SetSize(wxSize(75, 35));
	return negateBtn;
}



