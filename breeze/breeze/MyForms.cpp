#include "MyForm.h"
#include<ctime>
#include<cstdlib>
#include<fstream>
#define backtostring msclr::interop::marshal_as<std::string>
#define gotoString msclr::interop::marshal_as<String^>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//******************************USER LOGIN AND RELATED FUNCTIONS**********************
void breeze::MyForm::customer_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = UserLogin;
}

void breeze::MyForm::PreMade_Enter(System::Object^ sender, System::EventArgs^ e) {
	sizeofpizzabox5->Text = "0";
	sizeofpizzabox4->Text = "0";
	sizeofpizzabox3->Text = "0";
	sizeofpizzabox2->Text = "0";
	sizeofpizzabox->Text = "0";
	sizeofpremadepizzabox->Text = "0";
	pizzaamountbox->Text = "0";
}

void breeze::MyForm::startmenubox_Click(System::Object^ sender, System::EventArgs^ e) {

	if (fajitablastbox->Checked == true)
	{
		italian *a = new italian;
		a->setherbs(onions);
		a->setcookstyle(oven);
		fajita* b = new fajita;
		b->set_meat("MEXICAN STYLE");
		Chicken* c = new Chicken;
		pizz->cpoint = a;
		pizz->fpoint = b;
		pizz->tpoint = c;

		tabControl1->SelectedTab = CheckoutPage;
		
	}
	else if (chickensupremebox->Checked == true)
	{
		newyork* a = new newyork;
		a->setherbs(garlic);
		a->setmineralized(true);
		bbq_buzz* b = new bbq_buzz;
		b->set_sauce("BBQ SAUCE");
		b->set_chicken(true);
		Chicken* c = new Chicken;
		c->setCheese(Shredded_Parmesan);
		pizz->cpoint = a;
		pizz->fpoint = b;
		pizz->tpoint = c;

		tabControl1->SelectedTab = CheckoutPage;

	}
	else if (westsidegarlicbox->Checked == true)
	{
		focacia* a = new focacia;
		a->setherbs(garlicpowder);
		a->setcoating(oliveoil);
		tikka *b = new tikka;
		b->set_beef(true);
		Mashroom* c = new Mashroom;
		c->setCO(true);
		c->setCRGS(true);
		pizz->cpoint = a;
		pizz->fpoint = b;
		pizz->tpoint = c;

		tabControl1->SelectedTab = CheckoutPage;

	}
	else if (allcheesebox->Checked == true)
	{
		stuffed* a = new stuffed;
		a->setcheese(american);
		a->setfilling(whole);
		a->setlayer(thincut);
		The_cheese* b = new The_cheese;
		b->set_cheese("GOUDA");
		Extra_Cheez* c = new Extra_Cheez;
		c->setExtra(Macroni);
		c->setRPF(true);
		pizz->cpoint = a;
		pizz->fpoint = b;
		pizz->tpoint = c;

		tabControl1->SelectedTab = CheckoutPage;

	}
	else if (Convert::ToInt16(pizzaamountbox->Text) > 0)
	{
		total_no_of_pizzas = Convert::ToInt16(pizzaamountbox->Text);
		size = new int[total_no_of_pizzas];
		int i=0;

		if (Convert::ToInt16(pizzaamountbox->Text) > 4)
		{
			if(Convert::ToInt16(sizeofpizzabox5->Text) != 0)
			{
				i++;
				size[4] = Convert::ToInt16(sizeofpizzabox5->Text);
			}
		}
		if (Convert::ToInt16(pizzaamountbox->Text) > 3)
		{
			if (Convert::ToInt16(sizeofpizzabox4->Text) != 0)
			{
				i++;
				size[3] = Convert::ToInt16(sizeofpizzabox4->Text);
			}
		}
		if (Convert::ToInt16(pizzaamountbox->Text) > 2)
		{
			if (Convert::ToInt16(sizeofpizzabox3->Text) != 0)
			{
				i++;
				size[2] = Convert::ToInt16(sizeofpizzabox3->Text);
			}
		}
		if (Convert::ToInt16(pizzaamountbox->Text) > 1)
		{
			if (Convert::ToInt16(sizeofpizzabox2->Text) != 0)
			{
				i++;
				size[1] = Convert::ToInt16(sizeofpizzabox2->Text);
			}
		}
		if (Convert::ToInt16(pizzaamountbox->Text) > 0)
		{
			if (Convert::ToInt16(sizeofpizzabox->Text) != 0)
			{
				i++;
				size[0] = Convert::ToInt16(sizeofpizzabox->Text);
			}
		}
		if (i != Convert::ToInt16(pizzaamountbox->Text))
		{
			sizereq->Visible = true;
		}
		else
			tabControl1->SelectedTab = CrustSelect;
	}
	else
	{
		pizzareq->Visible = true;
	}
}

