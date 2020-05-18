#include "MyForm.h"
#define backtostring msclr::interop::marshal_as<std::string>
#define gotoString msclr::interop::marshal_as<String^>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


//******************************SIGNUP RELATED FUNCTIONS*****************************
void breeze::MyForm::backtologinbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = UserLogin;
}

void breeze::MyForm::GuesetOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	test->setguest(true);
	tabControl1->SelectedTab = CrustSelect;
}

void breeze::MyForm::Login_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!test->import(backtostring(UsernameBox->Text), backtostring(PasswordBox->Text)))
	{
		incorrect->Visible = true;
	}

	//function incomplete
}

void breeze::MyForm::Signup_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = SignUpPage;
}

void breeze::MyForm::signup2_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace System;
	int i = 0;
	if (!test->setname(backtostring(Namebox->Text)))
	{
		namereq->Visible = true;
		Namebox->Text = Convert::ToString("0");
		i++;
	}

	if (!test->setF_Name(backtostring(FNamebox->Text)))
	{
		fnamereq->Visible = true;
		FNamebox->Text = Convert::ToString("0");
		i++;
	}

	if (!test->setage(Convert::ToInt32(agebox->Text)))
	{
		agebox->Text = Convert::ToString("0");
		i++;
	}

	string gen = backtostring(genderbox->Text);
	if (gen == "Male")
		test->setGender(Male);
	else if (gen == "Female")
		test->setGender(Female);
	else if (gen == "Other")
		test->setGender(Other);

	if (!test->setcontact(Convert::ToInt64(contactbox->Text)))
	{
		contactbox->Text = Convert::ToString("0");
	}

	if (!test->setcnic(Convert::ToInt64(cnicbox->Text)))
	{
		cnicbox->Text = Convert::ToString("0");
	}

	test->setaddress(backtostring(addressbox->Text));

	test->setpaymentttype(codcheckbox->Checked);

	if (codcheckbox->Checked == false && cardcheckbox->Checked == false)
	{
		codlabel->Visible = true;
		i++;
	}

	test->setcardprovider(backtostring(cardproviderbox->Text));

	if (!test->setcardno(Convert::ToInt64(cardnobox->Text)))
	{
		cardnobox->Text = Convert::ToString("0");
		i++;
	}

	if (!test->setexpiry(Convert::ToInt32(cardexpmonth->Text), Convert::ToInt32(cardexpyear->Text)))
	{
		expreq->Visible = true;
		cardexpmonth->Text = Convert::ToString("0");
		cardexpyear->Text = Convert::ToString("0");
		i++;
	}

	if (!test->setemail(backtostring(emailbox->Text)))
	{
		emailreq->Visible = true;
		emailbox->Text = Convert::ToString("0");
		i++;
	}

	if (!test->setusername(backtostring(usernamebox2->Text)))
	{
		usernamereq2->Visible = true;
		usernamebox2->Text = Convert::ToString("0");
		i++;
	}

	if (!test->setpassword(backtostring(passwordbox2->Text)))
	{
		passwordbox2->Text = Convert::ToString("0");
		i++;
	}

	if (i == 0)
	{
		test->writetofile();
	}

	else if (i > 0)
	{
		errorlabel->Visible = true;
	}
}

void breeze::MyForm::codcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (codcheckbox->Checked == true)
	{
		cardcheckbox->Checked = false;
		cardproviderbox->Enabled = false;
		cardnobox->Enabled = false;
		cardnobox->Text = "0";
		cardexpmonth->Enabled = false;
		cardexpmonth->Text = "0";
		cardexpyear->Enabled = false;
		cardexpyear->Text = "0";

	}
}

void breeze::MyForm::cardcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (cardcheckbox->Checked == true)
	{
		codcheckbox->Checked = false;
		cardproviderbox->Enabled = true;
		cardnobox->Enabled = true;
		cardexpmonth->Enabled = true;
		cardexpyear->Enabled = true;
	}
}

