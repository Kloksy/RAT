#pragma once
#include <cliext/vector>
#include"MyForm1.h"
#include"MyForm2.h"
#include"MyForm3.h"
#include"MyForm4.h"
#include"MyForm5.h"

namespace RAT {

	using namespace cliext;
	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=\"BIBLIOTEKA.db\"";
			db->Open();
		}

	public:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button7;



		SQLiteConnection^ db;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;

		   String^ text;
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
			db->Close();
			Application::ExitThread();
		}

	protected:


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 112);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1101, 414);
			this->dataGridView1->TabIndex = 3;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"BIBLIOTEKA.db";
			this->openFileDialog1->Filter = L"(*.db)|*.db";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1026, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"����������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(308, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 35);
			this->button4->TabIndex = 6;
			this->button4->Text = L"������ ����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(456, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 35);
			this->button5->TabIndex = 7;
			this->button5->Text = L"������� ����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 53);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(142, 25);
			this->button6->TabIndex = 8;
			this->button6->Text = L"�������� �����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(160, 53);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(142, 25);
			this->button8->TabIndex = 10;
			this->button8->Text = L"�������� ��������";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(308, 53);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(142, 25);
			this->button10->TabIndex = 12;
			this->button10->Text = L"������ �����";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(456, 53);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(142, 25);
			this->button12->TabIndex = 14;
			this->button12->Text = L"������� �����";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(604, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 66);
			this->button7->TabIndex = 15;
			this->button7->Text = L"������� ������";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(778, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 20);
			this->textBox1->TabIndex = 16;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(990, 83);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 23);
			this->button9->TabIndex = 17;
			this->button9->Text = L"�����";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(913, 536);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1125, 568);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"����������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		DataTable^ fillDataTable(String^ text) {
			DataTable^ table;
			try
			{
				SQLiteCommand^ cmdSelect = db->CreateCommand();
				cmdSelect->CommandText = "SELECT * FROM "+text+";";
				SQLiteDataReader^ reader = cmdSelect->ExecuteReader();

				//����������
				DataColumn^ column; //������� �������
				DataRow^ row; //������ �������

				//������� ������� ������
				table = gcnew DataTable();

				//������ �������� ��������
				vector<String^>^ nameColumns = gcnew vector<String^>();

				//�������� ������ � ��������
				for (int i = 0; i < reader->FieldCount; i++) {
					nameColumns->push_back(reader->GetName(i));
					column = gcnew DataColumn(nameColumns->at(i), String::typeid);
					table->Columns->Add(column);
				}

				//��������� �� ������ ������
				while (reader->Read()) {
					//��������� ������� �������
					row = table->NewRow();
					//� ������ ������ ��������� �� ���� ��������
					for (int i = 0; i < reader->FieldCount; i++) {
						//��������� �������� ������� � row
						row[nameColumns->at(i)] = reader->GetValue(i)->ToString();
						reader->GetValue(i)->ToString();
					}
					table->Rows->Add(row);
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
			}
			return table;
		}
		DataTable^ fillDataTable() {
			DataTable^ table;
			try
			{
				SQLiteCommand^ cmda = db->CreateCommand();
				cmda->CommandText = "SELECT name FROM sqlite_master WHERE type='table' ORDER BY name;";
				SQLiteCommand^ cmdSelect = db->CreateCommand();
				cmdSelect->CommandText = "SELECT * FROM name;";
				SQLiteDataReader^ reader = cmdSelect->ExecuteReader();

				//����������
				DataColumn^ column; //������� �������
				DataRow^ row; //������ �������

				//������� ������� ������
				table = gcnew DataTable();

				//������ �������� ��������
				vector<String^>^ nameColumns = gcnew vector<String^>();

				//�������� ������ � ��������
				for (int i = 0; i < reader->FieldCount; i++) {
					nameColumns->push_back(reader->GetName(i));
					column = gcnew DataColumn(nameColumns->at(i), String::typeid);
					table->Columns->Add(column);
				}

				//��������� �� ������ ������
				while (reader->Read()) {
					//��������� ������� �������
					row = table->NewRow();
					//� ������ ������ ��������� �� ���� ��������
					for (int i = 0; i < reader->FieldCount; i++) {
						//��������� �������� ������� � row
						row[nameColumns->at(i)] = reader->GetValue(i)->ToString();
						reader->GetValue(i)->ToString();
					}
					table->Rows->Add(row);
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
			}
			return table;
		}
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
				text = "�����";
				String^ fileName = openFileDialog1->FileName;

				try
				{
					DataTable^ table = fillDataTable(text);
					dataGridView1->DataSource = table;
				}
				catch (Exception^ e)
				{
					MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
				}
		}
		   System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
				   text = "��������";
				   String^ fileName = openFileDialog1->FileName;

				   try
				   {
					   DataTable^ table = fillDataTable(text);

					   dataGridView1->DataSource = table;
				   }
				   catch (Exception^ e)
				   {
					   MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
				   }
		   }
		   System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
				   text = "����������";
				   String^ fileName = openFileDialog1->FileName;

				   try
				   {
					   DataTable^ table = fillDataTable(text);

					   dataGridView1->DataSource = table;
				   }
				   catch (Exception^ e)
				   {
					   MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
				   }
			   }
		   System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
				   text = "������_����";
				   String^ fileName = openFileDialog1->FileName;

				   try
				   {
					   DataTable^ table = fillDataTable(text);

					   dataGridView1->DataSource = table;
				   }
				   catch (Exception^ e)
				   {
					   MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
				   }
			}
		   System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
				   text = "�������_����";
				   String^ fileName = openFileDialog1->FileName;
				   try
				   {
					   DataTable^ table = fillDataTable(text);
					   dataGridView1->DataSource = table;
				   }
				   catch (Exception^ e)
				   {
					   MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
				   }
			}
		   System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   text = "�����";
			   MyForm2^ form2 = gcnew MyForm2();
			   form2->ShowDialog();
			   try
			   {
				   DataTable^ table = fillDataTable(text);
				   dataGridView1->DataSource = table;
			   }
			   catch (Exception^ e)
			   {
				   MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
			   }
		   }
		   System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   text = "��������";
			   MyForm3^ form3 = gcnew MyForm3();
			   form3->ShowDialog();
			   try
			   {
				   DataTable^ table = fillDataTable(text);
				   dataGridView1->DataSource = table;
			   }
			   catch (Exception^ e)
			   {
				   MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
			   }
		   }
		   System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   text = "������_����";
			   MyForm4^ form = gcnew MyForm4();
			   form->ShowDialog();
			   try
			   {
				   DataTable^ table = fillDataTable(text);
				   dataGridView1->DataSource = table;
			   }
			   catch (Exception^ e)
			   {
				   MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
			   }
		   }
		   System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   text = "�������_����";
			   MyForm5^ form = gcnew MyForm5();
			   form->ShowDialog();
			   try
			   {
				   DataTable^ table = fillDataTable(text);
				   dataGridView1->DataSource = table;
			   }
			   catch (Exception^ e)
			   {
				   MessageBox::Show("Error Working SQL: " + e->ToString(), "Exception ...");
			   }
		   }
		   System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   //����� ���������� ������
			   int index = dataGridView1->CurrentCell->RowIndex;
			   int index1 = dataGridView1->CurrentCell->ColumnIndex;
			   String^ a = dataGridView1->Rows[index]->Cells[index1]->Value->ToString();
			   try
			   {
				   SQLiteCommand^ cmdInsertValue = db->CreateCommand();
				   cmdInsertValue->CommandText = "DELETE FROM " + text + " WHERE " + dataGridView1->Columns[index1]->Name + " = '" + a+ "';";
				   cmdInsertValue->ExecuteNonQuery();

				   DataTable^ table = fillDataTable(text);

				   dataGridView1->DataSource = table;
			   }
			   catch (Exception^ e)
			   {
				   MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
			   }
		   }
private: 
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->RowCount - 1; i++)
	{
		dataGridView1->Rows[i]->Selected = false;
		for (int j = 0; j < dataGridView1->ColumnCount - 1; j++)
		{
			if (dataGridView1->Rows[i]->Cells[j]->Value != NULL)
			{
				if (dataGridView1->Rows[i]->Cells[j]->Value->ToString() == textBox1->Text)
				{
					dataGridView1->CurrentCell = dataGridView1->Rows[i]->Cells[j];
					dataGridView1->FirstDisplayedScrollingRowIndex = i;
					break;
				}
			}
		}
	}

}
};
};