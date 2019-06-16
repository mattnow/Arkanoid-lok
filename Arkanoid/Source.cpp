#include "ViewMenu.h"
#include "Autors.h"
#include "Rules.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace Arkanoid;


[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ViewMenu^ menu = gcnew ViewMenu(); // tworzymy obiekt klasy Viewmenu o nazwie menu
	menu->Show(); // wyswietlamy obiekt menu
	Application::Run(); //uruchamiamy program
	return 0;
} 