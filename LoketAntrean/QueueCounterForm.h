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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(QueueCounterForm::typeid));
            this->queueLabel = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // queueLabel
            // 
            this->queueLabel->AutoSize = true;
            this->queueLabel->Location = System::Drawing::Point(191, 202);
            this->queueLabel->Name = L"queueLabel";
            this->queueLabel->Size = System::Drawing::Size(16, 17);
            this->queueLabel->TabIndex = 0;
            this->queueLabel->Text = L"0";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Linen;
            this->panel1->Controls->Add(this->queueLabel);
            this->panel1->Location = System::Drawing::Point(61, 42);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(945, 487);
            this->panel1->TabIndex = 1;
            // 
            // QueueCounterForm
            // 
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1054, 595);
            this->Controls->Add(this->panel1);
            this->Name = L"QueueCounterForm";
            this->Load += gcnew System::EventHandler(this, &QueueCounterForm::QueueCounterForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
    private: System::Windows::Forms::Panel^ panel1;
#pragma endregion

    private:
        System::Windows::Forms::Label^ queueLabel;

    private:
        System::Void QueueCounterForm_Load(System::Object^ sender, System::EventArgs^ e) {
        }
    };
}
