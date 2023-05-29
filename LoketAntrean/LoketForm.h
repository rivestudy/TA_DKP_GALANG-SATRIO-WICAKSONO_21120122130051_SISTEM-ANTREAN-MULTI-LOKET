
#include <string>

#pragma once


namespace LoketAPP {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::ComponentModel;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Windows::Forms;

    public ref class LoketAntreanForm : public System::Windows::Forms::Form
    {
    private:
        System::Collections::Generic::Queue<int>^ q1;
        System::Collections::Generic::Queue<int>^ q2;
        System::Collections::Generic::Queue<int>^ q3;


    public:
        LoketAntreanForm(void)
        {
            InitializeComponent();
            q1 = gcnew System::Collections::Generic::Queue<int>();
            q2 = gcnew System::Collections::Generic::Queue<int>();
            q3 = gcnew System::Collections::Generic::Queue<int>();
        }

        void UpdateA(int value)
        {
            q1->Enqueue(value);
            DisplayA();
        }
        void SelesaiA()
        {
            if (q1->Count > 0)
            {
                q1->Dequeue();
                DisplayA();
            }
        }
        void UpdateB(int value)
        {
            q2->Enqueue(value);
            DisplayB();
        }
        void SelesaiB()
        {
            if (q2->Count > 0)
            {
                q2->Dequeue();
                DisplayB();
            }
        }
        void UpdateC(int value)
        {
            q3->Enqueue(value);
            DisplayC();
        }
        void SelesaiC()
        {
            if (q3->Count > 0)
            {
                q3->Dequeue();
                DisplayC();
            }
        }
    private:
        void DisplayA()
        {
            String^ frontA = q1->Count > 0 ? q1->Peek().ToString() : "-";
            String^ endA = q1->Count > 0 ? ekorA().ToString() : "-";
            String^ lengthA = q1->Count.ToString();
            
            angkaAntriA->Text = String::Format("A" + frontA);
            angkaBaruA->Text = String::Format("A" + endA);
            angkaPanjangA->Text = String::Format(lengthA);
        
        }
        int ekorA()
        {
            System::Collections::Generic::Queue<int>^ tempq1 = gcnew System::Collections::Generic::Queue<int>(q1);

            int ekorValA;
            while (tempq1->Count > 0)
            {
                ekorValA = tempq1->Dequeue(); 
            }

            return ekorValA;
        }
        void DisplayB()
        {
            String^ frontB = q2->Count > 0 ? q2->Peek().ToString() : "-";
            String^ endB = q2->Count > 0 ? ekorB().ToString() : "-";
            String^ lengthB = q2->Count.ToString();

            angkaAntriB->Text = String::Format("B" + frontB);
            angkaBaruB->Text = String::Format("B" + endB);
            angkaPanjangB->Text = String::Format(lengthB);

        }
        int ekorB()
        {
            System::Collections::Generic::Queue<int>^ tempq2 = gcnew System::Collections::Generic::Queue<int>(q2);

            int ekorValB;
            while (tempq2->Count > 0)
            {
                ekorValB = tempq2->Dequeue();
            }

            return ekorValB;
        }
        void DisplayC()
        {
            String^ frontC = q3->Count > 0 ? q3->Peek().ToString() : "-";
            String^ endC = q3->Count > 0 ? ekorC().ToString() : "-";
            String^ lengthC = q3->Count.ToString();

            angkaAntriC->Text = String::Format("C" + frontC);
            angkaBaruC->Text = String::Format("C" + endC);
            angkaPanjangC->Text = String::Format(lengthC);

        }
        int ekorC()
        {
            System::Collections::Generic::Queue<int>^ tempq3 = gcnew System::Collections::Generic::Queue<int>(q3);

            int ekorValC;
            while (tempq3->Count > 0)
            {
                ekorValC = tempq3->Dequeue();
            }

            return ekorValC;
        }


#pragma region Windows Form Designer generated code
        void InitializeComponent()
        {
            this->angkaAntriA = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panjangC = (gcnew System::Windows::Forms::Label());
            this->panjangB = (gcnew System::Windows::Forms::Label());
            this->panjangA = (gcnew System::Windows::Forms::Label());
            this->angkaPanjangC = (gcnew System::Windows::Forms::Label());
            this->angkaPanjangB = (gcnew System::Windows::Forms::Label());
            this->angkaPanjangA = (gcnew System::Windows::Forms::Label());
            this->angkaAntriC = (gcnew System::Windows::Forms::Label());
            this->angkaAntriB = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->akhirC = (gcnew System::Windows::Forms::Label());
            this->akhirB = (gcnew System::Windows::Forms::Label());
            this->angkaBaruC = (gcnew System::Windows::Forms::Label());
            this->angkaBaruB = (gcnew System::Windows::Forms::Label());
            this->akhirA = (gcnew System::Windows::Forms::Label());
            this->angkaBaruA = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // angkaAntriA
            // 
            this->angkaAntriA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaAntriA->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->angkaAntriA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaAntriA->Location = System::Drawing::Point(3, 89);
            this->angkaAntriA->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaAntriA->Name = L"angkaAntriA";
            this->angkaAntriA->Size = System::Drawing::Size(350, 196);
            this->angkaAntriA->TabIndex = 0;
            this->angkaAntriA->Text = L"0";
            this->angkaAntriA->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->angkaAntriA->Click += gcnew System::EventHandler(this, &LoketAntreanForm::queueLabel_Click);
            // 
            // panel1
            // 
            this->panel1->AutoScroll = true;
            this->panel1->BackColor = System::Drawing::Color::Linen;
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->angkaAntriC);
            this->panel1->Controls->Add(this->angkaAntriB);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Controls->Add(this->angkaAntriA);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(0, 50);
            this->panel1->MaximumSize = System::Drawing::Size(1080, 550);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1062, 525);
            this->panel1->TabIndex = 1;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Azure;
            this->panel3->Controls->Add(this->panjangC);
            this->panel3->Controls->Add(this->panjangB);
            this->panel3->Controls->Add(this->panjangA);
            this->panel3->Controls->Add(this->angkaPanjangC);
            this->panel3->Controls->Add(this->angkaPanjangB);
            this->panel3->Controls->Add(this->angkaPanjangA);
            this->panel3->ForeColor = System::Drawing::Color::Transparent;
            this->panel3->Location = System::Drawing::Point(-1, 415);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(1062, 105);
            this->panel3->TabIndex = 11;
            // 
            // panjangC
            // 
            this->panjangC->AutoSize = true;
            this->panjangC->Dock = System::Windows::Forms::DockStyle::Left;
            this->panjangC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panjangC->ForeColor = System::Drawing::Color::Black;
            this->panjangC->Location = System::Drawing::Point(706, 0);
            this->panjangC->MinimumSize = System::Drawing::Size(353, 40);
            this->panjangC->Name = L"panjangC";
            this->panjangC->Size = System::Drawing::Size(353, 40);
            this->panjangC->TabIndex = 2;
            this->panjangC->Text = L"Panjang Antrean";
            this->panjangC->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // panjangB
            // 
            this->panjangB->AutoSize = true;
            this->panjangB->Dock = System::Windows::Forms::DockStyle::Left;
            this->panjangB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panjangB->ForeColor = System::Drawing::Color::Black;
            this->panjangB->Location = System::Drawing::Point(353, 0);
            this->panjangB->MinimumSize = System::Drawing::Size(353, 40);
            this->panjangB->Name = L"panjangB";
            this->panjangB->Size = System::Drawing::Size(353, 40);
            this->panjangB->TabIndex = 1;
            this->panjangB->Text = L"Panjang Antrean";
            this->panjangB->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // panjangA
            // 
            this->panjangA->AutoSize = true;
            this->panjangA->Dock = System::Windows::Forms::DockStyle::Left;
            this->panjangA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panjangA->ForeColor = System::Drawing::Color::Black;
            this->panjangA->Location = System::Drawing::Point(0, 0);
            this->panjangA->MinimumSize = System::Drawing::Size(353, 40);
            this->panjangA->Name = L"panjangA";
            this->panjangA->Size = System::Drawing::Size(353, 40);
            this->panjangA->TabIndex = 0;
            this->panjangA->Text = L"Panjang Antrean";
            this->panjangA->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // angkaPanjangC
            // 
            this->angkaPanjangC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaPanjangC->BackColor = System::Drawing::Color::Transparent;
            this->angkaPanjangC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaPanjangC->ForeColor = System::Drawing::Color::Black;
            this->angkaPanjangC->Location = System::Drawing::Point(709, 35);
            this->angkaPanjangC->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaPanjangC->Name = L"angkaPanjangC";
            this->angkaPanjangC->Size = System::Drawing::Size(350, 70);
            this->angkaPanjangC->TabIndex = 18;
            this->angkaPanjangC->Text = L"0";
            this->angkaPanjangC->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // angkaPanjangB
            // 
            this->angkaPanjangB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaPanjangB->BackColor = System::Drawing::Color::Transparent;
            this->angkaPanjangB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaPanjangB->ForeColor = System::Drawing::Color::Black;
            this->angkaPanjangB->Location = System::Drawing::Point(353, 35);
            this->angkaPanjangB->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaPanjangB->Name = L"angkaPanjangB";
            this->angkaPanjangB->Size = System::Drawing::Size(350, 70);
            this->angkaPanjangB->TabIndex = 17;
            this->angkaPanjangB->Text = L"0";
            this->angkaPanjangB->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // angkaPanjangA
            // 
            this->angkaPanjangA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaPanjangA->BackColor = System::Drawing::Color::Transparent;
            this->angkaPanjangA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaPanjangA->ForeColor = System::Drawing::Color::Black;
            this->angkaPanjangA->Location = System::Drawing::Point(0, 35);
            this->angkaPanjangA->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaPanjangA->Name = L"angkaPanjangA";
            this->angkaPanjangA->Size = System::Drawing::Size(350, 70);
            this->angkaPanjangA->TabIndex = 16;
            this->angkaPanjangA->Text = L"0";
            this->angkaPanjangA->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // angkaAntriC
            // 
            this->angkaAntriC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaAntriC->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->angkaAntriC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaAntriC->Location = System::Drawing::Point(712, 89);
            this->angkaAntriC->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaAntriC->Name = L"angkaAntriC";
            this->angkaAntriC->Size = System::Drawing::Size(350, 196);
            this->angkaAntriC->TabIndex = 12;
            this->angkaAntriC->Text = L"0";
            this->angkaAntriC->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // angkaAntriB
            // 
            this->angkaAntriB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaAntriB->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->angkaAntriB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaAntriB->Location = System::Drawing::Point(356, 89);
            this->angkaAntriB->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaAntriB->Name = L"angkaAntriB";
            this->angkaAntriB->Size = System::Drawing::Size(350, 196);
            this->angkaAntriB->TabIndex = 11;
            this->angkaAntriB->Text = L"0";
            this->angkaAntriB->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Azure;
            this->panel2->Controls->Add(this->akhirC);
            this->panel2->Controls->Add(this->akhirB);
            this->panel2->Controls->Add(this->angkaBaruC);
            this->panel2->Controls->Add(this->angkaBaruB);
            this->panel2->Controls->Add(this->akhirA);
            this->panel2->Controls->Add(this->angkaBaruA);
            this->panel2->ForeColor = System::Drawing::Color::Transparent;
            this->panel2->Location = System::Drawing::Point(0, 307);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1062, 105);
            this->panel2->TabIndex = 10;
            // 
            // akhirC
            // 
            this->akhirC->AutoSize = true;
            this->akhirC->Dock = System::Windows::Forms::DockStyle::Left;
            this->akhirC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->akhirC->ForeColor = System::Drawing::Color::Black;
            this->akhirC->Location = System::Drawing::Point(706, 0);
            this->akhirC->MinimumSize = System::Drawing::Size(353, 40);
            this->akhirC->Name = L"akhirC";
            this->akhirC->Size = System::Drawing::Size(353, 40);
            this->akhirC->TabIndex = 2;
            this->akhirC->Text = L"Antrean Terbaru";
            this->akhirC->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // akhirB
            // 
            this->akhirB->AutoSize = true;
            this->akhirB->Dock = System::Windows::Forms::DockStyle::Left;
            this->akhirB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->akhirB->ForeColor = System::Drawing::Color::Black;
            this->akhirB->Location = System::Drawing::Point(353, 0);
            this->akhirB->MinimumSize = System::Drawing::Size(353, 40);
            this->akhirB->Name = L"akhirB";
            this->akhirB->Size = System::Drawing::Size(353, 40);
            this->akhirB->TabIndex = 1;
            this->akhirB->Text = L"Antrean Terbaru";
            this->akhirB->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // angkaBaruC
            // 
            this->angkaBaruC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaBaruC->BackColor = System::Drawing::Color::Transparent;
            this->angkaBaruC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaBaruC->ForeColor = System::Drawing::Color::Black;
            this->angkaBaruC->Location = System::Drawing::Point(711, 35);
            this->angkaBaruC->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaBaruC->Name = L"angkaBaruC";
            this->angkaBaruC->Size = System::Drawing::Size(350, 70);
            this->angkaBaruC->TabIndex = 15;
            this->angkaBaruC->Text = L"0";
            this->angkaBaruC->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // angkaBaruB
            // 
            this->angkaBaruB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaBaruB->BackColor = System::Drawing::Color::Transparent;
            this->angkaBaruB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaBaruB->ForeColor = System::Drawing::Color::Black;
            this->angkaBaruB->Location = System::Drawing::Point(355, 35);
            this->angkaBaruB->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaBaruB->Name = L"angkaBaruB";
            this->angkaBaruB->Size = System::Drawing::Size(350, 70);
            this->angkaBaruB->TabIndex = 14;
            this->angkaBaruB->Text = L"0";
            this->angkaBaruB->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // akhirA
            // 
            this->akhirA->AutoSize = true;
            this->akhirA->Dock = System::Windows::Forms::DockStyle::Left;
            this->akhirA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->akhirA->ForeColor = System::Drawing::Color::Black;
            this->akhirA->Location = System::Drawing::Point(0, 0);
            this->akhirA->MinimumSize = System::Drawing::Size(353, 40);
            this->akhirA->Name = L"akhirA";
            this->akhirA->Size = System::Drawing::Size(353, 40);
            this->akhirA->TabIndex = 0;
            this->akhirA->Text = L"Antrean Terbaru";
            this->akhirA->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // angkaBaruA
            // 
            this->angkaBaruA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->angkaBaruA->BackColor = System::Drawing::Color::Transparent;
            this->angkaBaruA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->angkaBaruA->ForeColor = System::Drawing::Color::Black;
            this->angkaBaruA->Location = System::Drawing::Point(2, 35);
            this->angkaBaruA->MaximumSize = System::Drawing::Size(350, 300);
            this->angkaBaruA->Name = L"angkaBaruA";
            this->angkaBaruA->Size = System::Drawing::Size(350, 70);
            this->angkaBaruA->TabIndex = 13;
            this->angkaBaruA->Text = L"0";
            this->angkaBaruA->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label3
            // 
            this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->label3->Dock = System::Windows::Forms::DockStyle::Left;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(706, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(353, 525);
            this->label3->TabIndex = 9;
            this->label3->Text = L"Loket C";
            this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label2
            // 
            this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->label2->Dock = System::Windows::Forms::DockStyle::Left;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(353, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(353, 525);
            this->label2->TabIndex = 8;
            this->label2->Text = L"Loket B";
            this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label1
            // 
            this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->label1->Dock = System::Windows::Forms::DockStyle::Left;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(0, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(353, 525);
            this->label1->TabIndex = 7;
            this->label1->Text = L"Loket A";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // LoketAntreanForm
            // 
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(1044, 573);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->MaximumSize = System::Drawing::Size(1062, 620);
            this->Name = L"LoketAntreanForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
            this->Load += gcnew System::EventHandler(this, &LoketAntreanForm::QueueCounterForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ akhirA;
private: System::Windows::Forms::Label^ angkaAntriC;
private: System::Windows::Forms::Label^ angkaAntriB;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ panjangC;
private: System::Windows::Forms::Label^ panjangB;
private: System::Windows::Forms::Label^ panjangA;
private: System::Windows::Forms::Label^ akhirC;
private: System::Windows::Forms::Label^ akhirB;
private: System::Windows::Forms::Label^ angkaPanjangC;
private: System::Windows::Forms::Label^ angkaPanjangB;
private: System::Windows::Forms::Label^ angkaPanjangA;
private: System::Windows::Forms::Label^ angkaBaruC;
private: System::Windows::Forms::Label^ angkaBaruB;
private: System::Windows::Forms::Label^ angkaBaruA;


#pragma endregion

    private:
        System::Windows::Forms::Label^ angkaAntriA;

    private:
        System::Void QueueCounterForm_Load(System::Object^ sender, System::EventArgs^ e) {
        }
    private: System::Void queueLabel_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
