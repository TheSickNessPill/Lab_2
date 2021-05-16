#include "MyForm.h"
#include "Mathematics.h"
#include "Accounting.h"
#include "Comparison.h"
#include "Information.h"
#include <Windows.h>
using namespace ProjectGlazkov; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}