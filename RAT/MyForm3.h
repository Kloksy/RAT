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
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(42, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(42, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(184, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(42, 146);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(184, 20);
			this->textBox4->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ФИО";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Адрес";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Дата рождения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Примечание";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Добавить читателя";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(267, 242);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm3";
			this->Text = L"Читатель";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ text = "Читатели";
			try
			{
				SQLiteCommand^ cmdInsertValue = db->CreateCommand();
				cmdInsertValue->CommandText = "INSERT INTO " + text + " (ФИО,Адрес,Дата_рождения,Примечание) VALUES('" + textBox1->Text + "', '" + textBox2->Text + "', '" + textBox3->Text + "', '" + textBox4->Text + "');";
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
