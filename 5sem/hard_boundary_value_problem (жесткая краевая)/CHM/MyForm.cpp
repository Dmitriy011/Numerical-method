#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ arg) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    CHM::MyForm form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}

System::Void CHM::MyForm::menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e)
{
    return System::Void();
}

System::Void CHM::MyForm::Выход_Click(System::Object^ sender, System::EventArgs^ e)
{
    Sleep(1000);
    Application::Exit();
}
