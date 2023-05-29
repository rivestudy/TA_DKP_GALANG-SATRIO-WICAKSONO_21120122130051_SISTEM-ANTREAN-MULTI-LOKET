#include "QueueCounterForm.h"
#include "ButtonForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    QueueCounterApp::QueueCounterForm queueCounterForm;
    QueueCounterApp::ButtonForm buttonForm(% queueCounterForm);

    queueCounterForm.Show();
    buttonForm.Show();

    Application::Run();
    return 0;
}
