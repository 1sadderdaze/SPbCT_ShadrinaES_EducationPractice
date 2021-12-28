#pragma once
#include "DLL.h" // подключение созданной DLL-библиотеки
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <mutex>
#include <iterator>
#include <chrono>
#include <iomanip>
#include <fileapi.h>

namespace EducationPractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Threading;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			DateTime datetime = DateTime::Now;
			this->label4->Text = "Дата: " + datetime.ToString(); // запись времени и даты в label 4 
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: Thread^ t1;
	private: Thread^ t2; // создание потоков

	private: System::Windows::Forms::Button^ SortFileButton;
	private: System::Windows::Forms::Button^ File1CreateButton;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SortFileButton = (gcnew System::Windows::Forms::Button());
			this->File1CreateButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(30, 267);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(452, 286);
			this->textBox1->TabIndex = 0;
			
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-1, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 32);
			this->label1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(690, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 32);
			this->label2->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(531, 267);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(452, 286);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(524, 32);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Шадрина Элина Сергеевна  Группа: 500";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(561, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 32);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Дата:";
			// 
			// SortFileButton
			// 
			this->SortFileButton->BackColor = System::Drawing::Color::Transparent;
			this->SortFileButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SortFileButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortFileButton->Location = System::Drawing::Point(531, 559);
			this->SortFileButton->Name = L"SortFileButton";
			this->SortFileButton->Size = System::Drawing::Size(452, 66);
			this->SortFileButton->TabIndex = 5;
			this->SortFileButton->Text = L"Отобразить отсортированный файл ";
			this->SortFileButton->UseVisualStyleBackColor = false;
			this->SortFileButton->Click += gcnew System::EventHandler(this, &MyForm::SortFileButton_Click);
			// 
			// File1CreateButton
			// 
			this->File1CreateButton->BackColor = System::Drawing::Color::Transparent;
			this->File1CreateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->File1CreateButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->File1CreateButton->Location = System::Drawing::Point(30, 559);
			this->File1CreateButton->Name = L"File1CreateButton";
			this->File1CreateButton->Size = System::Drawing::Size(452, 66);
			this->File1CreateButton->TabIndex = 1;
			this->File1CreateButton->Text = L"Отобразить исходный файл";
			this->File1CreateButton->UseVisualStyleBackColor = false;
			this->File1CreateButton->Click += gcnew System::EventHandler(this, &MyForm::File1CreateButton_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(86, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(248, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Имя пользователя";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(86, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 32);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Пароль";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(406, 75);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(452, 26);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(406, 131);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(452, 26);
			this->textBox4->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(361, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(284, 64);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Авторизоваться";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1026, 652);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->SortFileButton);
			this->Controls->Add(this->File1CreateButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void File1CreateButton_Click(System::Object^ sender, System::EventArgs^ e) { // кнопка для заполнения файла 100 буквами, если это не было сделано вручную
		srand(time(NULL));
		char letters[100];
		fstream file1; // создание объекта класса fstream 
		file1.open("1.txt"); // связывание объекта класса fstream с файлом, который будет использоваться для операций ввода-вывода
		for (int i = 0; i < 100; i++)
		{
			letters[i] = (rand() % ('я' - 'а' + 1)) + 'а'; //присваиваем букве рандомное значение из алфавита
			file1 << letters[i]; // добавляем букву в файл
		}
		file1.close(); //закрываем файл

		String^ file1Path = "1.txt"; // создаем переменную для хранения пути к файлу
		try
		{
			String^ file = File::ReadAllText(file1Path, System::Text::Encoding::GetEncoding(1251)); //открываем файл
			textBox1->Text = file; //записываем содержимое файла в TextBox
		}
		catch (Exception^ e)
		{
			MessageBox::Show(this, "Файл не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	public: void T1() { //функция для передачи 1-му потоку
		char letter[100];
		ifstream file1;
		std::vector<char> v1, v2, v3, v4, v5; //инициализация векторов
		file1.open("1.txt");
		for (int i = 0; i < 10; i++)
		{
			file1 >> letter[i]; //присваиваем переменной списка значение буквы из файла
			v1.push_back(letter[i]); //добавляем эту букву в вектор
		}
		sort(v1.begin(), v1.end()); // сортировка вектора по алфавиту
		v1[9] = '*'; // замена в 1-ом векторе 9-ой буквы на звездочку
		writeToFile2(v1); //обращение к функции из созданной DLL-библиотеки, которая записывает отсортированный вектор во 2-файл (2.txt)
		for (int i = 10; i < 20; i++)
		{
			file1 >> letter[i];
			v2.push_back(letter[i]);
		}
		sort(v2.begin(), v2.end());
		v2[8] = '*';
		writeToFile2(v2);
		for (int i = 20; i < 30; i++)
		{
			file1 >> letter[i];
			v3.push_back(letter[i]);
		}
		sort(v3.begin(), v3.end());
		v3[7] = '*';
		writeToFile2(v3);
		for (int i = 30; i < 40; i++)
		{
			file1 >> letter[i];
			v4.push_back(letter[i]);
		}
		sort(v4.begin(), v4.end());
		v4[6] = '*';
		writeToFile2(v4);
		for (int i = 40; i < 50; i++)
		{
			file1 >> letter[i];
			v5.push_back(letter[i]);
		}
		sort(v5.begin(), v5.end());
		v5[5] = '*';
		writeToFile2(v5);
		file1.close();
	}
	public: void T2() { //функция для передачи 2-му потоку
		char letter[100];
		ifstream file1;
		std::vector<char> v6, v7, v8, v9, v10;
		file1.open("1.txt");
		for (int i = 50; i < 60; i++)
		{
			file1 >> letter[i];
			v6.push_back(letter[i]);
		}
		sort(v6.begin(), v6.end());
		v6[4] = '*';
		writeToFile2(v6);
		for (int i = 60; i < 70; i++)
		{
			file1 >> letter[i];
			v7.push_back(letter[i]);
		}
		sort(v7.begin(), v7.end());
		v7[3] = '*';
		writeToFile2(v7);
		for (int i = 70; i < 80; i++)
		{
			file1 >> letter[i];
			v8.push_back(letter[i]);
		}
		sort(v8.begin(), v8.end());
		v8[2] = '*';
		writeToFile2(v8);
		for (int i = 80; i < 90; i++)
		{
			file1 >> letter[i];
			v9.push_back(letter[i]);
		}
		sort(v9.begin(), v9.end());
		v9[1] = '*';
		writeToFile2(v9);
		for (int i = 90; i < 100; i++)
		{
			file1 >> letter[i];
			v10.push_back(letter[i]);
		}
		sort(v10.begin(), v10.end());
		v10[0] = '*';
		writeToFile2(v10);
		file1.close();
	}

	private: System::Void SortFileButton_Click(System::Object^ sender, System::EventArgs^ e) { //кнопка для отображения содержимого 2-го отсортированного файла (2.txt) в textbox2
		LPSTR lpFileName = "2.txt";// создаем переменную для хранения пути к файлу
		SetFileAttributesA("2.txt", FILE_ATTRIBUTE_NORMAL); // ставим стандартные атрибуты
		fstream ofs;
		ofs.open(lpFileName, ios::out | ios::trunc); // стираем содержимое файла
		ofs.close(); // закрываем поток
		t1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::T1)); //создаем поток, выполняющий функцию T1
		t2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::T2));
		t1->Start(); // начинаем поток
		t1->Join(); // функция для блокировки вызывающегося потока до тех пор, пока поток выполнения не завершится
		t2->Start();
		t2->Join();
		String^ file2Path = "2.txt";
		try
		{
			String^ file = File::ReadAllText(file2Path, System::Text::Encoding::GetEncoding(1251)); //открываем файл
			textBox2->Text = file; //записываем содержимое файла в TextBox
			SetFileAttributesA(lpFileName, FILE_ATTRIBUTE_READONLY);
		}
		catch (Exception^ e)
		{
			MessageBox::Show(this, "Файл не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text->ToLower() == "500" && textBox3->Text == "qwerty") {
		MessageBox::Show("Успешно", "Авторизация", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Неверные логин или пароль", "Ошибка!", MessageBoxButtons::OK);
	}
}
};
}