//******************************USER LOGIN AND RELATED FUNCTIONS**********************



//******************************SIGNUP RELATED FUNCTIONS*****************************
void breeze::MyForm::backtologinbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = UserLogin;
}

void breeze::MyForm::GuesetOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	test->setguest(true);
	tabControl1->SelectedTab = PreMade;
}

void breeze::MyForm::Login_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!test->import(backtostring(UsernameBox->Text), backtostring(PasswordBox->Text)))
	{
		incorrect->Visible = true;
	}
	else if(test->import(backtostring(UsernameBox->Text), backtostring(PasswordBox->Text))==true)
	{
		test->import(backtostring(UsernameBox->Text), backtostring(PasswordBox->Text));
		tabControl1->SelectedTab = CrustSelect;
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

	if (!test->setcontact(long long int(Convert::ToInt64(contactbox->Text))))
	{
		contactbox->Text = Convert::ToString("0");
	}

	if (!test->setcnic(long long int(Convert::ToInt64(cnicbox->Text))))
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

	if (!test->setcardno(long long int(Convert::ToInt64(cardnobox->Text))))
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

void breeze::MyForm::toflavormenu_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (italiancheckbox->Checked == true)
	{
		italian *a = new italian;
		if (backtostring(italianherbbox->Text) == "None")
			a->setherbs(none);
		else if (backtostring(italianherbbox->Text) == "Onions")
			a->setherbs(onions);
		else if (backtostring(italianherbbox->Text) == "Garlic")
			a->setherbs(garlic);
		if (backtostring(italiancookstylebox->Text) == "Pan")
			a->setcookstyle(pan);
		else if (backtostring(italiancookstylebox->Text) == "Wood Fire")
			a->setcookstyle(wood_fired);
		else if (backtostring(italiancookstylebox->Text) == "Oven")
			a->setcookstyle(oven);
		pizz->cpoint = a;
		tabControl1->SelectedTab = FlavourSelect;
	}
	else if (neapolitancheckbox->Checked == true)
	{
		neapolitan* a = new neapolitan;
		if (neapolitanhand->Checked == true)
			a->sethand(true);
		if (backtostring(italiancookstylebox->Text) == "Pan")
			a->setcookstyle(pan);
		else if (backtostring(italiancookstylebox->Text) == "Wood Fire")
			a->setcookstyle(wood_fired);
		else if (backtostring(italiancookstylebox->Text) == "Oven")
			a->setcookstyle(oven);
		pizz->cpoint = a;
		tabControl1->SelectedTab = FlavourSelect;
	}
	else if (newyorkcheckbox->Checked == true)
	{
		newyork* a = new newyork;
		if (newyorkmineral->Checked == true)
			a->setmineralized(true);
		if (backtostring(newyorkherbbox->Text) == "None")
			a->setherbs(none);
		else if (backtostring(newyorkherbbox->Text) == "Onions")
			a->setherbs(onions);
		else if (backtostring(newyorkherbbox->Text) == "Garlic")
			a->setherbs(garlic);
		pizz->cpoint = a;
		tabControl1->SelectedTab = FlavourSelect;
	}
	else if (stlouischeckbox->Checked == true)
	{
		stlouis* a = new stlouis;
		if (stlouiscutbox->Checked == false)
			a->settavern(false);
		if (stlouischeesebox->Checked == true)
			a->setcheese(true);
		pizz->cpoint = a;
		tabControl1->SelectedTab = FlavourSelect;
	}
	else if (deepdishcheckbox->Checked == true)
	{
		deepdish* a = new deepdish;
		if (backtostring(deepdishthicknessbox->Text) == "Two ``")
			a->setthick(two);
		else if (backtostring(deepdishthicknessbox->Text) == "Two and a half ``")
			a->setthick(twohalf);
		else if (backtostring(deepdishthicknessbox->Text) == "Three ``")
			a->setthick(three);
		if (backtostring(deepdishsaucebox->Text) == "Ketchup")
			a->setsauce(ketchup);
		else if (backtostring(deepdishsaucebox->Text) == "Chilli")
			a->setsauce(chilli);
		else if (backtostring(deepdishsaucebox->Text) == "Special Sauce")
			a->setsauce(special);
		pizz->cpoint = a;
		tabControl1->SelectedTab = FlavourSelect;
	}
	else if (focaciacheckbox->Checked == true)
	{
		focacia* a = new focacia;
		if (backtostring(focaciaherbbox->Text) == "Onions")
			a->setherbs(onions);
		else if (backtostring(focaciaherbbox->Text) == "Garlic")
			a->setherbs(garlic);
		else if (backtostring(focaciaherbbox->Text) == "Scallion")
			a->setherbs(scallion);
		else if (backtostring(focaciaherbbox->Text) == "Garlic Powder")
			a->setherbs(garlicpowder);
		if (backtostring(focaciaoilbox->Text) == "Olive Oil")
			a->setcoating(oliveoil);
		else if (backtostring(focaciaoilbox->Text) == "Scented Oil")
			a->setcoating(scentedoil);
		else if (backtostring(focaciaoilbox->Text) == "Flavored Oil")
			a->setcoating(flavoured);
		pizz->cpoint = a;
		tabControl1->SelectedTab = FlavourSelect;
	}
	else if (siciliancheckbox->Checked == true)
	{
		sicilian* a = new sicilian;
		if (backtostring(sicilianpanbox->Text) == "Standard")
			a->setpan(standard);
		else if (backtostring(sicilianpanbox->Text) == "Deep")
			a->setpan(deep);
		else if (backtostring(sicilianpanbox->Text) == "High Temp")
			a->setpan(hightemp);
		if (backtostring(sicilianoilbox->Text) == "Olive")
			a->setoil(olive);
		else if (backtostring(sicilianoilbox->Text) == "Canola")
			a->setoil(canola);
		else if (backtostring(sicilianoilbox->Text) == "Flavored")
			a->setoil(flavored);
		else if (backtostring(sicilianoilbox->Text) == "Cooking")
			a->setoil(cooking);
		pizz->cpoint = a;
		tabControl1->SelectedTab = FlavourSelect;
	}
	else if (stuffedcheckbox->Checked == true)
	{
		stuffed* a = new stuffed;
		if (backtostring(stuffedcheezebox->Text) == "Cheddar")
			a->setcheese(cheddar);
		else if (backtostring(stuffedcheezebox->Text) == "American")
			a->setcheese(american);
		else if (backtostring(stuffedcheezebox->Text) == "Mozerralla")
			a->setcheese(mozeralla);
		if (backtostring(stuffedfillingbox->Text) == "Edge")
			a->setfilling(edge);
		else if (backtostring(stuffedfillingbox->Text) == "Base")
			a->setfilling(base);
		else if (backtostring(stuffedfillingbox->Text) == "Whole")
			a->setfilling(whole);
		if (backtostring(stuffedlayeringbox->Text) == "Single")
			a->setlayer(single);
		else if (backtostring(stuffedcheezebox->Text) == "Thincut")
			a->setlayer(thincut);
		else if (backtostring(stuffedcheezebox->Text) == "Double")
			a->setlayer(doubled);
		pizz->cpoint = a;
		tabControl1->SelectedTab = FlavourSelect;
	}
	else
	{
	crustreq->Visible = true;
	}
}

