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

void breeze::MyForm::Login_Click(System::Object^ sender, System::EventArgs^ e) {
	string use, pass;
	use = backtostring(UsernameBox->Text);
	pass = backtostring(PasswordBox->Text);

	if (!test->import(use, pass))
	{
		incorrect->Visible = true;
	}
}
void breeze::MyForm::Signup_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = SignUpPage;
}
void breeze::MyForm::signup2_Click(System::Object^ sender, System::EventArgs^ e) {
	test->setname(backtostring(Namebox->Text));
	test->setF_Name(backtostring(FNamebox->Text));
	test->setage(System::Convert::ToInt32(agebox->Text));

}




void breeze::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	order->PlaceOrder(Pizza);
}

void breeze::MyForm::VeggieDelightCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (VeggieDelightCheckBox->Checked == true)
	{
		ptr = new veggie_delight;
		Pizza->SaveFlavour(ptr);
		TheCheeseCheckbox->Checked = false;
		FajitaCheckbox->Checked = false;
		TikkaCheckbox->Checked = false;
		SeekhKebabCheckbox->Checked = false;
		BbqBuzzCheckbox->Checked = false;
		ChilliDelightCheckbox->Checked = false;
		TikkaMisc1->Visible = false;
		TikkaMisc2->Visible = false;
		FajitaMisc1->Visible = false;
		FajitaMisc2->Visible = false;
		TheCheeseMisc1->Visible = false;
		TheCheeseMisc2->Visible = false;
		TheCheeseMisc3->Visible = false;
		ChilliDelightMisc1->Visible = false;
		ChilliDelightMisc2->Visible = false;
		SeekhKebabMisc1->Visible = false;
		SeekhKebabMisc2->Visible = false;
		BBQBuzzMisc1->Visible = false;
		BBQBuzzMisc2->Visible = false;
	}
	
}
void breeze::MyForm::TheCheeseCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TheCheeseCheckbox->Checked == true)
	{
		ptr = new The_cheese;
		Pizza->SaveFlavour(ptr);
		VeggieDelightCheckBox->Checked = false;
		FajitaCheckbox->Checked = false;
		TikkaCheckbox->Checked = false;
		SeekhKebabCheckbox->Checked = false;
		BbqBuzzCheckbox->Checked = false;
		ChilliDelightCheckbox->Checked = false;
		TikkaMisc1->Visible = false;
		TikkaMisc2->Visible = false;
		FajitaMisc1->Visible = false;
		FajitaMisc2->Visible = false;
		TheCheeseMisc1->Visible = true;
		TheCheeseMisc2->Visible = true;
		TheCheeseMisc3->Visible = true;
		ChilliDelightMisc1->Visible = false;
		ChilliDelightMisc2->Visible = false;
		SeekhKebabMisc1->Visible = false;
		SeekhKebabMisc2->Visible = false;
		BBQBuzzMisc1->Visible = false;
		BBQBuzzMisc2->Visible = false;
	}
}
void breeze::MyForm::SeekhKebabCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SeekhKebabCheckbox->Checked == true)
	{
		ptr = new seekh_kebab;
		Pizza->SaveFlavour(ptr);
		VeggieDelightCheckBox->Checked = false;
		FajitaCheckbox->Checked = false;
		TikkaCheckbox->Checked = false;
		TheCheeseCheckbox->Checked = false;
		BbqBuzzCheckbox->Checked = false;
		ChilliDelightCheckbox->Checked = false;
		TikkaMisc1->Visible = false;
		TikkaMisc2->Visible = false;
		FajitaMisc1->Visible = false;
		FajitaMisc2->Visible = false;
		TheCheeseMisc1->Visible = false;
		TheCheeseMisc2->Visible = false;
		TheCheeseMisc3->Visible = false;
		ChilliDelightMisc1->Visible = false;
		ChilliDelightMisc2->Visible = false;
		SeekhKebabMisc1->Visible = true;
		SeekhKebabMisc2->Visible = true;
		BBQBuzzMisc1->Visible = false;
		BBQBuzzMisc2->Visible = false;
	}
}
void breeze::MyForm::TikkaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TikkaCheckbox->Checked == true)
	{
		ptr = new tikka;
		Pizza->SaveFlavour(ptr);
		VeggieDelightCheckBox->Checked = false;
		FajitaCheckbox->Checked = false;
		SeekhKebabCheckbox->Checked = false;
		TheCheeseCheckbox->Checked = false;
		BbqBuzzCheckbox->Checked = false;
		ChilliDelightCheckbox->Checked = false;
		TikkaMisc1->Visible = true;
		TikkaMisc2->Visible = true;
		FajitaMisc1->Visible = false;
		FajitaMisc2->Visible = false;
		TheCheeseMisc1->Visible = false;
		TheCheeseMisc2->Visible = false;
		TheCheeseMisc3->Visible = false;
		ChilliDelightMisc1->Visible = false;
		ChilliDelightMisc2->Visible = false;
		SeekhKebabMisc1->Visible = false;
		SeekhKebabMisc2->Visible = false;
		BBQBuzzMisc1->Visible = false;
		BBQBuzzMisc2->Visible = false;
	}
}
void breeze::MyForm::FajitaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (FajitaCheckbox->Checked == true)
	{
		ptr = new fajita;
		Pizza->SaveFlavour(ptr);
		VeggieDelightCheckBox->Checked = false;
		TikkaCheckbox->Checked = false;
		SeekhKebabCheckbox->Checked = false;
		TheCheeseCheckbox->Checked = false;
		BbqBuzzCheckbox->Checked = false;
		ChilliDelightCheckbox->Checked = false;
		TikkaMisc1->Visible = false;
		TikkaMisc2->Visible = false;
		FajitaMisc1->Visible = true;
		FajitaMisc2->Visible = true;
		TheCheeseMisc1->Visible = false;
		TheCheeseMisc2->Visible = false;
		TheCheeseMisc3->Visible = false;
		ChilliDelightMisc1->Visible = false;
		ChilliDelightMisc2->Visible = false;
		SeekhKebabMisc1->Visible = false;
		SeekhKebabMisc2->Visible = false;
		BBQBuzzMisc1->Visible = false;
		BBQBuzzMisc2->Visible = false;
	}
}
void breeze::MyForm::ChilliDelightCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChilliDelightCheckbox->Checked == true)
	{
		ptr = new chilli_delight;
		Pizza->SaveFlavour(ptr);
		VeggieDelightCheckBox->Checked = false;
		TikkaCheckbox->Checked = false;
		SeekhKebabCheckbox->Checked = false;
		TheCheeseCheckbox->Checked = false;
		BbqBuzzCheckbox->Checked = false;
		FajitaCheckbox->Checked = false;
		TikkaMisc1->Visible = false;
		TikkaMisc2->Visible = false;
		FajitaMisc1->Visible = false;
		FajitaMisc2->Visible = false;
		TheCheeseMisc1->Visible = false;
		TheCheeseMisc2->Visible = false;
		TheCheeseMisc3->Visible = false;
		ChilliDelightMisc1->Visible = true;
		ChilliDelightMisc2->Visible = true;
		SeekhKebabMisc1->Visible = false;
		SeekhKebabMisc2->Visible = false;
		BBQBuzzMisc1->Visible = false;
		BBQBuzzMisc2->Visible = false;

	}	
}
void breeze::MyForm::BbqBuzzCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (BbqBuzzCheckbox->Checked == true)
	{
		ptr = new bbq_buzz;
		Pizza->SaveFlavour(ptr);
		VeggieDelightCheckBox->Checked = false;
		TikkaCheckbox->Checked = false;
		SeekhKebabCheckbox->Checked = false;
		TheCheeseCheckbox->Checked = false;
		ChilliDelightCheckbox->Checked = false;
		FajitaCheckbox->Checked = false;
		TikkaMisc1->Visible = false;
		TikkaMisc2->Visible = false;
		FajitaMisc1->Visible = false;
		FajitaMisc2->Visible = false;
		TheCheeseMisc1->Visible = false;
		TheCheeseMisc2->Visible = false;
		TheCheeseMisc3->Visible = false;
		ChilliDelightMisc1->Visible = false;
		ChilliDelightMisc2->Visible = false;
		SeekhKebabMisc1->Visible = false;
		SeekhKebabMisc2->Visible = false;
		BBQBuzzMisc1->Visible = true;
		BBQBuzzMisc2->Visible = true;

	}
}

 Void breeze::MyForm::TikkaMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (TikkaMisc1->Checked == true)
	 {
		 tikka* Tikka = new tikka;
		 Pizza->MiscCal("chicken", Tikka->set_chicken(true));
	 }
 }
