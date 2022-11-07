#include "App.h"
#include "App_Window.h"


//App needs a starting point. This gives the starting point to the app in a wxWidgets project
wxIMPLEMENT_APP(App);

//OnInit Function to create an open window 
bool App::OnInit() {

	//creates new instance of a App_Window 
	window = new App_Window();

	//show window. Once "wxFrame" in App_Window class is implemented the error goes away
	window->Show();

	//returns true if window open successfully
	return true;


}