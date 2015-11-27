#include "GaussUI.h"

using namespace Gauss;


[STAThread]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GaussUI());
	return 0;
}