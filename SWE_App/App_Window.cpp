#include "App_Window.h"
#include "ButtonFactory.h"



wxBEGIN_EVENT_TABLE(App_Window, wxFrame)
EVT_MENU(wxID_EXIT, App_Window::onExit)
EVT_BUTTON(1, App_Window::onBtnClick)
EVT_BUTTON(2, App_Window::onBtnClick)
EVT_BUTTON(3, App_Window::onBtnClick)
EVT_BUTTON(4, App_Window::onBtnClick)
EVT_BUTTON(5, App_Window::onBtnClick)
EVT_BUTTON(6, App_Window::onBtnClick)
EVT_BUTTON(7, App_Window::onBtnClick)
EVT_BUTTON(8, App_Window::onBtnClick)
EVT_BUTTON(9, App_Window::onBtnClick)
EVT_BUTTON(10, App_Window::onBtnClick)
EVT_BUTTON(11, App_Window::onBtnClick)
EVT_BUTTON(12, App_Window::onBtnClick)
EVT_BUTTON(13, App_Window::onBtnClick)
EVT_BUTTON(14, App_Window::onBtnClick)
EVT_BUTTON(15, App_Window::onBtnClick)
EVT_BUTTON(16, App_Window::onBtnClick)
EVT_BUTTON(17, App_Window::onBtnClick)
EVT_BUTTON(18, App_Window::onBtnClick)
EVT_BUTTON(19, App_Window::onBtnClick)
EVT_BUTTON(20, App_Window::onBtnClick)
EVT_BUTTON(21, App_Window::onBtnClick)
EVT_BUTTON(22, App_Window::onBtnClick)
EVT_BUTTON(23, App_Window::onBtnClick)
wxEND_EVENT_TABLE()




//Constructor for cpp file.
//The wxxFrame takes in 5 parameters( Parent object ,ID tag , Title , where to create window(starting point from upper left screen, window width/height)
App_Window::App_Window() : wxFrame(nullptr, wxID_ANY, "Brandon's Calculator App", wxPoint(250, 250), wxSize(345, 550)) {
	  
	  textbox = new wxTextCtrl(this, 23, " ", wxPoint(8, 10), wxSize(315, 100));
	  num1 = ButtonFactory::createNum1Btn(this);
	  num2 = ButtonFactory::createNum2Btn(this);
	  num3 = ButtonFactory::createNum3Btn(this);
	  num4 = ButtonFactory::createNum4Btn(this);
	  num5 = ButtonFactory::createNum5Btn(this);
	  num6 = ButtonFactory::createNum6Btn(this);
	  num7 = ButtonFactory::createNum7Btn(this);
	  num8 = ButtonFactory::createNum8Btn(this);
	  num9 = ButtonFactory::createNum9Btn(this);
	  num0 = ButtonFactory::createNum0Btn(this);
	  addBtn = ButtonFactory::createAddBtn(this);
	  subtractBtn = ButtonFactory::createSubtractBtn(this);
	  multiplyBtn = ButtonFactory::createMultiplyBtn(this);
	  divideBtn = ButtonFactory::createDivideBtn(this);
	  moduloBtn = ButtonFactory::createModuloBtn(this);
	  sinBtn = ButtonFactory::createSinBtn(this);
	  cosBtn = ButtonFactory::createCosBtn(this);
	  tanBtn = ButtonFactory::createTanBtn(this);
	  deleteBtn = ButtonFactory::creaeteDelBtn(this);
	  clearBtn = ButtonFactory::createClearBtn(this);
	  equalBtn = ButtonFactory::createEqualsBtn(this);
	  negateBtn = ButtonFactory::createNegateBtn(this);
}
App_Window::~App_Window() {

}

void App_Window::onExit(wxCommandEvent& e)
{

	this->Close();
}

void App_Window::onBtnClick(wxCommandEvent& e)
{
	int i = e.GetId();

}