void breeze::MyForm::italiancheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (italiancheckbox->Checked == true)
	{
		italiancooklabel->Visible = true;
		italiancookstylebox->Visible = true;
		italianherbbox->Visible = true;
		italianherblabel->Visible = true;

		stuffedcheckbox->Checked = false;
		neapolitancheckbox->Checked = false;
		siciliancheckbox->Checked = false;
		newyorkcheckbox->Checked = false;
		deepdishcheckbox->Checked = false;
		stlouischeckbox->Checked = false;
		focaciacheckbox->Checked = false;

		italian* a = new italian;
		crustpricebox->Text = "CURRENT PRICE \n= Rs " + Convert::ToString(a->get_price());
		delete a;
	}
	if (italiancheckbox->Checked == false)
	{
		italiancooklabel->Visible = false;
		italiancookstylebox->Visible = false;
		italianherbbox->Visible = false;
		italianherblabel->Visible = false;
	}
}

void breeze::MyForm::neapolitancheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (neapolitancheckbox->Checked == true)
	{
		neapolitanhand->Visible = true;
		neapolitancooklabel->Visible = true;
		neapolitancookstylebox->Visible = false;

		italiancheckbox->Checked = false;
		stuffedcheckbox->Checked = false;
		siciliancheckbox->Checked = false;
		newyorkcheckbox->Checked = false;
		deepdishcheckbox->Checked = false;
		stlouischeckbox->Checked = false;
		focaciacheckbox->Checked = false;

		neapolitan* a = new neapolitan;
		crustpricebox->Text = "CURRENT PRICE \n= Rs " + Convert::ToString(a->get_price());
		delete a;
	}
	if (neapolitancheckbox->Checked == false)
	{
		neapolitanhand->Visible = false;
		neapolitancooklabel->Visible = false;
		neapolitancookstylebox->Visible = false;
	}
}

