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
	tabControl1->SelectedTab = FlavourSelect;
}
void breeze::MyForm::italian_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
void breeze::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	order->PlaceOrder(Pizza);
}

void breeze::MyForm::VeggieDelightCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ptr = new veggie_delight;
	Pizza->SaveFlavour(ptr);
}
void breeze::MyForm::TheCheeseCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ptr = new The_cheese;
	Pizza->SaveFlavour(ptr);
	TheCheeseMisc1->Visible = true;
	TheCheeseMisc2->Visible = true;
	TheCheeseMisc3->Visible = true;

}
void breeze::MyForm::SeekhKebabCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ptr = new seekh_kebab;
	Pizza->SaveFlavour(ptr);
	SeekhKebabMisc1->Visible = true;
	SeekhKebabMisc2->Visible = true;
}
void breeze::MyForm::TikkaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ptr = new tikka;
	Pizza->SaveFlavour(ptr);
	TikkaMisc1->Visible = true;
	TikkaMisc2->Visible = true;
}
void breeze::MyForm::FajitaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ptr = new fajita;
	Pizza->SaveFlavour(ptr);
	FajitaMisc1->Visible = true;
	FajitaMisc2->Visible = true;
}
void breeze::MyForm::ChilliDelightCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ptr = new chilli_delight;
	Pizza->SaveFlavour(ptr);
	ChilliDelightMisc1->Visible = true;
	ChilliDelightMisc2->Visible = true;

	
}
void breeze::MyForm::BbqBuzzCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ptr = new bbq_buzz;
	Pizza->SaveFlavour(ptr);
	BBQBuzzMisc1->Visible = true;
	BBQBuzzMisc2->Visible = true;

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
 void breeze::MyForm::Signup_Click(System::Object^ sender, System::EventArgs^ e) {
	 tabControl1->SelectedTab = SignUpPage;
 }
 Void breeze::MyForm:: TikkaMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 tikka *Tikka=new tikka;
	 Pizza->MiscCal("chicken", Tikka->set_chicken(true));
 }
Void breeze::MyForm:: TikkaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	tikka *Tikka=new tikka;
	Pizza->MiscCal("Beef", Tikka->set_beef(true));
}
Void breeze::MyForm::FajitaMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	fajita* Fajita = new fajita;
	Pizza->MiscCal("Mexican Style", Fajita->set_meat("mexican style"));
}
Void breeze::MyForm::FajitaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	fajita* Fajita = new fajita;
	Pizza->MiscCal("Traditional Style", Fajita->set_meat("traditional style"));
}
Void breeze::MyForm::ChilliDelightMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	chilli_delight* ChilliDelight = new chilli_delight;
	Pizza->MiscCal("Red Chilli", ChilliDelight->set_chilli("red"));
}
Void breeze::MyForm::ChilliDelightMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	chilli_delight* ChilliDelight = new chilli_delight;
	Pizza->MiscCal("Red Chilli", ChilliDelight->set_chilli("red"));
}
Void breeze::MyForm::BBQBuzzMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bbq_buzz* BBQ_BUZZ = new bbq_buzz;
	Pizza->MiscCal("BBQ Sauce", BBQ_BUZZ->set_sauce("bbq sauce"));
}
Void breeze::MyForm::BBQBuzzMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bbq_buzz* BBQ_BUZZ = new bbq_buzz;
	Pizza->MiscCal("Ranch Sauce", BBQ_BUZZ->set_sauce("ranch sauce"));
}
Void breeze::MyForm::SeekhKebabMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	seekh_kebab* SeekhKebab = new seekh_kebab;
	Pizza->MiscCal("Lamb", SeekhKebab->set_meat("lamb"));
}
Void breeze::MyForm::SeekhKebabMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	seekh_kebab* SeekhKebab = new seekh_kebab;
	Pizza->MiscCal("Beef", SeekhKebab->set_meat("beef"));
}
Void breeze::MyForm::TheCheeseMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	The_cheese* TheCheese = new The_cheese;
	Pizza->MiscCal("Mozarella", TheCheese->set_cheese("mozarella"));
}
Void breeze::MyForm::TheCheeseMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	The_cheese* TheCheese = new The_cheese;
	Pizza->MiscCal("Gouda", TheCheese->set_cheese("gouda"));

}
Void breeze::MyForm::TheCheeseMisc3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	The_cheese* TheCheese = new The_cheese;
	Pizza->MiscCal("Cheddar", TheCheese->set_cheese("cheddar"));
}