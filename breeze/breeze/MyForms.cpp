#include "MyForm.h"
#define backtostring msclr::interop::marshal_as<std::string>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

void breeze::MyForm::customer_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = UserLogin;
}
void breeze::MyForm::customer_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = UserLogin;
}
void breeze::MyForm::italian_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
void breeze::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
}

void breeze::MyForm::VeggieDelightCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new veggie_delight;
	obj1->TakeOrder(ptr);
}
void breeze::MyForm::TheCheeseCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new The_cheese;
	obj1->TakeOrder(ptr);

}
void breeze::MyForm::SeekhKebabCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new seekh_kebab;
	obj1->TakeOrder(ptr);
}
void breeze::MyForm::TikkaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new tikka;
	obj1->TakeOrder(ptr);
}
void breeze::MyForm::FajitaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new fajita;
	obj1->TakeOrder(ptr);
}
void breeze::MyForm::ChilliDelightCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new chilli_delight;
	obj1->TakeOrder(ptr);

}
void breeze::MyForm::BbqBuzzCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new bbq_buzz;
	obj1->TakeOrder(ptr);
}
 void breeze::MyForm::Login_Click(System::Object^ sender, System::EventArgs^ e) {
	account test;
	string use, pass;
	use = backtostring(UsernameBox->Text);
	pass = backtostring(PasswordBox->Text);

	if (!test.import(use, pass))
	{
		incorrect->Visible = true;
	}
}