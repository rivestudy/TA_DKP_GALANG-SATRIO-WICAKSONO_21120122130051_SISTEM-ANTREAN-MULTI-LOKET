#include "LoketForm.h"
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

    queueCounterForm.Show();
    buttonForm.Show();

    Application::Run();
    return 0;
}
