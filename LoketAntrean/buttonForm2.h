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
	public ref class lanjutAntre : public System::Windows::Forms::Form
	{
	private:
		LoketAntreanForm^ LoketForm;
	private: System::Windows::Forms::Panel^ bottomPanel;
	private: System::Windows::Forms::Button^ buttonLanjut3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonLanjut2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonLanjut1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelLanjut;

		   

	public:
		lanjutAntre(LoketAntreanForm^ queueCounterForm)
		{
			InitializeComponent();
			this->LoketForm = queueCounterForm;
		}



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
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->buttonLanjut3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonLanjut2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonLanjut1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelLanjut = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bottomPanel
			// 
			this->bottomPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bottomPanel->Location = System::Drawing::Point(-8, 175);
			this->bottomPanel->Name = L"bottomPanel";
			this->bottomPanel->Size = System::Drawing::Size(629, 24);
			this->bottomPanel->TabIndex = 23;
			// 
			// buttonLanjut3
			// 
			this->buttonLanjut3->Location = System::Drawing::Point(316, 57);
			this->buttonLanjut3->Name = L"buttonLanjut3";
			this->buttonLanjut3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonLanjut3->Size = System::Drawing::Size(150, 112);
			this->buttonLanjut3->TabIndex = 18;
			this->buttonLanjut3->Text = L"Lanjut Antrian Loket C";
			this->buttonLanjut3->UseVisualStyleBackColor = true;
			this->buttonLanjut3->Click += gcnew System::EventHandler(this, &lanjutAntre::buttonLanjut3_Click_1);
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(318, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 161);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Loket C";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonLanjut2
			// 
			this->buttonLanjut2->Location = System::Drawing::Point(160, 57);
			this->buttonLanjut2->Name = L"buttonLanjut2";
			this->buttonLanjut2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonLanjut2->Size = System::Drawing::Size(150, 112);
			this->buttonLanjut2->TabIndex = 17;
			this->buttonLanjut2->Text = L"Lanjut Antrian Loket B";
			this->buttonLanjut2->UseVisualStyleBackColor = true;
			this->buttonLanjut2->Click += gcnew System::EventHandler(this, &lanjutAntre::buttonLanjut2_Click_1);
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(159, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 161);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Loket B";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonLanjut1
			// 
			this->buttonLanjut1->Location = System::Drawing::Point(4, 57);
			this->buttonLanjut1->Name = L"buttonLanjut1";
			this->buttonLanjut1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonLanjut1->Size = System::Drawing::Size(150, 112);
			this->buttonLanjut1->TabIndex = 16;
			this->buttonLanjut1->Text = L"LanjutAntrian Loket A";
			this->buttonLanjut1->UseVisualStyleBackColor = true;
			this->buttonLanjut1->Click += gcnew System::EventHandler(this, &lanjutAntre::buttonLanjut1_Click_1);
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 161);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Loket A";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelLanjut
			// 
			this->labelLanjut->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->labelLanjut->Dock = System::Windows::Forms::DockStyle::Top;
			this->labelLanjut->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLanjut->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->labelLanjut->Location = System::Drawing::Point(0, 0);
			this->labelLanjut->Name = L"labelLanjut";
			this->labelLanjut->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelLanjut->Size = System::Drawing::Size(480, 35);
			this->labelLanjut->TabIndex = 19;
			this->labelLanjut->Text = L"Konfirmasi Lanjut Giliran";
			this->labelLanjut->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lanjutAntre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 196);
			this->Controls->Add(this->bottomPanel);
			this->Controls->Add(this->buttonLanjut3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonLanjut2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonLanjut1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelLanjut);
			this->Name = L"lanjutAntre";
			this->Text = L"ambilAntre";
			this->Load += gcnew System::EventHandler(this, &lanjutAntre::ambilAntre_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ambilAntre_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

private: System::Void buttonLanjut1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	LoketForm->SelesaiA();
}
private: System::Void buttonLanjut2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	LoketForm->SelesaiB();
}
private: System::Void buttonLanjut3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	LoketForm->SelesaiC();
}
};
}
