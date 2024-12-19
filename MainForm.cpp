#include "MainForm.h"
#include "Data.h"
#include "LoadData.h"
#include "EditForm.h"
#include "ShowingForm.h"
using namespace System::IO;


using namespace System; 
using namespace System::Windows::Forms;


[System::STAThread]


void main(cli::array<System::String^>^ args) {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

	LabaFour::MainForm from;
	System::Windows::Forms::Application::Run(% from);
}
System::Void LabaFour::MainForm::ShowTariffs_Click(Object^ sender, EventArgs^ e) {
	ShowingForm^ formmm = gcnew ShowingForm(listData);
	formmm->ShowDialog();
}
System::Void LabaFour::MainForm::AddTariff_Click(Object^ sender, EventArgs^ e) {
	EditForm^ formac = gcnew EditForm(this,listData);
	formac->ShowDialog();
}

//System::Void LabaFour::MainForm::ExitApp(Object^ sender, EventArgs^ e) {
//	Application::Exit();
//}
// 
// 
// 
// 
// 
// 
// 
//Airport airport;
//System::Void LabaFour::MainForm::ShowTariffs_Click (System::Object^ sender, System::EventArgs^ e) {
//	
//	//EditForm editform;
//	//editform.ShowDialog();
//}
//System::Void LabaFour::MainForm::AddTariff_Click(System::Object^ sender, System::EventArgs^ e) {
//
//}