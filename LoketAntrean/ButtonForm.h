#pragma once

#include "QueueCounterForm.h"

namespace QueueCounterApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;

    public ref class ButtonForm : public System::Windows::Forms::Form
    {
    private:
        QueueCounterForm^ queueCounterForm;
        int currentValue; // Keep track of the current value

    public:
        ButtonForm(QueueCounterForm^ queueCounterForm)
        {
            InitializeComponent();
            this->queueCounterForm = queueCounterForm;
            this->currentValue = 1; // Initialize current value to 1
        }

    private:
        System::Void enqueueButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            queueCounterForm->UpdateQueueValue(currentValue); // Enqueue the current value
            currentValue++; // Increment the current value
        }

        System::Void dequeueButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            queueCounterForm->DequeueQueueValue();
        }

#pragma region Windows Form Designer generated code
        void InitializeComponent()
        {
            this->enqueueButton = (gcnew System::Windows::Forms::Button());
            this->dequeueButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // enqueueButton
            // 
            this->enqueueButton->Location = System::Drawing::Point(57, 37);
            this->enqueueButton->Name = L"enqueueButton";
            this->enqueueButton->Size = System::Drawing::Size(75, 23);
            this->enqueueButton->TabIndex = 0;
            this->enqueueButton->Text = L"Enqueue";
            this->enqueueButton->UseVisualStyleBackColor = true;
            this->enqueueButton->Click += gcnew System::EventHandler(this, &ButtonForm::enqueueButton_Click);
            // 
            // dequeueButton
            // 
            this->dequeueButton->Location = System::Drawing::Point(57, 82);
            this->dequeueButton->Name = L"dequeueButton";
            this->dequeueButton->Size = System::Drawing::Size(75, 23);
            this->dequeueButton->TabIndex = 1;
            this->dequeueButton->Text = L"Dequeue";
            this->dequeueButton->UseVisualStyleBackColor = true;
            this->dequeueButton->Click += gcnew System::EventHandler(this, &ButtonForm::dequeueButton_Click);
            // 
            // ButtonForm
            // 
            this->ClientSize = System::Drawing::Size(282, 253);
            this->Controls->Add(this->dequeueButton);
            this->Controls->Add(this->enqueueButton);
            this->Name = L"ButtonForm";
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        System::Windows::Forms::Button^ enqueueButton;
        System::Windows::Forms::Button^ dequeueButton;
    };
}