void breeze::MyForm::usernameavailability_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (test->checkavailable(backtostring(usernamebox2->Text)))
	{
		availablelabel->Visible = true;
		notavailablelabel->Visible = false;
	}
	else
	{
		notavailablelabel->Visible = true;
		availablelabel->Visible = false;
	}

}

void breeze::MyForm::toflavormenu_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = FlavourSelect;
}
//******************************SIGNUP RELATED FUNCTIONS*****************************


//******************************CRUST SELECTION FUNCTIONS*****************************
void breeze::MyForm::CrustSelect_Enter(System::Object^ sender, System::EventArgs^ e) {
	pizz->cpoint = new italian;
	italiancheckbox->Text = gotoString(pizz->cpoint->get_description());
	delete pizz->cpoint;
	pizz->cpoint = new neapolitan;
	neapolitancheckbox->Text = gotoString(pizz->cpoint->get_description());
	delete pizz->cpoint;
	pizz->cpoint = new newyork;
	newyorkcheckbox->Text = gotoString(pizz->cpoint->get_description());
	delete pizz->cpoint;
	pizz->cpoint = new stlouis;
	stlouischeckbox->Text = gotoString(pizz->cpoint->get_description());
	delete pizz->cpoint;
	pizz->cpoint = new deepdish;
	deepdishcheckbox->Text = gotoString(pizz->cpoint->get_description());
	delete pizz->cpoint;
	pizz->cpoint = new sicilian;
	siciliancheckbox->Text = gotoString(pizz->cpoint->get_description());
	delete pizz->cpoint;
	pizz->cpoint = new focacia;
	focaciacheckbox->Text = gotoString(pizz->cpoint->get_description());
	delete pizz->cpoint;
	pizz->cpoint = new stuffed;
	stuffedcheckbox->Text = gotoString(pizz->cpoint->get_description());
	delete pizz->cpoint;
}
//******************************CRUST SELECTION FUNCTIONS*****************************


void breeze::MyForm::customer_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = UserLogin;
}


void breeze::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	order->PlaceOrder(pizz);
}

void breeze::MyForm::VeggieDelightCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (VeggieDelightCheckBox->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		ptr = new veggie_delight;
		pizz->SaveFlavour(ptr);
		FlavourPriceBox->AppendText(Convert::ToString(ptr->get_price()));
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
	else if (VeggieDelightCheckBox->Checked == false)
	{	
		//FlavourPriceBox->Text = "CURRENT PRICE = Rs";
	}
	
	
}