Void breeze::MyForm:: TikkaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TikkaMisc2->Checked == true)
	{
		tikka* Tikka = new tikka;
		Pizza->MiscCal("Beef", Tikka->set_beef(true));
	}
}
Void breeze::MyForm::FajitaMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (FajitaMisc1->Checked == true)
	{
		fajita* Fajita = new fajita;
		Pizza->MiscCal("Mexican Style", Fajita->set_meat("mexican style"));
	}
}
Void breeze::MyForm::FajitaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (FajitaMisc2->Checked == true)
	{
		fajita* Fajita = new fajita;
		Pizza->MiscCal("Traditional Style", Fajita->set_meat("traditional style"));
	}
}
Void breeze::MyForm::ChilliDelightMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChilliDelightMisc1->Checked == true)
	{
		chilli_delight* ChilliDelight = new chilli_delight;
		Pizza->MiscCal("Red Chilli", ChilliDelight->set_chilli("red"));
	}
}
Void breeze::MyForm::ChilliDelightMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChilliDelightMisc2->Checked == true)
	{
		chilli_delight* ChilliDelight = new chilli_delight;
		Pizza->MiscCal("Red Chilli", ChilliDelight->set_chilli("red"));
	}
}
Void breeze::MyForm::BBQBuzzMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if(BBQBuzzMisc1->Checked == true)
	{bbq_buzz* BBQ_BUZZ = new bbq_buzz;
	Pizza->MiscCal("BBQ Sauce", BBQ_BUZZ->set_sauce("bbq sauce"));
	}
}
Void breeze::MyForm::BBQBuzzMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (BBQBuzzMisc2->Checked == true)
	{
		bbq_buzz* BBQ_BUZZ = new bbq_buzz;
		Pizza->MiscCal("Ranch Sauce", BBQ_BUZZ->set_sauce("ranch sauce"));
	}
}
Void breeze::MyForm::SeekhKebabMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SeekhKebabMisc1->Checked == true)
	{
		seekh_kebab* SeekhKebab = new seekh_kebab;
		Pizza->MiscCal("Lamb", SeekhKebab->set_meat("lamb"));
	}
}
Void breeze::MyForm::SeekhKebabMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SeekhKebabMisc2->Checked == true)
	{
		seekh_kebab* SeekhKebab = new seekh_kebab;
		Pizza->MiscCal("Beef", SeekhKebab->set_meat("beef"));
	}
}
Void breeze::MyForm::TheCheeseMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TheCheeseMisc1->Checked == true)
	{
		The_cheese* TheCheese = new The_cheese;
		Pizza->MiscCal("Mozarella", TheCheese->set_cheese("mozarella"));
	}
}
Void breeze::MyForm::TheCheeseMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TheCheeseMisc2->Checked == true)
	{
		The_cheese* TheCheese = new The_cheese;
		Pizza->MiscCal("Gouda", TheCheese->set_cheese("gouda"));
	}

}
Void breeze::MyForm::TheCheeseMisc3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TheCheeseMisc1->Checked == true)
	{
		The_cheese* TheCheese = new The_cheese;
		Pizza->MiscCal("Cheddar", TheCheese->set_cheese("cheddar"));
	}
}