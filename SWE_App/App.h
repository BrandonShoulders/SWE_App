#pragma once
#include "wx/wx.h"

//Forward declare the class. This means that App.h is not dependant on Windows.h
class App_Window;

//Class should inherit from wxWidgets object "wxApp"
class App : public wxApp
{
	//create a reference pointer to the window 
	App_Window* window = nullptr;

//when class inherits from object we need a virtual bool called "OnInit()" to create the window if true
public:

	//bool to initialize the window
	virtual bool OnInit();

};

