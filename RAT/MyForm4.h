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
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=\"BIBLIOTEKA.db\"";
			db->Open();
		}
	private: System::Windows::Forms::ComboBox^ comboBox3;
	public:
		SQLiteConnection^ db;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(42, 75);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(177, 20);
			this->textBox3->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(42, 153);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(42, 192);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Выдать книгу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Дата и время выдачи";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Дата и время возврата";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Кем выдана";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Кому выдана(ID)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Книга(Инвентарный номер)";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(42, 113);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(177, 21);
			this->comboBox3->TabIndex = 11;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(255, 284);
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
			this->Name = L"MyForm4";
			this->Text = L"Выдача книги";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ text = "Выдача_книг";
			try
			{
				SQLiteCommand^ cmdInsertValue = db->CreateCommand();
				cmdInsertValue->CommandText = "INSERT INTO " + text + " (Дата_и_время_выдачи,Дата_и_время_возврата,Кем_выдана,Кому_выдана_ID,Книга_Инвентарный_номер) VALUES('" + textBox1->Text + "', '" + textBox3->Text + "', '" + comboBox3->Text + "', " + comboBox1->Text + ", " + comboBox2->Text +");";
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
