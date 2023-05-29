#pragma once
#include "LoketForm.h"

namespace LoketAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ambilAntre
	/// </summary>
	public ref class ambilAntre : public System::Windows::Forms::Form
	{
	private:
		LoketAntreanForm^ queueCounterForm;
		int currentValue1; // Keep track of the current value
		int currentValue2;
		int currentValue3;

	public:
		ambilAntre(LoketAntreanForm^ queueCounterForm)
		{
			InitializeComponent();
			this->queueCounterForm = queueCounterForm;
			this->currentValue1 = 0; // Initialize current value to 1
		}

	private:
		System::Void buttonAmbil1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			queueCounterForm->UpdateA(currentValue1); // Enqueue the current value
			currentValue1++; // Increment the current value
		}

		System::Void buttonAmbil2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			queueCounterForm->UpdateB(currentValue2); // Enqueue the current value
			currentValue2++; // Increment the current value
		}

		System::Void buttonAmbil3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			queueCounterForm->UpdateC(currentValue2); // Enqueue the current value
			currentValue++; // Increment the current value
		}
	private: System::Windows::Forms::Button^ buttonAmbil1;
	private: System::Windows::Forms::Button^ buttonAmbil2;
	private: System::Windows::Forms::Button^ buttonAmbil3;
	private: System::Windows::Forms::Label^ labelAmbil;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ bottomPanel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonAmbil1 = (gcnew System::Windows::Forms::Button());
			this->buttonAmbil2 = (gcnew System::Windows::Forms::Button());
			this->buttonAmbil3 = (gcnew System::Windows::Forms::Button());
			this->labelAmbil = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// buttonAmbil1
			// 
			this->buttonAmbil1->Location = System::Drawing::Point(12, 57);
			this->buttonAmbil1->Name = L"buttonAmbil1";
			this->buttonAmbil1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonAmbil1->Size = System::Drawing::Size(193, 112);
			this->buttonAmbil1->TabIndex = 0;
			this->buttonAmbil1->Text = L"Ambil Antrian Loket A";
			this->buttonAmbil1->UseVisualStyleBackColor = true;
			this->buttonAmbil1->Click += gcnew System::EventHandler(this, &ambilAntre::button1_Click);
			// 
			// buttonAmbil2
			// 
			this->buttonAmbil2->Location = System::Drawing::Point(211, 57);
			this->buttonAmbil2->Name = L"buttonAmbil2";
			this->buttonAmbil2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonAmbil2->Size = System::Drawing::Size(193, 112);
			this->buttonAmbil2->TabIndex = 1;
			this->buttonAmbil2->Text = L"Ambil Antrian Loket B";
			this->buttonAmbil2->UseVisualStyleBackColor = true;
			// 
			// buttonAmbil3
			// 
			this->buttonAmbil3->Location = System::Drawing::Point(410, 57);
			this->buttonAmbil3->Name = L"buttonAmbil3";
			this->buttonAmbil3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonAmbil3->Size = System::Drawing::Size(193, 112);
			this->buttonAmbil3->TabIndex = 2;
			this->buttonAmbil3->Text = L"Ambil Antrian Loket C";
			this->buttonAmbil3->UseVisualStyleBackColor = true;
			this->buttonAmbil3->Click += gcnew System::EventHandler(this, &ambilAntre::buttonAmbil3_Click);
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
			this->labelAmbil->Size = System::Drawing::Size(613, 35);
			this->labelAmbil->TabIndex = 3;
			this->labelAmbil->Text = L"Ambil Nomor Antrian Anda";
			this->labelAmbil->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 170);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Loket A";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &ambilAntre::label1_Click);
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(205, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 170);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Loket B";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(404, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 170);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Loket C";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// bottomPanel
			// 
			this->bottomPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bottomPanel->Location = System::Drawing::Point(-6, 175);
			this->bottomPanel->Name = L"bottomPanel";
			this->bottomPanel->Size = System::Drawing::Size(629, 24);
			this->bottomPanel->TabIndex = 7;
			// 
			// ambilAntre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 205);
			this->Controls->Add(this->bottomPanel);
			this->Controls->Add(this->buttonAmbil3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonAmbil2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonAmbil1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelAmbil);
			this->Name = L"ambilAntre";
			this->Text = L"ambilAntre";
			this->Load += gcnew System::EventHandler(this, &ambilAntre::ambilAntre_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ambilAntre_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonAmbil3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
