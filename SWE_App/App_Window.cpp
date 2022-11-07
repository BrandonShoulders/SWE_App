#include "App_Window.h"



//Constructor for cpp file.
//The wxxFrame takes in 5 parameters( Parent object ,ID tag , Title , where to create window(starting point from upper left screen, window width/height)
App_Window::App_Window() : wxFrame(nullptr, wxID_ANY, "Brandon's Calculator App", wxPoint(250, 250), wxSize(345, 550)) {

	num1 = new wxButton(this, wxID_ANY, "1", wxPoint(15, 200 ), wxSize(75, 75));
	num2 = new wxButton(this, wxID_ANY, "2", wxPoint(90, 200), wxSize(75, 75));
	num3 = new wxButton(this, wxID_ANY, "3", wxPoint(165,200), wxSize(75, 75));
	num4 = new wxButton(this, wxID_ANY, "4", wxPoint(15, 275), wxSize(75, 75));
	num5 = new wxButton(this, wxID_ANY, "5", wxPoint(90, 275), wxSize(75, 75));
	num6 = new wxButton(this, wxID_ANY, "6", wxPoint(165, 275), wxSize(75, 75));
	num7 = new wxButton(this, wxID_ANY, "7", wxPoint(15, 350), wxSize(75, 75));
	num8 = new wxButton(this, wxID_ANY, "8", wxPoint(90, 350), wxSize(75, 75));
	num9 = new wxButton(this, wxID_ANY, "9", wxPoint(165, 350), wxSize(75, 75));
	num0 = new wxButton(this, wxID_ANY, "0", wxPoint(15, 425), wxSize(75, 75));
	addButton = new wxButton(this, wxID_ANY, "+", wxPoint(240, 135), wxSize(75, 65));
	subtractButton = new wxButton(this, wxID_ANY, "-", wxPoint(240, 200), wxSize(75, 75));
	negativeSignButton = new wxButton(this, wxID_ANY, "( - )", wxPoint(90, 100), wxSize(75, 35));
	multiplyButton = new wxButton(this, wxID_ANY, "x", wxPoint(240, 275), wxSize(75, 75));
	divideButton = new wxButton(this, wxID_ANY, "/", wxPoint(240, 350), wxSize(75, 75));
	equalsButton = new wxButton(this, wxID_ANY, "=", wxPoint(240, 425), wxSize(75, 75));
	clearButton = new wxButton(this, wxID_ANY, "CLR", wxPoint(165, 425), wxSize(75, 75));
	deleteButton = new wxButton(this, wxID_ANY, "DEL", wxPoint(90, 425), wxSize(75, 75));
	modeButton = new wxButton(this, wxID_ANY, "MODE", wxPoint(15, 100), wxSize(75, 35));
	sinButton = new wxButton(this, wxID_ANY, "sin", wxPoint(15, 135), wxSize(75, 65));
	cosButton = new wxButton(this, wxID_ANY, "cos", wxPoint(90, 135), wxSize(75, 65));
	tanButton = new wxButton(this, wxID_ANY, "tan", wxPoint(165, 135), wxSize(75, 65));
	displayBox = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(15, 10), wxSize(300, 75));





}