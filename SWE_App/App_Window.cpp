#include "App_Window.h"
#include <stdio.h>
#include <regex>
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <string>




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
wxEND_EVENT_TABLE()




//Constructor for cpp file.
//The wxFrame takes in 5 parameters( Parent object ,ID tag , Title , where to create window(starting point from upper left screen, window width/height)
App_Window::App_Window() : wxFrame(nullptr, wxID_ANY, "Brandon's Calculator App", wxPoint(250, 250), wxSize(345, 550)) {

	textbox = new wxTextCtrl(this, 23, " ", wxPoint(8, 10), wxSize(315, 100));

	/*  btn = ButtonFactory::createNum0Btn(this);
		btn = ButtonFactory::createNum1Btn(this);
		btn = ButtonFactory::createNum2Btn(this);
		btn = ButtonFactory::createNum3Btn(this);
		btn = ButtonFactory::createNum4Btn(this);
		btn = ButtonFactory::createNum5Btn(this);
		btn = ButtonFactory::createNum6Btn(this);
		btn = ButtonFactory::createNum7Btn(this);
		btn = ButtonFactory::createNum8Btn(this);
		btn = ButtonFactory::createNum9Btn(this);
		btn = ButtonFactory::createAddBtn(this);
		btn = ButtonFactory::createSubtractBtn(this);
		btn = ButtonFactory::createMultiplyBtn(this);
		btn = ButtonFactory::createDivideBtn(this);
		btn = ButtonFactory::createModuloBtn(this);
		btn = ButtonFactory::createNegateBtn(this);
		btn = ButtonFactory::createDelBtn(this);
		btn = ButtonFactory::createClearBtn(this);
		btn = ButtonFactory::createSinBtn(this);
		btn = ButtonFactory::createCosBtn(this);
		btn = ButtonFactory::createTanBtn(this);
		btn = ButtonFactory::createEqualsBtn(this);*/

}
App_Window::~App_Window() {



}

void App_Window::onExit(wxCommandEvent& e)
{

	this->Close();
}

void App_Window::onBtnClick(wxCommandEvent& e)
{
	int id = e.GetId();
    std::string str = textbox->GetValue().ToStdString();
	

	


}