void breeze::MyForm::TheCheeseCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TheCheeseCheckbox->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		ptr = new The_cheese;
		pizz->SaveFlavour(ptr);
		FlavourPriceBox->AppendText(Convert::ToString(ptr->get_price()));
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
	else if (TheCheeseCheckbox->Checked == false)
	{
		TheCheeseMisc1->Visible = false;
		TheCheeseMisc2->Visible = false;
		TheCheeseMisc3->Visible = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc2->Checked = false;
		TheCheeseMisc3->Checked = false;
		//FlavourPriceBox->Text = "CURRENT PRICE = Rs";
	}
}
void breeze::MyForm::SeekhKebabCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SeekhKebabCheckbox->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		ptr = new seekh_kebab;
		pizz->SaveFlavour(ptr);
		FlavourPriceBox->AppendText(Convert::ToString(ptr->get_price()));
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
	else if (SeekhKebabCheckbox->Checked == false)
	{
		SeekhKebabMisc1->Visible=false;
		SeekhKebabMisc2->Visible = false;
		SeekhKebabMisc1->Checked = false;
		SeekhKebabMisc2->Checked = false;
		//FlavourPriceBox->Text = "CURRENT PRICE = Rs";
	}
}
void breeze::MyForm::TikkaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TikkaCheckbox->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		ptr = new tikka;
		pizz->SaveFlavour(ptr);
		FlavourPriceBox->AppendText(Convert::ToString(ptr->get_price()));
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
	else if (TikkaCheckbox->Checked == false)
	{
		TikkaMisc1->Visible = false;
		TikkaMisc2->Visible = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		//FlavourPriceBox->Text = "CURRENT PRICE = Rs";
	}
}
void breeze::MyForm::FajitaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (FajitaCheckbox->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		ptr = new fajita;
		pizz->SaveFlavour(ptr);
		FlavourPriceBox->AppendText(Convert::ToString(ptr->get_price()));
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
	else if (FajitaCheckbox->Checked == false)
	{
		FajitaMisc1->Visible = false;
		FajitaMisc2->Visible = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		//FlavourPriceBox->Text = "CURRENT PRICE = Rs";
	}
}
void breeze::MyForm::ChilliDelightCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChilliDelightCheckbox->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		ptr = new chilli_delight;
		pizz->SaveFlavour(ptr);
		FlavourPriceBox->AppendText(Convert::ToString(ptr->get_price()));
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
	else if (ChilliDelightCheckbox->Checked == false)
	{
		ChilliDelightMisc1->Visible =false;
		ChilliDelightMisc2->Visible = false;
		ChilliDelightMisc1->Checked = false;
		ChilliDelightMisc2->Checked = false;
		//FlavourPriceBox->Text = "CURRENT PRICE = Rs";
	}
}
void breeze::MyForm::BbqBuzzCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (BbqBuzzCheckbox->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		ptr = new bbq_buzz;
		pizz->SaveFlavour(ptr);
		FlavourPriceBox->AppendText(Convert::ToString(ptr->get_price()));
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
	else if (BbqBuzzCheckbox->Checked == false)
	{
		BBQBuzzMisc1->Visible =false;
		BBQBuzzMisc2->Visible =false;
		BBQBuzzMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		//FlavourPriceBox->Text = "CURRENT PRICE = Rs";
	}
}

 void breeze::MyForm::TikkaMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (TikkaMisc1->Checked == true)
	 {
		 FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		 tikka* Tikka = new tikka;
		 Tikka->set_chicken(true);
		 pizz->fpoint = Tikka;
		 pizz->FlavourMiscSet("chicken");
		 FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		 TheCheeseMisc3->Checked = false;
		 TheCheeseMisc1->Checked = false;
		 TheCheeseMisc2->Checked = false;
		 SeekhKebabMisc2->Checked = false;
		 ChilliDelightMisc2->Checked = false;
		 FajitaMisc2->Checked = false;
		 FajitaMisc1->Checked = false;
		 TikkaMisc2->Checked = false;
		 BBQBuzzMisc1->Checked = false;
		 SeekhKebabMisc1->Checked = false;
		 BBQBuzzMisc2->Checked = false;
		 ChilliDelightMisc1->Checked = false;

	 }
	 else if(TikkaMisc1->Checked==false)
	 {
		 //FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	 }
 }
