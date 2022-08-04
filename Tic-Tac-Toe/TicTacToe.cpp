#include "TicTacToe.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TicTacToe::TicTacToe form;
	Application::Run(% form);
}