void breeze::MyForm::newyorkcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (newyorkcheckbox->Checked == true)
	{
		newyorkherblabel->Visible = true;
		newyorkherbbox->Visible = true;
		newyorkmineral->Visible = true;

		italiancheckbox->Checked = false;
		neapolitancheckbox->Checked = false;
		siciliancheckbox->Checked = false;
		stuffedcheckbox->Checked = false;
		deepdishcheckbox->Checked = false;
		stlouischeckbox->Checked = false;
		focaciacheckbox->Checked = false;

		newyork* a = new newyork;
		crustpricebox->Text = "CURRENT PRICE \n= Rs " + Convert::ToString(a->get_price());
		delete a;
	}
	if (newyorkcheckbox->Checked == false)
	{
		newyorkherblabel->Visible = false;
		newyorkherbbox->Visible = false;
		newyorkmineral->Visible = false;
	}
}

void breeze::MyForm::stlouischeckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (stlouischeckbox->Checked == true)
	{
		stlouischeesebox->Visible = true;
		stlouiscutbox->Visible = true;

		italiancheckbox->Checked = false;
		neapolitancheckbox->Checked = false;
		siciliancheckbox->Checked = false;
		newyorkcheckbox->Checked = false;
		deepdishcheckbox->Checked = false;
		stuffedcheckbox->Checked = false;
		focaciacheckbox->Checked = false;

		stlouis* a = new stlouis;
		crustpricebox->Text = "CURRENT PRICE \n= Rs " + Convert::ToString(a->get_price());
		delete a;
	}
	if (stlouischeckbox->Checked == false)
	{
		stlouischeesebox->Visible = false;
		stlouiscutbox->Visible = false;
	}
}

void breeze::MyForm::deepdishcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (deepdishcheckbox->Checked == true)
	{
		deepdishsaucelabel->Visible = true;
		deepdishsaucebox->Visible = true;
		deepdishthicknessbox->Visible = true;
		deepdishthicknesslabel->Visible = true;

		italiancheckbox->Checked = false;
		neapolitancheckbox->Checked = false;
		siciliancheckbox->Checked = false;
		newyorkcheckbox->Checked = false;
		stuffedcheckbox->Checked = false;
		stlouischeckbox->Checked = false;
		focaciacheckbox->Checked = false;

		deepdish* a = new deepdish;
		crustpricebox->Text = "CURRENT PRICE \n= Rs " + Convert::ToString(a->get_price());
		delete a;
	}
	if (deepdishcheckbox->Checked == false)
	{
		deepdishsaucelabel->Visible = false;
		deepdishsaucebox->Visible = false;
		deepdishthicknessbox->Visible = false;
		deepdishthicknesslabel->Visible = false;
	}
}

