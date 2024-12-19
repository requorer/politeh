#pragma once
#include "LoadData.h"
#include "MainForm.h"
#include <vector>
#include "EditForm.h"
namespace LabaFour {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� ShowingForm
	/// </summary>
	public ref class ShowingForm : public System::Windows::Forms::Form
	{
	private:
		std::vector<Data_>* listdata2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
		   Generic::List<ManagedData^>^ managedDataList;
	public:
		ShowingForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		ShowingForm(Generic::List<ManagedData^>^ listData) {
			InitializeComponent();
			managedDataList = listData;
			dataGridView1->DataSource = nullptr;
			dataGridView1->DataSource = managedDataList;
		}
		//ShowingForm(std::vector<Data_>* listdata) {
		//	InitializeComponent();
		//	listdata2 = listdata;
		//	//managedDataList = gcnew List<ManagedData^>();
		//	//for (auto& item : *listdata2)
		//	//{
		//	//	//managedDataList->Add(gcnew ManagedData(item.GetDest(), item.GetPrice()));
		//	//}
		//	dataGridView1->DataSource = managedDataList;
		//}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~ShowingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;
		static bool CompareByDestination(const Data_& a, const Data_& b)
		{
			return a.GetDest() < b.GetDest();
		}
		static bool CompareByPrice(const Data_& a, const Data_& b)
		{
			return a.GetPrice() < b.GetPrice();
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(695, 332);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ShowingForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(764, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"������������� �� ���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ShowingForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(764, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"������������� �� �����������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ShowingForm::button2_Click);
			// 
			// ShowingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(973, 388);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ShowingForm";
			this->Text = L"ShowingForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {};

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {};
};
}
