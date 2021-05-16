#pragma once
#include "Convert_ed_izm.h"
extern int ed;
namespace ProjectGlazkov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Comparison
	/// </summary>
	public ref class Comparison : public System::Windows::Forms::Form
	{
	public:
		Comparison(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Comparison()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Ед. длинны", L"Ед. веса", L"Валюты", L"" });
			this->comboBox1->Location = System::Drawing::Point(12, 21);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(130, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &Comparison::comboBox1_SelectionChangeCommitted);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(100, 59);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(119, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(335, 58);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(119, 21);
			this->comboBox3->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(82, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(247, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(82, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(159, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(295, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Перевести";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Comparison::button1_Click);
			// 
			// Comparison
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(472, 105);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Comparison";
			this->Text = L"Comparison";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void comboBox1_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox1->SelectedIndex)
	{
	case 0:
		textBox1->Text = "";
		textBox2->Text = "";
		comboBox2->SelectedIndex = -1;
		comboBox2->Items->Clear();
		comboBox2->Items->Add("Км");
		comboBox2->Items->Add("М");
		comboBox2->Items->Add("См");
		comboBox2->Items->Add("Мм");

		comboBox3->SelectedIndex = -1;
		comboBox3->Items->Clear();
		comboBox3->Items->Add("Км");
		comboBox3->Items->Add("М");
		comboBox3->Items->Add("См");
		comboBox3->Items->Add("Мм");
		break;
	case 1:
		textBox1->Text = "";
		textBox2->Text = "";
		comboBox2->SelectedIndex = -1;
		comboBox2->Items->Clear();
		comboBox2->Items->Add("Т");
		comboBox2->Items->Add("Кг");
		comboBox2->Items->Add("Г");
		comboBox2->Items->Add("Мг");

		comboBox3->SelectedIndex = -1;
		comboBox3->Items->Clear();
		comboBox3->Items->Add("Т");
		comboBox3->Items->Add("Кг");
		comboBox3->Items->Add("Г");
		comboBox3->Items->Add("Мг");
		break;
	case 2:
	textBox1->Text = "";
	textBox2->Text = "";
	comboBox2->SelectedIndex = -1;
    comboBox2->Items->Clear();
	comboBox2->Items->Add("RUB");
	comboBox2->Items->Add("USD");
	comboBox2->Items->Add("EUR");
	comboBox2->Items->Add("UAH");

	comboBox3->SelectedIndex = -1;
	comboBox3->Items->Clear();
	comboBox3->Items->Add("RUB");
	comboBox3->Items->Add("USD");
	comboBox3->Items->Add("EUR");
	comboBox3->Items->Add("UAH");
	break;
	}
		
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && comboBox2->SelectedIndex != -1 && comboBox3->SelectedIndex != -1)
	{
		ed++;
		double a = Convert::ToDouble(textBox1->Text);
		int c1 = comboBox1->SelectedIndex;
		int c2 = comboBox2->SelectedIndex;
		int c3 = comboBox3->SelectedIndex;
		a = Convert_ed(c1,c2,c3,a);
		textBox2->Text = Convert::ToString(a);
	}
}
};
}
