#include "EditForm.h"
#include "Data.h"
#include "LoadData.h"
#include "MainForm.h"
using namespace System::IO;


using namespace System;
using namespace System::Windows::Forms;



System::Void LabaFour::EditForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::String^ destination;
	System::String^ price_;
	int price;
	destination = textBox1->Text;
	price_ = textBox2->Text;
	price = System::Int32::Parse(price_);
	listData2->Add(gcnew ManagedData(destination, price_));
	textBox1->Clear();
	textBox2->Clear();
}
