#pragma once

#include "LoketForm.h"

namespace LoketAPP {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;

    public ref class ButtonForm : public System::Windows::Forms::Form
    {
    private:
        LoketAntreanForm^ queueCounterForm;
    private: System::Windows::Forms::Panel^ bottomPanel;
    private: System::Windows::Forms::Button^ buttonAmbil3;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ buttonAmbil2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ buttonAmbil1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ labelAmbil;

           int currentValueA;
           int currentValueB;
           int currentValueC; 

    public:
        ButtonForm(LoketAntreanForm^ queueCounterForm)
        {
            InitializeComponent();
            this->queueCounterForm = queueCounterForm;
            this->currentValueA = 1;
            this->currentValueB = 1;
            this->currentValueC = 1;
           
        }

    private:
        System::Void enqueueButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            queueCounterForm->UpdateA(currentValueA); 
            currentValueA++; 
        }

        System::Void dequeueButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            queueCounterForm->SelesaiA();
        }

#pragma region Windows Form Designer generated code
        void InitializeComponent()
        {
            this->bottomPanel = (gcnew System::Windows::Forms::Panel());
            this->buttonAmbil3 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->buttonAmbil2 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->buttonAmbil1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->labelAmbil = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // bottomPanel
            // 
            this->bottomPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bottomPanel->Location = System::Drawing::Point(-3, 175);
            this->bottomPanel->Name = L"bottomPanel";
            this->bottomPanel->Size = System::Drawing::Size(503, 24);
            this->bottomPanel->TabIndex = 15;
            // 
            // buttonAmbil3
            // 
            this->buttonAmbil3->Location = System::Drawing::Point(321, 57);
            this->buttonAmbil3->Name = L"buttonAmbil3";
            this->buttonAmbil3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->buttonAmbil3->Size = System::Drawing::Size(150, 112);
            this->buttonAmbil3->TabIndex = 10;
            this->buttonAmbil3->Text = L"Ambil Antrian Loket C";
            this->buttonAmbil3->UseVisualStyleBackColor = true;
            this->buttonAmbil3->Click += gcnew System::EventHandler(this, &ButtonForm::buttonAmbil3_Click_1);
            // 
            // label3
            // 
            this->label3->Dock = System::Windows::Forms::DockStyle::Left;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(318, 35);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(154, 161);
            this->label3->TabIndex = 14;
            this->label3->Text = L"Loket C";
            this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // buttonAmbil2
            // 
            this->buttonAmbil2->Location = System::Drawing::Point(165, 57);
            this->buttonAmbil2->Name = L"buttonAmbil2";
            this->buttonAmbil2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->buttonAmbil2->Size = System::Drawing::Size(150, 112);
            this->buttonAmbil2->TabIndex = 9;
            this->buttonAmbil2->Text = L"Ambil Antrian Loket B";
            this->buttonAmbil2->UseVisualStyleBackColor = true;
            this->buttonAmbil2->Click += gcnew System::EventHandler(this, &ButtonForm::buttonAmbil2_Click);
            // 
            // label2
            // 
            this->label2->Dock = System::Windows::Forms::DockStyle::Left;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(159, 35);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(159, 161);
            this->label2->TabIndex = 13;
            this->label2->Text = L"Loket B";
            this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // buttonAmbil1
            // 
            this->buttonAmbil1->Location = System::Drawing::Point(9, 57);
            this->buttonAmbil1->Name = L"buttonAmbil1";
            this->buttonAmbil1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->buttonAmbil1->Size = System::Drawing::Size(150, 112);
            this->buttonAmbil1->TabIndex = 8;
            this->buttonAmbil1->Text = L"Ambil Antrian Loket A";
            this->buttonAmbil1->UseVisualStyleBackColor = true;
            this->buttonAmbil1->Click += gcnew System::EventHandler(this, &ButtonForm::buttonAmbil1_Click);
            // 
            // label1
            // 
            this->label1->Dock = System::Windows::Forms::DockStyle::Left;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(0, 35);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(159, 161);
            this->label1->TabIndex = 12;
            this->label1->Text = L"Loket A";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // labelAmbil
            // 
            this->labelAmbil->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->labelAmbil->Dock = System::Windows::Forms::DockStyle::Top;
            this->labelAmbil->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelAmbil->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->labelAmbil->Location = System::Drawing::Point(0, 0);
            this->labelAmbil->Name = L"labelAmbil";
            this->labelAmbil->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->labelAmbil->Size = System::Drawing::Size(480, 35);
            this->labelAmbil->TabIndex = 11;
            this->labelAmbil->Text = L"Ambil Nomor Antrian Anda";
            this->labelAmbil->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // ButtonForm
            // 
            this->ClientSize = System::Drawing::Size(480, 196);
            this->Controls->Add(this->bottomPanel);
            this->Controls->Add(this->buttonAmbil3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->buttonAmbil2);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->buttonAmbil1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->labelAmbil);
            this->Name = L"ButtonForm";
            this->ResumeLayout(false);

        }
#pragma endregion

    private:



private: System::Void buttonAmbil1_Click(System::Object^ sender, System::EventArgs^ e) {
    queueCounterForm->UpdateA(currentValueA); 
    currentValueA++; 
}
private: System::Void buttonAmbil2_Click(System::Object^ sender, System::EventArgs^ e) {
    queueCounterForm->UpdateB(currentValueB); 
    currentValueB++; 
}
private: System::Void buttonAmbil3_Click_1(System::Object^ sender, System::EventArgs^ e) {
    queueCounterForm->UpdateC(currentValueC); 
    currentValueC++; 
}
};
}
