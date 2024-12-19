#pragma once
#include "MainForm.h"
#include "LoadData.h"
#include <vector>
#include <algorithm>


namespace LabaFour {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
		MainForm^ parentForm;
		Generic::List<int>^ list;
		Generic::List<ManagedData^>^ listData2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
		   /*BindingList<ManagedData^>^ managedDataList;*/
	public:
		//EditForm(void)
		//{
		//	InitializeComponent();
		//	listData2 = ;
		//}
		EditForm(MainForm^ parentForm_, Generic::List<ManagedData^>^ listData)
		{
			InitializeComponent();

			parentForm = parentForm_;
			listData2 = listData;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:








	protected:

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(460, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 178);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(213, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Добавление нового рейса";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(22, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Место прибытия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(22, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Стоимость билета";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(485, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 31);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditForm::button1_Click);
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(795, 336);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"EditForm";
			this->Text = L"EditForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}