#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include "FillStrokDLL.h"

//���������� ������ ��� �����.
char stroki[200], stroki1[200];
std::vector<char> v1(20), v2(20), v3(20), v4(20), v5(20), v6(20), v7(20), v8(20), v9(20), v10(20);
//���� �������
DWORD WINAPI thread1(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 0; i < 20; i++)
	{
		v1.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread2(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 20; i < 40; i++)
	{
		v2.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread3(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 40; i < 60; i++)
	{
		v3.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread4(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 60; i < 80; i++)
	{
		v4.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread5(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 80; i < 100; i++)
	{
		v5.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread6(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 100; i < 120; i++)
	{
		v6.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread7(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 120; i < 140; i++)
	{
		v7.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread8(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 140; i < 160; i++)
	{
		v8.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread9(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 160; i < 180; i++)
	{
		v9.at(j) = stroki[i];
		j++;
	}
	return 0;
}

DWORD WINAPI thread10(LPVOID lpParam)
{
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 180; i < 200; i++)
	{
		v10.at(j) = stroki[i];
		j++;
	}
	return 0;
}

namespace Practos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  DataTime;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  Fill;
	private: System::Windows::Forms::Button^  output;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DataTime = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Fill = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����������";
			// 
			// DataTime
			// 
			this->DataTime->AutoSize = true;
			this->DataTime->Location = System::Drawing::Point(12, 22);
			this->DataTime->Name = L"DataTime";
			this->DataTime->Size = System::Drawing::Size(7, 13);
			this->DataTime->TabIndex = 1;
			this->DataTime->Text = L"\r\n";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 53);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(249, 190);
			this->dataGridView1->TabIndex = 2;
			// 
			// Fill
			// 
			this->Fill->Location = System::Drawing::Point(12, 264);
			this->Fill->Name = L"Fill";
			this->Fill->Size = System::Drawing::Size(96, 23);
			this->Fill->TabIndex = 3;
			this->Fill->Text = L"��������� csv";
			this->Fill->UseVisualStyleBackColor = true;
			this->Fill->Click += gcnew System::EventHandler(this, &MyForm::Fill_Click);
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(114, 264);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(97, 23);
			this->output->TabIndex = 4;
			this->output->Text = L"������� � txt";
			this->output->UseVisualStyleBackColor = true;
			this->output->Click += gcnew System::EventHandler(this, &MyForm::output_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(376, 299);
			this->Controls->Add(this->output);
			this->Controls->Add(this->Fill);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->DataTime);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//����� ����
		time_t now = time(0);
		tm *ltm = localtime(&now);
		int year = 1900 + ltm->tm_year, month = 1 + ltm->tm_mon, day = ltm->tm_mday, time = ltm->tm_hour,
			min = ltm->tm_min, sec = ltm->tm_sec;
		DataTime->Text += " ";
		DataTime->Text += day.ToString();
		DataTime->Text += ".";
		DataTime->Text += month.ToString();
		DataTime->Text += ".";
		DataTime->Text += year.ToString();
		DataTime->Text += " ";
		if (time < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += time.ToString();
		}
		else
			DataTime->Text += time.ToString();
		DataTime->Text += ":";
		if (min < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += min.ToString();
		}
		else
			DataTime->Text += min.ToString();
		DataTime->Text += ":";
		if (sec < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += sec.ToString();
		}
		else
			DataTime->Text += sec.ToString();
	}
	private: System::Void Fill_Click(System::Object^  sender, System::EventArgs^  e) {
		wchar_t c;
		char c8;
		//�������� �������
		dataGridView1 ->Columns->Clear();
		dataGridView1->ColumnCount = 10;
		dataGridView1->RowCount = 10;
		//�������� � ���������� ����� csv.
		HANDLE a = CreateFile(L"table.csv", GENERIC_READ | GENERIC_WRITE, 0, 0, CREATE_ALWAYS,
			FILE_ATTRIBUTE_NORMAL, 0);
		CloseHandle(a);
		ofstream b("table.csv");
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[0]->Width = 20;
			this->dataGridView1->Rows[0]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[1]->Width = 20;
			this->dataGridView1->Rows[1]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[2]->Width = 20;
			this->dataGridView1->Rows[2]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[3]->Width = 20;
			this->dataGridView1->Rows[3]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[4]->Width = 20;
			this->dataGridView1->Rows[4]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[5]->Width = 20;
			this->dataGridView1->Rows[5]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[6]->Width = 20;
			this->dataGridView1->Rows[6]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[7]->Width = 20;
			this->dataGridView1->Rows[7]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[8]->Width = 20;
			this->dataGridView1->Rows[8]->Cells[i]->Value = c;
		}
		b << endl;
		for (int i = 0; i < 10; i++)
		{
			c = char('a' + rand() % ('z' - 'a'));
			c8 = c;
			b << c8 << ';';
			dataGridView1->Columns[9]->Width = 20;
			this->dataGridView1->Rows[9]->Cells[i]->Value = c;
		}
		b.close();
	}

private: System::Void output_Click(System::Object^  sender, System::EventArgs^  e) {
	//�������� txt �����
	HANDLE k = CreateFile(L"output.txt", GENERIC_READ | GENERIC_WRITE, 0, 0, CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL, 0);
	CloseHandle(k);
	//������� �������� ������ ��� �������� � DLL 
	HANDLE hPipe = CreateNamedPipe(L"//.//pipe/stroki", PIPE_ACCESS_OUTBOUND, PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
		PIPE_UNLIMITED_INSTANCES, 1024, 1024, INFINITE, 0);
	HANDLE a = CreateFile(L"table.csv", GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL, 0);
	ReadFile(a, stroki, sizeof(stroki1), 0, 0);
	WriteFile(hPipe, stroki, sizeof(stroki1), 0, 0);
	CloseHandle(hPipe);
	CloseHandle(a);
	//������������� DLL � �������.
	stroki[200] = fill(&stroki[0]);
	int nt1 = 1, nt2 = 2, nt3 = 3, nt4 = 4, nt5 = 5, nt6 = 6, nt7 = 7, nt8 = 8, nt9 = 9, nt10 = 10;
	HANDLE fillstr1 = CreateThread(0, 0, thread1, &nt1, 0, 0);
	HANDLE fillstr2 = CreateThread(0, 0, thread2, &nt2, 0, 0);
	HANDLE fillstr3 = CreateThread(0, 0, thread3, &nt3, 0, 0);
	HANDLE fillstr4 = CreateThread(0, 0, thread4, &nt4, 0, 0);
	HANDLE fillstr5 = CreateThread(0, 0, thread5, &nt5, 0, 0);
	HANDLE fillstr6 = CreateThread(0, 0, thread6, &nt6, 0, 0);
	HANDLE fillstr7 = CreateThread(0, 0, thread7, &nt7, 0, 0);
	HANDLE fillstr8 = CreateThread(0, 0, thread8, &nt8, 0, 0);
	HANDLE fillstr9 = CreateThread(0, 0, thread9, &nt9, 0, 0);
	HANDLE fillstr10 = CreateThread(0, 0, thread10, &nt10, 0, 0);
	HANDLE mass[10];
	mass[0] = fillstr1;
	mass[1] = fillstr2;
	mass[2] = fillstr3;
	mass[3] = fillstr4;
	mass[4] = fillstr5;
	mass[5] = fillstr6;
	mass[6] = fillstr7;
	mass[7] = fillstr8;
	mass[8] = fillstr9;
	mass[9] = fillstr10;
	WaitForMultipleObjects(10, mass, TRUE, INFINITE);//��� ��������� ���� �������
	CloseHandle(fillstr1);
	CloseHandle(fillstr2);
	CloseHandle(fillstr3);
	CloseHandle(fillstr4);
	CloseHandle(fillstr5);
	CloseHandle(fillstr6);
	CloseHandle(fillstr7);
	CloseHandle(fillstr8);
	CloseHandle(fillstr9);
	CloseHandle(fillstr10);
	//���������� ����� txt.
	ofstream ftxt("output.txt");
	for (int i = 0; i < 20; i++)
	{
		ftxt << v1[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v2[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v3[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v4[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v5[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v6[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v7[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v8[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v9[i];
	}
	ftxt << endl;
	for (int i = 0; i < 20; i++)
	{
		ftxt << v10[i];
	}
	ftxt.close();
}
};
}