void breeze::MyForm::focaciacheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (focaciacheckbox->Checked == true)
	{
		focaciaherbbox->Visible = true;
		focaciaherblabel->Visible = true;
		focaciaoilbox->Visible = true;
		focaciaoillabel->Visible = true;

		italiancheckbox->Checked = false;
		neapolitancheckbox->Checked = false;
		siciliancheckbox->Checked = false;
		newyorkcheckbox->Checked = false;
		deepdishcheckbox->Checked = false;
		stlouischeckbox->Checked = false;
		stuffedcheckbox->Checked = false;

		focacia* a = new focacia;
		crustpricebox->Text = "CURRENT PRICE \n= Rs " + Convert::ToString(a->get_price());
		delete a;
	}
	if (focaciacheckbox->Checked == false)
	{
		focaciaherbbox->Visible = false;
		focaciaherblabel->Visible = false;
		focaciaoilbox->Visible = false;
		focaciaoillabel->Visible = false;
	}
}

void breeze::MyForm::siciliancheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (siciliancheckbox->Checked == true)
	{
		sicilianoilbox->Visible = true;
		sicilianoillabel->Visible = true;
		sicilianpanbox->Visible = true;
		sicilianpanlabel->Visible = true;

		italiancheckbox->Checked = false;
		neapolitancheckbox->Checked = false;
		stuffedcheckbox->Checked = false;
		newyorkcheckbox->Checked = false;
		deepdishcheckbox->Checked = false;
		stlouischeckbox->Checked = false;
		focaciacheckbox->Checked = false;

		sicilian* a = new sicilian;
		crustpricebox->Text = "CURRENT PRICE \n= Rs " + Convert::ToString(a->get_price());
		delete a;
	}
	if (siciliancheckbox->Checked == false)
	{
		sicilianoilbox->Visible = false;
		sicilianoillabel->Visible = false;
		sicilianpanbox->Visible = false;
		sicilianpanlabel->Visible = false;
	}
}

void breeze::MyForm::stuffedcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (stuffedcheckbox->Checked == true)
	{
		stuffedcheezebox->Visible = true;
		stuffedcheeselbel->Visible = true;
		stuffedfillingbox->Visible = true;
		stuffedfillinglabel->Visible = true;
		stuffedlayeringbox->Visible = true;
		stuffedlayerlabel->Visible = true;

		italiancheckbox->Checked = false;
		neapolitancheckbox->Checked = false;
		siciliancheckbox->Checked = false;
		newyorkcheckbox->Checked = false;
		deepdishcheckbox->Checked = false;
		stlouischeckbox->Checked = false;
		focaciacheckbox->Checked = false;

		stuffed* a = new stuffed;
		crustpricebox->Text = "CURRENT PRICE \n= Rs " + Convert::ToString(a->get_price());
		delete a;

	}
	if (stuffedcheckbox->Checked == false)
	{
		stuffedcheezebox->Visible = false;
		stuffedcheeselbel->Visible = false;
		stuffedfillingbox->Visible = false;
		stuffedfillinglabel->Visible = false;
		stuffedlayeringbox->Visible = false;
		stuffedlayerlabel->Visible = false;
	}
}

//******************************CRUST SELECTION FUNCTIONS*****************************




//*****************************FLAVOUR SELECTION OPTIONS****************************//
void breeze::MyForm::MovetoToping_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = ToppingSelect;
	
}
void breeze::MyForm::VeggieDelightCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (VeggieDelightCheckBox->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		ptr = new veggie_delight;
		pizz->SaveFlavour(ptr);
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price()+pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		 FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
void breeze::MyForm::TikkaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TikkaMisc2->Checked == true)
	{
		FlavourPriceBox->Text = "CURRENT PRICE = Rs";
		tikka* Tikka = new tikka;
		Tikka->set_beef(true);
		pizz->fpoint = Tikka;
		pizz->FlavourMiscSet("beef");
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));

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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
	FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
		FlavourPriceBox->AppendText(Convert::ToString(pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price()));
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
//*****************************FLAVOUR SELECTION OPTIONS****************************//

