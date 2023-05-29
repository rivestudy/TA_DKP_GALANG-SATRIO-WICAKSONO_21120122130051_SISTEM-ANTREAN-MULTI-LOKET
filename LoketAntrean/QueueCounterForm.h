#pragma once

#include <string>

namespace QueueCounterApp {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::ComponentModel;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Windows::Forms;

    public ref class QueueCounterForm : public System::Windows::Forms::Form
    {
    private:
        Queue<int>^ queue;

    public:
        QueueCounterForm(void)
        {
            InitializeComponent();
            queue = gcnew Queue<int>();
        }

        void UpdateQueueValue(int value)
        {
            queue->Enqueue(value);
            UpdateQueueDisplay();
        }

        void DequeueQueueValue()
        {
            if (queue->Count > 0)
            {
                queue->Dequeue();
                UpdateQueueDisplay();
            }
        }

    private:
        void UpdateQueueDisplay()
        {
            String^ frontValue = queue->Count > 0 ? queue->Peek().ToString() : "-";
            String^ endValue = queue->Count > 0 ? GetLastValue().ToString() : "-";
            String^ queueLength = queue->Count.ToString();

            String^ displayText = String::Format("Front: {0}\nEnd: {1}\nLength: {2}", frontValue, endValue, queueLength);
            queueLabel->Text = displayText;
        }

        int GetLastValue()
        {
            Queue<int>^ tempQueue = gcnew Queue<int>(queue); // Create a temporary queue with the same elements

            int lastValue;
            while (tempQueue->Count > 0)
            {
                lastValue = tempQueue->Dequeue(); // Dequeue and store each element until the last one remains
            }

            return lastValue;
        }


#pragma region Windows Form Designer generated code
        void InitializeComponent()
        {
            this->queueLabel = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->akhirA = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->akhirB = (gcnew System::Windows::Forms::Label());
            this->akhirC = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panjangC = (gcnew System::Windows::Forms::Label());
            this->panjangB = (gcnew System::Windows::Forms::Label());
            this->panjangA = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // queueLabel
            // 
            this->queueLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->queueLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->queueLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->queueLabel->Location = System::Drawing::Point(3, 89);
            this->queueLabel->MaximumSize = System::Drawing::Size(350, 300);
            this->queueLabel->Name = L"queueLabel";
            this->queueLabel->Size = System::Drawing::Size(350, 196);
            this->queueLabel->TabIndex = 0;
            this->queueLabel->Text = L"0";
            this->queueLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->queueLabel->Click += gcnew System::EventHandler(this, &QueueCounterForm::queueLabel_Click);
            // 
            // panel1
            // 
            this->panel1->AutoScroll = true;
            this->panel1->BackColor = System::Drawing::Color::Linen;
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->label5);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Controls->Add(this->queueLabel);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(0, 50);
            this->panel1->MaximumSize = System::Drawing::Size(1080, 550);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1062, 525);
            this->panel1->TabIndex = 1;
            // 
            // label6
            // 
            this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label6->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(712, 89);
            this->label6->MaximumSize = System::Drawing::Size(350, 300);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(350, 196);
            this->label6->TabIndex = 12;
            this->label6->Text = L"0";
            this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(356, 89);
            this->label5->MaximumSize = System::Drawing::Size(350, 300);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(350, 196);
            this->label5->TabIndex = 11;
            this->label5->Text = L"0";
            this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Azure;
            this->panel2->Controls->Add(this->akhirC);
            this->panel2->Controls->Add(this->akhirB);
            this->panel2->Controls->Add(this->label4);
            this->panel2->Controls->Add(this->label7);
            this->panel2->Controls->Add(this->akhirA);
            this->panel2->Controls->Add(this->label8);
            this->panel2->ForeColor = System::Drawing::Color::Transparent;
            this->panel2->Location = System::Drawing::Point(0, 307);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1062, 105);
            this->panel2->TabIndex = 10;
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
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Azure;
            this->panel3->Controls->Add(this->panjangC);
            this->panel3->Controls->Add(this->panjangB);
            this->panel3->Controls->Add(this->panjangA);
            this->panel3->Controls->Add(this->label9);
            this->panel3->Controls->Add(this->label10);
            this->panel3->Controls->Add(this->label11);
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
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::Black;
            this->label4->Location = System::Drawing::Point(711, 35);
            this->label4->MaximumSize = System::Drawing::Size(350, 300);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(350, 70);
            this->label4->TabIndex = 15;
            this->label4->Text = L"0";
            this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label7
            // 
            this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::Black;
            this->label7->Location = System::Drawing::Point(355, 35);
            this->label7->MaximumSize = System::Drawing::Size(350, 300);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(350, 70);
            this->label7->TabIndex = 14;
            this->label7->Text = L"0";
            this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::Black;
            this->label8->Location = System::Drawing::Point(2, 35);
            this->label8->MaximumSize = System::Drawing::Size(350, 300);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(350, 70);
            this->label8->TabIndex = 13;
            this->label8->Text = L"0";
            this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label9
            // 
            this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::Black;
            this->label9->Location = System::Drawing::Point(709, 35);
            this->label9->MaximumSize = System::Drawing::Size(350, 300);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(350, 70);
            this->label9->TabIndex = 18;
            this->label9->Text = L"0";
            this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label10
            // 
            this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::Black;
            this->label10->Location = System::Drawing::Point(353, 35);
            this->label10->MaximumSize = System::Drawing::Size(350, 300);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(350, 70);
            this->label10->TabIndex = 17;
            this->label10->Text = L"0";
            this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label11
            // 
            this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::Black;
            this->label11->Location = System::Drawing::Point(0, 35);
            this->label11->MaximumSize = System::Drawing::Size(350, 300);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(350, 70);
            this->label11->TabIndex = 16;
            this->label11->Text = L"0";
            this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // QueueCounterForm
            // 
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(1062, 596);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->MaximumSize = System::Drawing::Size(1062, 596);
            this->Name = L"QueueCounterForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
            this->Load += gcnew System::EventHandler(this, &QueueCounterForm::QueueCounterForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->ResumeLayout(false);

        }
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ akhirA;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ panjangC;

private: System::Windows::Forms::Label^ panjangB;

private: System::Windows::Forms::Label^ panjangA;

private: System::Windows::Forms::Label^ akhirC;
private: System::Windows::Forms::Label^ akhirB;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;

#pragma endregion

    private:
        System::Windows::Forms::Label^ queueLabel;

    private:
        System::Void QueueCounterForm_Load(System::Object^ sender, System::EventArgs^ e) {
        }
    private: System::Void queueLabel_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