void breeze::MyForm:: TikkaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TikkaMisc2->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		tikka* Tikka = new tikka;
		Tikka->set_beef(true);
		pizz->fpoint = Tikka;
		pizz->FlavourMiscSet("beef");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));

		TheCheeseMisc3->Checked = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc2->Checked = false;
		SeekhKebabMisc2->Checked = false;
		ChilliDelightMisc2->Checked = false;
		FajitaMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		TikkaMisc1->Checked = false;
		BBQBuzzMisc1->Checked = false;
		SeekhKebabMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;


	}
	else if(TikkaMisc2->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::FajitaMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (FajitaMisc1->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		fajita* Fajita = new fajita;
		Fajita->set_meat("mexican style");
		pizz->fpoint = Fajita;
		pizz->FlavourMiscSet("Mexican Style");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc3->Checked = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc2->Checked = false;
		SeekhKebabMisc2->Checked = false;
		ChilliDelightMisc2->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		SeekhKebabMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;

	}
	else if(FajitaMisc1->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::FajitaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (FajitaMisc2->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		fajita* Fajita = new fajita;
		Fajita->set_meat("traditional style");
		pizz->fpoint = Fajita;
		pizz->FlavourMiscSet("Traditional Style");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc3->Checked = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc2->Checked = false;
		SeekhKebabMisc2->Checked = false;
		ChilliDelightMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		SeekhKebabMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;

	}
	else if(FajitaMisc2->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::ChilliDelightMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChilliDelightMisc1->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		chilli_delight* ChilliDelight = new chilli_delight;
		ChilliDelight->set_chilli("red");
		pizz->fpoint = ChilliDelight;
		pizz->FlavourMiscSet("Red Chilli");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc3->Checked = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc2->Checked = false;
		SeekhKebabMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		SeekhKebabMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc2->Checked = false;

	}
	else if(ChilliDelightMisc1->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::ChilliDelightMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChilliDelightMisc2->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		chilli_delight* ChilliDelight = new chilli_delight;
		ChilliDelight->set_chilli("green");
		pizz->fpoint = ChilliDelight;
		pizz->FlavourMiscSet("Green Chilli");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc3->Checked = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc2->Checked = false;
		SeekhKebabMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		SeekhKebabMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;

	}
	else if(ChilliDelightMisc2->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::BBQBuzzMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if(BBQBuzzMisc1->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		bbq_buzz* BBQ_BUZZ = new bbq_buzz;
	BBQ_BUZZ->set_sauce("bbq sauce");
	pizz->fpoint = BBQ_BUZZ;
	pizz->FlavourMiscSet("BBQ Sauce");
	FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
	TheCheeseMisc3->Checked = false;
	TheCheeseMisc1->Checked = false;
	TheCheeseMisc2->Checked = false;
	SeekhKebabMisc2->Checked = false;
	FajitaMisc1->Checked = false;
	FajitaMisc2->Checked = false;
	TikkaMisc1->Checked = false;
	TikkaMisc2->Checked = false;
	BBQBuzzMisc2->Checked = false;
	SeekhKebabMisc1->Checked = false;
	ChilliDelightMisc1->Checked = false;
	ChilliDelightMisc2->Checked = false;

	}
	else if(BBQBuzzMisc1->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::BBQBuzzMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (BBQBuzzMisc2->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		bbq_buzz* BBQ_BUZZ = new bbq_buzz;
		BBQ_BUZZ->set_sauce("ranch sauce");
		pizz->fpoint = BBQ_BUZZ;
		pizz->FlavourMiscSet("Ranch Sauce");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc3->Checked = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc2->Checked = false;
		SeekhKebabMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		SeekhKebabMisc1->Checked = false;
		ChilliDelightMisc1->Checked = false;
		ChilliDelightMisc2->Checked = false;
	}
	else if(BBQBuzzMisc2->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::SeekhKebabMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SeekhKebabMisc1->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		seekh_kebab* SeekhKebab = new seekh_kebab;
		SeekhKebab->set_meat("lamb");
		pizz->fpoint = SeekhKebab;
		pizz->FlavourMiscSet("Lamb");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc3->Checked = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc2->Checked = false;
		SeekhKebabMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;
		ChilliDelightMisc2->Checked = false;
	}
	else if(SeekhKebabMisc1->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::SeekhKebabMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SeekhKebabMisc2->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		seekh_kebab* SeekhKebab = new seekh_kebab;
		SeekhKebab->set_meat("beef");
		pizz->fpoint = SeekhKebab;
		pizz->FlavourMiscSet("Beef");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc2->Checked = false;
		TheCheeseMisc1->Checked = false;
		TheCheeseMisc3->Checked = false;
		SeekhKebabMisc1->Checked = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;
		ChilliDelightMisc2->Checked = false;
	}
	else if(SeekhKebabMisc2->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::TheCheeseMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TheCheeseMisc1->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		The_cheese* TheCheese = new The_cheese;
		TheCheese->set_cheese("MOZARELLA");
		pizz->fpoint = TheCheese;
		pizz->FlavourMiscSet("Mozarella");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc2->Checked = false;
		TheCheeseMisc3->Checked = false;
		SeekhKebabMisc1->Checked = false;
		SeekhKebabMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;
		ChilliDelightMisc2->Checked = false;
	}
	else if(TheCheeseMisc1->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::TheCheeseMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TheCheeseMisc2->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		The_cheese* TheCheese = new The_cheese;
		TheCheese->set_cheese("gouda");
		pizz->fpoint = TheCheese;
		pizz->FlavourMiscSet("Gouda");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc3->Checked = false;
		TheCheeseMisc1->Checked = false;
		SeekhKebabMisc1->Checked = false;
		SeekhKebabMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;
		ChilliDelightMisc2->Checked = false;

	}
	else if(TheCheeseMisc2->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}

}
void breeze::MyForm::TheCheeseMisc3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TheCheeseMisc3->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		The_cheese* TheCheese = new The_cheese;
		TheCheese->set_cheese("cheddar");
		pizz->fpoint = TheCheese;
		pizz->FlavourMiscSet("Cheddar");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->fpoint->get_price()));
		TheCheeseMisc2->Checked = false;
		TheCheeseMisc1->Checked = false;
		SeekhKebabMisc1->Checked = false;
		SeekhKebabMisc2->Checked = false;
		FajitaMisc1->Checked = false;
		FajitaMisc2->Checked = false;
		TikkaMisc1->Checked = false;
		TikkaMisc2->Checked = false;
		BBQBuzzMisc1->Checked = false;
		BBQBuzzMisc2->Checked = false;
		ChilliDelightMisc1->Checked = false;
		ChilliDelightMisc2->Checked = false;
	}
	else if(TheCheeseMisc3->Checked==false)
	{
		//FlavourPriceBox->Text = "CURRENT PRICE = RS ";
	}
}
void breeze::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControl1->SelectedTab = CrustSelect;
}
void breeze::MyForm::staff_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = FlavourSelect;
}
void breeze::MyForm::ChilliDelightCheckbox_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChilliDelightCheckbox->Checked == false)
	{
		ChilliDelightMisc1->Visible = false;
		ChilliDelightMisc2->Visible = false;

	}
}
void breeze::MyForm::ChickenCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChickenCheck->Checked == true)
	{
		ToppingPriceBox->Text = "CURRENT PRICE = RS";
		tptr = new Chicken;
		Pizza->SaveToping(tptr);
		ToppingPriceBox->AppendText = (Convert::ToString(ptr->get_price()));
		PepperoniCheck->Checked = false;
		BeefCheck->Checked = false;
		MashroomCheck->Checked = false;
		Extra_CheezCheck->Checked = false;
		SausageCheck->Checked = false;
		CheckBBQ_Sause->Visible = true;
		ChooseCheeseBox->Visible = true;
		ChooseTypeBox->Visible = false;
		ChooseQuantityOfCheezBox->Visible = false;
		CheckClovesSpice->Visible = false;
		ChoosePeppersBox->Visible = false;
		CheckCreamlized_Onion->Visible = false;
		CheckCreamyGarlicSause->Visible = false;
		CheckRedPepperFlakes->Visible = false;
		ChooseExtraBox->Visible = false;
		CheckRedPepperFlakes1->Visible = false;
		CheckBasilScattering->Visible = false;
	}
	else if (ChickenCheck->Checked == false)
	{
		CheckBBQ_Sause->Checked = false;
		CheckBBQ_Sause->Visible = false;
		ChooseCheeseBox->SelectedIndex = Shredded_Cheddar;
		ChooseCheeseBox->Visible = false;
	}
}
void breeze::MyForm::CheckBBQ_Sause_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (CheckBBQ_Sause->Checked == true)
	{
		ToppingPriceBox->Text = "CURRENT PRICE= RS";
		Chicken* C = new Chicken;
		C->setBS(true);

	}
}