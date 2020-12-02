#pragma once
#include <windows.h>
#include <cliext/vector>

namespace RAT {
	using namespace cliext;
	using namespace System::Data::SQLite;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=\"BIBLIOTEKA.db\"";
			db->Open();
		}
		SQLiteConnection^ db;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox3;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(48, 112);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(177, 21);
			this->comboBox3->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Книга(Инвентарный номер)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Кем возвращена(ID)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Кому возвращена";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Дата и время возврата";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Примечание/штраф";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Выдать книгу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(48, 35);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 21);
			this->comboBox2->TabIndex = 15;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(48, 75);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 21);
			this->comboBox1->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(48, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(177, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(48, 191);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 47);
			this->textBox1->TabIndex = 12;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 279);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm5";
			this->Text = L"Возврат книги";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = "Возврат_книг";
	try
	{
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "INSERT INTO " + text + " (Книга_Инвентарный_номер,Кем_возвращена_ID,Кому,Дата_возврата,Примечание) VALUES(" + comboBox2->Text + ", " + comboBox1->Text + ", '" + comboBox3->Text + "', '" + textBox3->Text + "', '" + textBox1->Text + "');";
		cmdInsertValue->ExecuteNonQuery();
		Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
	}
}
};
}