void breeze::MyForm::ToppingSelect_Enter(System::Object^ sender, System::EventArgs^ e) {
	pizz->tpoint = new Chicken;
	ChickenCheck->Text = "'CHICKEN'\n" + gotoString(pizz->tpoint->getdetails());
	delete pizz->tpoint;

	pizz->tpoint = new Pepperoni;
	PepperoniCheck->Text = "'PEPPERONI'\n" + gotoString(pizz->tpoint->getdetails());
	delete pizz->tpoint;

	pizz->tpoint = new Beef;
	BeefCheck->Text = "'BEEF'\n" + gotoString(pizz->tpoint->getdetails());
	delete pizz->tpoint;

	pizz->tpoint = new Mashroom;
	MashroomCheck->Text = "'MASHROOMS'\n" + gotoString(pizz->tpoint->getdetails());
	delete pizz->tpoint;

	pizz->tpoint = new Extra_Cheez;
	Extra_CheezCheck->Text = "'EXTRA_CHEESE'\n" + gotoString(pizz->tpoint->getdetails());
	delete pizz->tpoint;

	pizz->tpoint = new Sausage;
	SausageCheck->Text = "'SAUSAGE'\n" + gotoString(pizz->tpoint->getdetails());
	delete pizz->tpoint;

}


void breeze::MyForm::ChickenCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ChickenCheck->Checked == true)
	{
		CheckBBQ_Sause->Visible = true;
		CheeseLabel->Visible = true;
		ChooseCheeseBox->Visible = true;

		PepperoniCheck->Checked = false;
		BeefCheck->Checked = false;
		MashroomCheck->Checked = false;
		Extra_CheezCheck->Checked = false;
		SausageCheck->Checked = false;
	
		Chicken* C = new Chicken;
		ToppingPriceBox->Text = "CURRENT PRICE\nRs: " + Convert::ToString(C->getprice()+pizz->getCrustPointer()->get_price()+pizz->getFlavourPointer()->get_price());
		delete C;
	}
	else if (ChickenCheck->Checked == false)
	{
		CheckBBQ_Sause->Visible = false;
		ChooseCheeseBox->Visible = false;
		CheeseLabel->Visible = false;
	}
}
void breeze::MyForm::PepperoniCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (PepperoniCheck->Checked == true)
	{
		TypeLabel->Visible = true;
		ChooseTypeBox->Visible = true;
		QuantityOfCheeseLabel->Visible = true;
		ChooseQuantityOfCheezBox->Visible = true;

		ChickenCheck->Checked = false;
		BeefCheck->Checked = false;
		MashroomCheck->Checked = false;
		Extra_CheezCheck->Checked = false;
		SausageCheck->Checked = false;

		Pepperoni* P = new Pepperoni;
		ToppingPriceBox->Text = "CURRENT PRICE\nRS: " + Convert::ToString(P->getprice()+pizz->getCrustPointer()->get_price()+pizz->getFlavourPointer()->get_price());
		delete P;
	}
	else if (PepperoniCheck->Checked == false)
	{
		TypeLabel->Visible = false;
		ChooseTypeBox->Visible = false;
		QuantityOfCheeseLabel->Visible = false;
		ChooseQuantityOfCheezBox->Visible = false;
	}
}
void breeze::MyForm::BeefCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (BeefCheck->Checked == true)
	{
		CheckClovesSpice->Visible = true;
		PeppersLabel->Visible = true;
		ChoosePeppersBox->Visible = true;

		ChickenCheck->Checked = false;
		PepperoniCheck->Checked = false;
		MashroomCheck->Checked = false;
		Extra_CheezCheck->Checked = false;
		SausageCheck->Checked = false;

		Beef* B = new Beef;
		ToppingPriceBox->Text = "CURRENT PRICE\nRS: " + Convert::ToString(B->getprice()+pizz->getCrustPointer()->get_price()+pizz->getFlavourPointer()->get_price());
		delete B;
	}
	else if (BeefCheck->Checked == false)
	{
		CheckClovesSpice->Visible = false;
		PeppersLabel->Visible = false;
		ChoosePeppersBox->Visible = false;
	}
}
void breeze::MyForm::MashroomCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (MashroomCheck->Checked == true)
	{
		CheckCreamlized_Onion->Visible = true;
		CheckCreamyGarlicSause->Visible = true;

		ChickenCheck->Checked = false;
		PepperoniCheck->Checked = false;
		BeefCheck->Checked = false;
		Extra_CheezCheck->Checked = false;
		SausageCheck->Checked = false;

		Mashroom* M = new Mashroom;
		ToppingPriceBox->Text = "CURRENT PRICE\nRS: " + Convert::ToString(M->getprice()+pizz->getCrustPointer()->get_price()+pizz->getFlavourPointer()->get_price());
		delete M;
	}
	else if (MashroomCheck->Checked == false)
	{
		CheckCreamlized_Onion->Visible = false;
		CheckCreamyGarlicSause->Visible = false;
	}
}
void breeze::MyForm::Extra_CheezCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Extra_CheezCheck->Checked == true)
	{
		CheckRedPepperFlakes->Visible = true;
		ExtraLabel->Visible = true;
		ChooseExtraBox->Visible = true;

		ChickenCheck->Checked = false;
		PepperoniCheck->Checked = false;
		BeefCheck->Checked = false;
		MashroomCheck->Checked = false;
		SausageCheck->Checked = false;

		Extra_Cheez* E = new Extra_Cheez;
		ToppingPriceBox->Text = "CURRENT PRICE\nRS: " + Convert::ToString(E->getprice()+pizz->getCrustPointer()->get_price()+pizz->getFlavourPointer()->get_price());
		delete E;
	}
	else if (Extra_CheezCheck->Checked == false)
	{
		CheckRedPepperFlakes->Visible = false;
		ExtraLabel->Visible = false;
		ChooseExtraBox->Visible = false;
	}
}
void breeze::MyForm::SausageCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SausageCheck->Checked == true)
	{
		CheckRedPepperFlakes1->Visible = true;
		CheckBasilScattering->Visible = true;

		ChickenCheck->Checked = false;
		PepperoniCheck->Checked = false;
		BeefCheck->Checked = false;
		MashroomCheck->Checked = false;
		Extra_CheezCheck->Checked = false;

		Sausage* S = new Sausage;
		ToppingPriceBox->Text = "CURRENT PRICE\nRS: " + Convert::ToString(S->getprice() + pizz->getCrustPointer()->get_price() + pizz->getFlavourPointer()->get_price());
		delete S;
	}
	else
	{
		CheckRedPepperFlakes1->Visible = false;
		CheckBasilScattering->Visible = false;
	}
}
void breeze::MyForm::ProceedToCheckOutButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (ChickenCheck->Checked == true)
	{
		Chicken* C = new Chicken;
		if (CheckBBQ_Sause->Checked == true)
			C->setBS(true);
		else if (CheckBBQ_Sause->Checked == false)
			C->setBS(false);

		if (backtostring(ChooseCheeseBox->Text) == "Shredded_Parmesan")
			C->setCheese(Shredded_Parmesan);
		else if (backtostring(ChooseCheeseBox->Text) == "Shredded_Cheddar")
			C->setCheese(Shredded_Cheddar);


		pizz->tpoint = C;
		tabControl1->SelectedTab = CheckoutPage;
	}
	else if (PepperoniCheck->Checked == true)
	{
		Pepperoni* P = new Pepperoni;
		if (backtostring(ChooseTypeBox->Text) == "Vegan")
			P->setType(Vegan);
		else if (backtostring(ChooseTypeBox->Text) == "Non_Vegan")
			P->setType(Non_Vegan);

		if (backtostring(ChooseQuantityOfCheezBox->Text) == "Usual")
			P->setQOFMC(Usual);
		else if (backtostring(ChooseQuantityOfCheezBox->Text) == "More (Extra Charges)")
			P->setQOFMC(More);
		else if (backtostring(ChooseQuantityOfCheezBox->Text) == "Less (Less Charges)")
			P->setQOFMC(Little);
		else if (backtostring(ChooseQuantityOfCheezBox->Text) == "Don't Include (Less Charges)")
			P->setQOFMC(Not_Include);



		pizz->tpoint = P;
		tabControl1->SelectedTab = CheckoutPage;
	}
	else if (BeefCheck->Checked == true)
	{
		Beef* B = new Beef;
		if (CheckClovesSpice->Checked == true)
			B->setCS(true);
		else if (CheckClovesSpice->Checked == false)
			B->setCS(false);

		if (backtostring(ChoosePeppersBox->Text) == "Green")
			B->setpepper(Green);
		else if (backtostring(ChoosePeppersBox->Text) == "Red")
			B->setpepper(Red);



		pizz->tpoint = B;
		tabControl1->SelectedTab = CheckoutPage;
	}
	else if (MashroomCheck->Checked == true)
	{
		Mashroom* M = new Mashroom;
		if (CheckCreamlized_Onion->Checked == true)
			M->setCO(true);
		else if (CheckCreamlized_Onion->Checked == false)
			M->setCO(false);

		if (CheckCreamyGarlicSause->Checked == true)
			M->setCRGS(true);
		else if (CheckCreamyGarlicSause->Checked == false)
			M->setCRGS(false);



		pizz->tpoint = M;
		tabControl1->SelectedTab = CheckoutPage;
	}
	else if (Extra_CheezCheck->Checked == true)
	{
		Extra_Cheez* EC = new Extra_Cheez;
		if (CheckRedPepperFlakes->Checked == true)
			EC->setRPF(true);
		else if (CheckRedPepperFlakes->Checked == false)
			EC->setRPF(false);

		if (backtostring(ChooseExtraBox->Text) == "Macroni")
			EC->setExtra(Macroni);
		else if (backtostring(ChooseExtraBox->Text) == "Cheese (Extra Charges)")
			EC->setExtra(Cheese);



		pizz->tpoint = EC;
		tabControl1->SelectedTab = CheckoutPage;
	}
	else if (SausageCheck->Checked == true)
	{
		Sausage* S = new Sausage;
		if (CheckRedPepperFlakes->Checked == true)
			S->setRPF(true);
		else if (CheckRedPepperFlakes->Checked == false)
			S->setRPF(false);

		if (CheckBasilScattering->Checked == true)
			S->setBS(true);
		else if (CheckBasilScattering->Checked == false)
			S->setBS(true);


		pizz->tpoint = S;
		tabControl1->SelectedTab = CheckoutPage;
	}
	else
	{
		ToppingChooseNotice->Text = "Please Choose One";
		ToppingChooseNotice->Visible = true;
	}
	
	
}
void breeze::MyForm::CheckoutPage_Enter(System::Object^ sender, System::EventArgs^ e)
{
	if (test->getguest() == true)
	{
		long int OrderCode;
		OrderCode = (rand() % 10000) + 1000;
		OrderNoCheckOutTextBox->Text = Convert::ToString(OrderCode);
		FlavourCheckOutTextBox->AppendText(gotoString(pizz->fpoint->get_FlavName()));
		CrustCheckOutTextBox->AppendText(gotoString(pizz->cpoint->get_CrustName()));
		ToppingsCheckOutTextBox->AppendText(gotoString(pizz->tpoint->getToppingName()));

	}
	else if (test->getguest() == false)
	{
		/****/
		srand(int(time(0)));
		long int OrderCode;
		OrderCode = (rand() % 10000) + 1000;
		OrderNoCheckOutTextBox->Text = Convert::ToString(OrderCode);
		Order* o1 = new Order;
		o1->PlaceOrder(pizz);
		o1->setOrderCode(OrderCode);
		o1->FileOrder();
		NameCheckOutText->Text = gotoString(test->getname());
		AddressCheckOutTextBox->Text = gotoString(test->getaddress());
		PhoneNoTextBox->Text = Convert::ToString(test->getcontact());
		PaymentModeCheckOutLabel->Visible = true;
		CardProviderCheckOutLabel->Visible = false;
		CardCheckOutComboBox->Visible = false;
		CardNumberCheckOutLabel->Visible = false;
		CardNumberCheckOutTextBox->Visible = false;
		FlavourCheckOutTextBox->AppendText(gotoString(pizz->fpoint->get_FlavName()));
		ToppingsCheckOutTextBox->AppendText(gotoString(pizz->tpoint->getToppingName()));
		CrustCheckOutTextBox->AppendText(gotoString(pizz->cpoint->get_CrustName()));
		TotalPriceCheckOutTextBox->Text = "Rs = ";
		TotalPriceCheckOutTextBox->AppendText(Convert::ToString(o1->ReturnBill()));
		
	}
}

