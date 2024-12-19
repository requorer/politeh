#pragma once
#include "LoadData.h"
#include <vector>
namespace LabaFour {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		Generic::List<ManagedData^>^ listData;
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			listData = gcnew Generic::List<ManagedData^>();
		}
		Void ListDataAdd(System::String^ destination_, System::String^ price_) 
		{
			ManagedData^ DATAAA = gcnew ManagedData(destination_, price_);
			listData->Add(DATAAA);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ShowTariffs;

	private: System::Windows::Forms::Button^ AddTariff;

	protected:


	private: System::Windows::Forms::Label^ label1;


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
			this->ShowTariffs = (gcnew System::Windows::Forms::Button());
			this->AddTariff = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ShowTariffs
			// 
			this->ShowTariffs->Location = System::Drawing::Point(161, 216);
			this->ShowTariffs->Name = L"ShowTariffs";
			this->ShowTariffs->Size = System::Drawing::Size(204, 67);
			this->ShowTariffs->TabIndex = 0;
			this->ShowTariffs->Text = L"Показать текущие тарифы и самый дорогой из них";
			this->ShowTariffs->UseVisualStyleBackColor = true;
			this->ShowTariffs->Click += gcnew System::EventHandler(this, &MainForm::ShowTariffs_Click);
			// 
			// AddTariff
			// 
			this->AddTariff->Location = System::Drawing::Point(516, 216);
			this->AddTariff->Name = L"AddTariff";
			this->AddTariff->Size = System::Drawing::Size(208, 67);
			this->AddTariff->TabIndex = 0;
			this->AddTariff->Text = L"Добавить новые тарифы";
			this->AddTariff->UseVisualStyleBackColor = true;
			this->AddTariff->Click += gcnew System::EventHandler(this, &MainForm::AddTariff_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(110, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(717, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Меню управления тарифами аэропорта";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 356);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AddTariff);
			this->Controls->Add(this->ShowTariffs);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShowTariffs_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddTariff_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
