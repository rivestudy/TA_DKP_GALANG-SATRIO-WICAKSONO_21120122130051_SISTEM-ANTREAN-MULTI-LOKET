#include "LoketForm.h"
#include "buttonForm2.h"
#include "ButtonForm1.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    LoketAPP::LoketAntreanForm queueCounterForm;
    LoketAPP::ButtonForm buttonForm(% queueCounterForm);
    LoketAPP::lanjutAntre buttonForm2(% queueCounterForm);

    queueCounterForm.Show();
    buttonForm.Show();
    buttonForm2.Show();

    Application::Run();
    return 0;
}
