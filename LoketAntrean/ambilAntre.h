#pragma once
#include "QueueCounterForm.h"

namespace LoketAntrean {

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
	public:
		ambilAntre(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ambilAntre()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonAmbil1;
	protected:

	protected:
	private: System::Windows::Forms::Button^ buttonAmbil2;
	private: System::Windows::Forms::Button^ buttonAmbil3;

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
			this->SuspendLayout();
			// 
			// buttonAmbil1
			// 
			this->buttonAmbil1->Location = System::Drawing::Point(12, 131);
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
			this->buttonAmbil2->Location = System::Drawing::Point(211, 131);
			this->buttonAmbil2->Name = L"buttonAmbil2";
			this->buttonAmbil2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonAmbil2->Size = System::Drawing::Size(193, 112);
			this->buttonAmbil2->TabIndex = 1;
			this->buttonAmbil2->Text = L"Ambil Antrian Loket B";
			this->buttonAmbil2->UseVisualStyleBackColor = true;
			// 
			// buttonAmbil3
			// 
			this->buttonAmbil3->Location = System::Drawing::Point(410, 131);
			this->buttonAmbil3->Name = L"buttonAmbil3";
			this->buttonAmbil3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonAmbil3->Size = System::Drawing::Size(193, 112);
			this->buttonAmbil3->TabIndex = 2;
			this->buttonAmbil3->Text = L"Ambil Antrian Loket C";
			this->buttonAmbil3->UseVisualStyleBackColor = true;
			// 
			// ambilAntre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 255);
			this->Controls->Add(this->buttonAmbil3);
			this->Controls->Add(this->buttonAmbil2);
			this->Controls->Add(this->buttonAmbil1);
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
	};
}
