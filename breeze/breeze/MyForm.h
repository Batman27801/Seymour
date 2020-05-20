#pragma once
#include "Header.h"
#include <msclr\marshal_cppstd.h>

#include<string>
namespace breeze {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//focacia* a2 = new focacia;
		//newyork* a1 = new newyork;
		//crust* p;
		int total_no_of_pizzas;
		int* size = new int[total_no_of_pizzas];
		pizza *pizz=new pizza;
		flavour *ptr;
		Order *order = new Order;
		account* test = new account;
		Toping* tptr;


	private: System::Windows::Forms::TabPage^ CrustSelect;
	public:




	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Label^ subtitle;

	private: System::Windows::Forms::Label^ title;


	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::TabPage^ UserLogin;
	private: System::Windows::Forms::Label^ UserHeading;


	private: System::Windows::Forms::TabPage^ FlavourSelect;
	private: System::Windows::Forms::PictureBox^ TikkaPictureBox1;
	private: System::Windows::Forms::PictureBox^ FajitaPictureBox;
	private: System::Windows::Forms::PictureBox^ ChilliDelightPictureBox;
	private: System::Windows::Forms::PictureBox^ BBQBuzzPictureBox;











	private: System::Windows::Forms::PictureBox^ SeekhKebabPictureBox;
	private: System::Windows::Forms::PictureBox^ TheCheesePictureBox;





	private: System::Windows::Forms::Button^ MoveToCrustSelect;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ MovetoToping;








	private: System::Windows::Forms::Button^ customer;
	private: System::Windows::Forms::Button^ staff;
	private: System::Windows::Forms::PictureBox^ VeggieDelightPictureBox;

	private: System::Windows::Forms::CheckBox^ VeggieDelightCheckBox;
	private: System::Windows::Forms::CheckBox^ TheCheeseCheckbox;
	private: System::Windows::Forms::CheckBox^ SeekhKebabCheckbox;
	private: System::Windows::Forms::CheckBox^ TikkaCheckbox;
	private: System::Windows::Forms::CheckBox^ FajitaCheckbox;
	private: System::Windows::Forms::CheckBox^ ChilliDelightCheckbox;
	private: System::Windows::Forms::CheckBox^ BbqBuzzCheckbox;
	private: System::Windows::Forms::Label^ usersubheading;
	private: System::Windows::Forms::Label^ GuestDescp;

	private: System::Windows::Forms::Label^ GuestHeading;
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::TextBox^ PasswordBox;
	private: System::Windows::Forms::TextBox^ UsernameBox;




	private: System::Windows::Forms::Label^ UserpartHeading;

	private: System::Windows::Forms::Button^ GuesetOrderButton;
	private: System::Windows::Forms::Label^ Password;

	private: System::Windows::Forms::Label^ subforcredentials;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Signup;
	private: System::Windows::Forms::Label^ NewAcc;
	private: System::Windows::Forms::Button^ Login;
	private: System::Windows::Forms::Label^ incorrect;
	private: System::Windows::Forms::TabPage^ SignUpPage;
	private: System::Windows::Forms::TabPage^ UserPage;
	private: System::Windows::Forms::Label^ SignUPtext;
	private: System::Windows::Forms::Label^ SignUpHeading;
	private: System::Windows::Forms::Label^ fnamelabel;
	private: System::Windows::Forms::TextBox^ FNamebox;
	private: System::Windows::Forms::TextBox^ Namebox;
	private: System::Windows::Forms::Label^ namelabel;
	private: System::Windows::Forms::Label^ agereq;

	private: System::Windows::Forms::TextBox^ agebox;
	private: System::Windows::Forms::Label^ Agelabel;
	private: System::Windows::Forms::ComboBox^ genderbox;

	private: System::Windows::Forms::Label^ genderlabel;
	private: System::Windows::Forms::Label^ contactreq;

	private: System::Windows::Forms::TextBox^ contactbox;
	private: System::Windows::Forms::Label^ contactlabel;
private: System::Windows::Forms::Label^ cniclabel;
private: System::Windows::Forms::Label^ cnicreq;
private: System::Windows::Forms::TextBox^ cnicbox;
private: System::Windows::Forms::TextBox^ addressbox;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::CheckBox^ TikkaMisc2;

private: System::Windows::Forms::CheckBox^ TikkaMisc1;
private: System::Windows::Forms::CheckBox^ FajitaMisc2;
private: System::Windows::Forms::CheckBox^ FajitaMisc1;
private: System::Windows::Forms::CheckBox^ ChilliDelightMisc2;
private: System::Windows::Forms::CheckBox^ ChilliDelightMisc1;
private: System::Windows::Forms::CheckBox^ BBQBuzzMisc2;
private: System::Windows::Forms::CheckBox^ BBQBuzzMisc1;
private: System::Windows::Forms::CheckBox^ SeekhKebabMisc2;
private: System::Windows::Forms::CheckBox^ SeekhKebabMisc1;
private: System::Windows::Forms::CheckBox^ TheCheeseMisc3;
private: System::Windows::Forms::CheckBox^ TheCheeseMisc2;
private: System::Windows::Forms::CheckBox^ TheCheeseMisc1;
private: System::Windows::Forms::CheckBox^ codcheckbox;
private: System::Windows::Forms::CheckBox^ cardcheckbox;
private: System::Windows::Forms::Label^ paymenttypelabel;
private: System::Windows::Forms::ComboBox^ cardproviderbox;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ cardnobox;
private: System::Windows::Forms::Label^ cardnolabel;
private: System::Windows::Forms::Label^ cardnoreq;
private: System::Windows::Forms::TextBox^ cardexpmonth;

private: System::Windows::Forms::Label^ cardexplabel;
private: System::Windows::Forms::TextBox^ cardexpyear;
private: System::Windows::Forms::Label^ yearlabel;

private: System::Windows::Forms::Label^ monthlabel;
private: System::Windows::Forms::TextBox^ usernamebox2;
private: System::Windows::Forms::Label^ usernamelabel;
private: System::Windows::Forms::Label^ Emaillabel;
private: System::Windows::Forms::Label^ notavailablelabel;

private: System::Windows::Forms::Label^ availablelabel;
private: System::Windows::Forms::Button^ usernameavailability;
private: System::Windows::Forms::TextBox^ emailbox;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Button^ signup2;
private: System::Windows::Forms::TextBox^ passwordbox2;

private: System::Windows::Forms::Label^ passwordlabel;
private: System::Windows::Forms::Label^ emailreq;

private: System::Windows::Forms::Label^ fnamereq;
private: System::Windows::Forms::Label^ namereq;
private: System::Windows::Forms::Label^ expreq;
private: System::Windows::Forms::Label^ expreq2;
private: System::Windows::Forms::Label^ usernamereq2;
private: System::Windows::Forms::Label^ passreq;
private: System::Windows::Forms::Label^ errorlabel;
private: System::Windows::Forms::Label^ codlabel;
private: System::Windows::Forms::Button^ backtologinbutton;
private: System::Windows::Forms::Label^ FlavorHeading;




private: System::Windows::Forms::Label^ Crustheading;
private: System::Windows::Forms::TabPage^ ToppingSelect;
private: System::Windows::Forms::Label^ ToppingHeading;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::PictureBox^ ToppingChicken;
private: System::Windows::Forms::CheckBox^ ChickenCheck;
private: System::Windows::Forms::CheckBox^ CheckBBQ_Sause;

private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::ComboBox^ ChooseCheeseBox;
private: System::Windows::Forms::Label^ CheeseLabel;

private: System::Windows::Forms::CheckBox^ PepperoniCheck;
private: System::Windows::Forms::PictureBox^ ToppingPepperoni;
private: System::Windows::Forms::Label^ QuantityOfCheeseLabel;


private: System::Windows::Forms::ComboBox^ ChooseQuantityOfCheezBox;
private: System::Windows::Forms::Label^ TypeLabel;


private: System::Windows::Forms::ComboBox^ ChooseTypeBox;
private: System::Windows::Forms::CheckBox^ BeefCheck;
private: System::Windows::Forms::PictureBox^ ToppingBeef;
private: System::Windows::Forms::CheckBox^ CheckClovesSpice;
private: System::Windows::Forms::Label^ PeppersLabel;

private: System::Windows::Forms::ComboBox^ ChoosePeppersBox;
private: System::Windows::Forms::CheckBox^ CheckCreamlized_Onion;


private: System::Windows::Forms::PictureBox^ ToppingMashrooms;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::CheckBox^ CheckCreamyGarlicSause;


private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::CheckBox^ MashroomCheck;
private: System::Windows::Forms::CheckBox^ Extra_CheezCheck;
private: System::Windows::Forms::PictureBox^ ToppingExtra_Cheez;
private: System::Windows::Forms::CheckBox^ CheckRedPepperFlakes;
private: System::Windows::Forms::Label^ ExtraLabel;


private: System::Windows::Forms::ComboBox^ ChooseExtraBox;
private: System::Windows::Forms::CheckBox^ CheckRedPepperFlakes1;


private: System::Windows::Forms::PictureBox^ ToppingSausage;
private: System::Windows::Forms::CheckBox^ SausageCheck;
private: System::Windows::Forms::CheckBox^ CheckBasilScattering;
private: System::Windows::Forms::Button^ ProceedToCheckOutButton;



private: System::Windows::Forms::Button^ BacktoFlavors;
private: System::Windows::Forms::CheckBox^ italiancheckbox;


private: System::Windows::Forms::Label^ italianpic;
private: System::Windows::Forms::ComboBox^ italianherbbox;
private: System::Windows::Forms::Label^ italianherblabel;



private: System::Windows::Forms::ComboBox^ italiancookstylebox;
private: System::Windows::Forms::Label^ italiancooklabel;
private: System::Windows::Forms::Button^ toflavormenu;

private: System::Windows::Forms::Label^ deepdishpic;
private: System::Windows::Forms::Label^ stuffedpic;



private: System::Windows::Forms::Label^ sicilianpic;

private: System::Windows::Forms::TextBox^ FlavourPriceBox;
private: System::Windows::Forms::Label^ focaciapic;

private: System::Windows::Forms::Label^ stlouispic;

private: System::Windows::Forms::Label^ newyorkpic;

private: System::Windows::Forms::Label^ neapolitanpic;
private: System::Windows::Forms::CheckBox^ stuffedcheckbox;

private: System::Windows::Forms::CheckBox^ siciliancheckbox;

private: System::Windows::Forms::CheckBox^ focaciacheckbox;

private: System::Windows::Forms::CheckBox^ deepdishcheckbox;

private: System::Windows::Forms::CheckBox^ stlouischeckbox;

private: System::Windows::Forms::CheckBox^ newyorkcheckbox;

private: System::Windows::Forms::CheckBox^ neapolitancheckbox;
private: System::Windows::Forms::CheckBox^ neapolitanhand;

private: System::Windows::Forms::ComboBox^ neapolitancookstylebox;
private: System::Windows::Forms::Label^ neapolitancooklabel;
private: System::Windows::Forms::CheckBox^ newyorkmineral;

private: System::Windows::Forms::Label^ newyorkherblabel;
private: System::Windows::Forms::ComboBox^ newyorkherbbox;
private: System::Windows::Forms::CheckBox^ stlouiscutbox;
private: System::Windows::Forms::CheckBox^ stlouischeesebox;


private: System::Windows::Forms::ComboBox^ deepdishsaucebox;



private: System::Windows::Forms::Label^ deepdishsaucelabel;

private: System::Windows::Forms::Label^ deepdishthicknesslabel;
private: System::Windows::Forms::ComboBox^ deepdishthicknessbox;
private: System::Windows::Forms::ComboBox^ focaciaoilbox;

private: System::Windows::Forms::Label^ focaciaoillabel;

private: System::Windows::Forms::Label^ focaciaherblabel;
private: System::Windows::Forms::ComboBox^ focaciaherbbox;
private: System::Windows::Forms::ComboBox^ sicilianoilbox;

private: System::Windows::Forms::Label^ sicilianoillabel;

private: System::Windows::Forms::Label^ sicilianpanlabel;
private: System::Windows::Forms::ComboBox^ sicilianpanbox;
private: System::Windows::Forms::ComboBox^ stuffedfillingbox;

private: System::Windows::Forms::Label^ stuffedfillinglabel;

private: System::Windows::Forms::Label^ stuffedcheeselbel;
private: System::Windows::Forms::ComboBox^ stuffedcheezebox;
private: System::Windows::Forms::ComboBox^ stuffedlayeringbox;

private: System::Windows::Forms::Label^ stuffedlayerlabel;
private: System::Windows::Forms::TextBox^ crustpricebox;











private: System::Windows::Forms::TextBox^ ToppingPriceBox;
private: System::Windows::Forms::TabPage^ CheckoutPage;
private: System::Windows::Forms::ComboBox^ CardCheckOutComboBox;
private: System::Windows::Forms::Label^ CardProviderCheckOutLabel;
private: System::Windows::Forms::CheckBox^ CashCheckBox;
private: System::Windows::Forms::CheckBox^ CreditCardCheckBox;
private: System::Windows::Forms::Label^ PaymentModeCheckOutLabel;
private: System::Windows::Forms::Label^ AddressCheckOutLabel;
private: System::Windows::Forms::TextBox^ AddressCheckOutTextBox;
private: System::Windows::Forms::TextBox^ PhoneNoTextBox;

private: System::Windows::Forms::Label^ PhoneCheckoutLabel;
private: System::Windows::Forms::TextBox^ NameCheckOutText;
private: System::Windows::Forms::Label^ NameLabelCheckout;
private: System::Windows::Forms::TextBox^ TotalPriceCheckOutTextBox;
private: System::Windows::Forms::TextBox^ AddOnCheckOutTextBox;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ CrustCheckOutTextBox;
private: System::Windows::Forms::TextBox^ FlavourCheckOutTextBox;
private: System::Windows::Forms::Label^ TotalPriceCheckOutLabel;
private: System::Windows::Forms::Label^ AddonsCheckOutLabel;
private: System::Windows::Forms::Label^ ToppingsCheckOutLabel;
private: System::Windows::Forms::Label^ CrustCheckOutLabel;
private: System::Windows::Forms::Label^ FlavourCheckOutLabel;
private: System::Windows::Forms::Label^ OrderHeadingCheckOutLabel;
private: System::Windows::Forms::TextBox^ CardNumberCheckOutTextBox;
private: System::Windows::Forms::Label^ CardNumberCheckOutLabel;
private: System::Windows::Forms::Label^ crustreq;
private: System::Windows::Forms::TextBox^ OrderNoCheckOutTextBox;
private: System::Windows::Forms::Label^ OrderNoCheckoutLabel;
private: System::Windows::Forms::TabPage^ PreMade;
private: System::Windows::Forms::Label^ pizzaamountlabel;


private: System::Windows::Forms::Label^ chefchoicesubheading2;

private: System::Windows::Forms::CheckBox^ allcheesebox;

private: System::Windows::Forms::Label^ allcheesepic;
private: System::Windows::Forms::CheckBox^ westsidegarlicbox;


private: System::Windows::Forms::Label^ westsidegarlicpic;



private: System::Windows::Forms::CheckBox^ chickensupremebox;

private: System::Windows::Forms::Label^ chickensupremepic;

private: System::Windows::Forms::CheckBox^ fajitablastbox;
private: System::Windows::Forms::Label^ fajitablastpic;
private: System::Windows::Forms::Label^ chefchoicesubheading;
private: System::Windows::Forms::Label^ ChefChoiceHeading;
private: System::Windows::Forms::ComboBox^ sizeofpizzabox4;

private: System::Windows::Forms::Label^ sizeofpizzalabel4;

private: System::Windows::Forms::ComboBox^ sizeofpizzabox3;

private: System::Windows::Forms::Label^ sizeofpizzalabel3;

private: System::Windows::Forms::ComboBox^ sizeofpizzabox2;

private: System::Windows::Forms::Label^ sizeofpizzalaebl2;

private: System::Windows::Forms::ComboBox^ sizeofpizzabox;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ sizeofpizzalabel;

private: System::Windows::Forms::ComboBox^ pizzaamountbox;
private: System::Windows::Forms::Button^ startmenubox;


private: System::Windows::Forms::ComboBox^ sizeofpizzabox5;

private: System::Windows::Forms::Label^ sizeofpizzalabel5;





















private: System::Windows::Forms::Button^ backtocrustbutton;






















	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ MainMenu;













	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->MainMenu = (gcnew System::Windows::Forms::TabPage());
			this->staff = (gcnew System::Windows::Forms::Button());
			this->customer = (gcnew System::Windows::Forms::Button());
			this->info = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->subtitle = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->UserLogin = (gcnew System::Windows::Forms::TabPage());
			this->incorrect = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Signup = (gcnew System::Windows::Forms::Button());
			this->NewAcc = (gcnew System::Windows::Forms::Label());
			this->Login = (gcnew System::Windows::Forms::Button());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->subforcredentials = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->PasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->UsernameBox = (gcnew System::Windows::Forms::TextBox());
			this->UserpartHeading = (gcnew System::Windows::Forms::Label());
			this->GuesetOrderButton = (gcnew System::Windows::Forms::Button());
			this->GuestDescp = (gcnew System::Windows::Forms::Label());
			this->GuestHeading = (gcnew System::Windows::Forms::Label());
			this->usersubheading = (gcnew System::Windows::Forms::Label());
			this->UserHeading = (gcnew System::Windows::Forms::Label());
			this->SignUpPage = (gcnew System::Windows::Forms::TabPage());
			this->backtologinbutton = (gcnew System::Windows::Forms::Button());
			this->codlabel = (gcnew System::Windows::Forms::Label());
			this->errorlabel = (gcnew System::Windows::Forms::Label());
			this->passreq = (gcnew System::Windows::Forms::Label());
			this->usernamereq2 = (gcnew System::Windows::Forms::Label());
			this->expreq = (gcnew System::Windows::Forms::Label());
			this->expreq2 = (gcnew System::Windows::Forms::Label());
			this->emailreq = (gcnew System::Windows::Forms::Label());
			this->fnamereq = (gcnew System::Windows::Forms::Label());
			this->namereq = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->signup2 = (gcnew System::Windows::Forms::Button());
			this->passwordbox2 = (gcnew System::Windows::Forms::TextBox());
			this->passwordlabel = (gcnew System::Windows::Forms::Label());
			this->notavailablelabel = (gcnew System::Windows::Forms::Label());
			this->availablelabel = (gcnew System::Windows::Forms::Label());
			this->usernameavailability = (gcnew System::Windows::Forms::Button());
			this->emailbox = (gcnew System::Windows::Forms::TextBox());
			this->Emaillabel = (gcnew System::Windows::Forms::Label());
			this->usernamebox2 = (gcnew System::Windows::Forms::TextBox());
			this->usernamelabel = (gcnew System::Windows::Forms::Label());
			this->yearlabel = (gcnew System::Windows::Forms::Label());
			this->monthlabel = (gcnew System::Windows::Forms::Label());
			this->cardexpyear = (gcnew System::Windows::Forms::TextBox());
			this->cardexpmonth = (gcnew System::Windows::Forms::TextBox());
			this->cardexplabel = (gcnew System::Windows::Forms::Label());
			this->cardnoreq = (gcnew System::Windows::Forms::Label());
			this->cardnobox = (gcnew System::Windows::Forms::TextBox());
			this->cardnolabel = (gcnew System::Windows::Forms::Label());
			this->cardproviderbox = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->codcheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->cardcheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->paymenttypelabel = (gcnew System::Windows::Forms::Label());
			this->addressbox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cnicreq = (gcnew System::Windows::Forms::Label());
			this->cnicbox = (gcnew System::Windows::Forms::TextBox());
			this->cniclabel = (gcnew System::Windows::Forms::Label());
			this->contactreq = (gcnew System::Windows::Forms::Label());
			this->contactbox = (gcnew System::Windows::Forms::TextBox());
			this->contactlabel = (gcnew System::Windows::Forms::Label());
			this->genderbox = (gcnew System::Windows::Forms::ComboBox());
			this->genderlabel = (gcnew System::Windows::Forms::Label());
			this->agereq = (gcnew System::Windows::Forms::Label());
			this->agebox = (gcnew System::Windows::Forms::TextBox());
			this->Agelabel = (gcnew System::Windows::Forms::Label());
			this->fnamelabel = (gcnew System::Windows::Forms::Label());
			this->FNamebox = (gcnew System::Windows::Forms::TextBox());
			this->Namebox = (gcnew System::Windows::Forms::TextBox());
			this->namelabel = (gcnew System::Windows::Forms::Label());
			this->SignUPtext = (gcnew System::Windows::Forms::Label());
			this->SignUpHeading = (gcnew System::Windows::Forms::Label());
			this->UserPage = (gcnew System::Windows::Forms::TabPage());
			this->PreMade = (gcnew System::Windows::Forms::TabPage());
			this->pizzaamountbox = (gcnew System::Windows::Forms::ComboBox());
			this->startmenubox = (gcnew System::Windows::Forms::Button());
			this->sizeofpizzabox5 = (gcnew System::Windows::Forms::ComboBox());
			this->sizeofpizzalabel5 = (gcnew System::Windows::Forms::Label());
			this->sizeofpizzabox4 = (gcnew System::Windows::Forms::ComboBox());
			this->sizeofpizzalabel4 = (gcnew System::Windows::Forms::Label());
			this->sizeofpizzabox3 = (gcnew System::Windows::Forms::ComboBox());
			this->sizeofpizzalabel3 = (gcnew System::Windows::Forms::Label());
			this->sizeofpizzabox2 = (gcnew System::Windows::Forms::ComboBox());
			this->sizeofpizzalaebl2 = (gcnew System::Windows::Forms::Label());
			this->sizeofpizzabox = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->sizeofpizzalabel = (gcnew System::Windows::Forms::Label());
			this->pizzaamountlabel = (gcnew System::Windows::Forms::Label());
			this->chefchoicesubheading2 = (gcnew System::Windows::Forms::Label());
			this->allcheesebox = (gcnew System::Windows::Forms::CheckBox());
			this->allcheesepic = (gcnew System::Windows::Forms::Label());
			this->westsidegarlicbox = (gcnew System::Windows::Forms::CheckBox());
			this->westsidegarlicpic = (gcnew System::Windows::Forms::Label());
			this->chickensupremebox = (gcnew System::Windows::Forms::CheckBox());
			this->chickensupremepic = (gcnew System::Windows::Forms::Label());
			this->fajitablastbox = (gcnew System::Windows::Forms::CheckBox());
			this->fajitablastpic = (gcnew System::Windows::Forms::Label());
			this->chefchoicesubheading = (gcnew System::Windows::Forms::Label());
			this->ChefChoiceHeading = (gcnew System::Windows::Forms::Label());
			this->CrustSelect = (gcnew System::Windows::Forms::TabPage());
			this->crustreq = (gcnew System::Windows::Forms::Label());
			this->crustpricebox = (gcnew System::Windows::Forms::TextBox());
			this->stuffedlayeringbox = (gcnew System::Windows::Forms::ComboBox());
			this->stuffedlayerlabel = (gcnew System::Windows::Forms::Label());
			this->stuffedfillingbox = (gcnew System::Windows::Forms::ComboBox());
			this->stuffedfillinglabel = (gcnew System::Windows::Forms::Label());
			this->stuffedcheeselbel = (gcnew System::Windows::Forms::Label());
			this->stuffedcheezebox = (gcnew System::Windows::Forms::ComboBox());
			this->sicilianoilbox = (gcnew System::Windows::Forms::ComboBox());
			this->sicilianoillabel = (gcnew System::Windows::Forms::Label());
			this->sicilianpanlabel = (gcnew System::Windows::Forms::Label());
			this->sicilianpanbox = (gcnew System::Windows::Forms::ComboBox());
			this->focaciaoilbox = (gcnew System::Windows::Forms::ComboBox());
			this->focaciaoillabel = (gcnew System::Windows::Forms::Label());
			this->focaciaherblabel = (gcnew System::Windows::Forms::Label());
			this->focaciaherbbox = (gcnew System::Windows::Forms::ComboBox());
			this->deepdishsaucebox = (gcnew System::Windows::Forms::ComboBox());
			this->deepdishsaucelabel = (gcnew System::Windows::Forms::Label());
			this->deepdishthicknesslabel = (gcnew System::Windows::Forms::Label());
			this->deepdishthicknessbox = (gcnew System::Windows::Forms::ComboBox());
			this->stlouiscutbox = (gcnew System::Windows::Forms::CheckBox());
			this->stlouischeesebox = (gcnew System::Windows::Forms::CheckBox());
			this->newyorkmineral = (gcnew System::Windows::Forms::CheckBox());
			this->newyorkherblabel = (gcnew System::Windows::Forms::Label());
			this->newyorkherbbox = (gcnew System::Windows::Forms::ComboBox());
			this->neapolitanhand = (gcnew System::Windows::Forms::CheckBox());
			this->neapolitancookstylebox = (gcnew System::Windows::Forms::ComboBox());
			this->neapolitancooklabel = (gcnew System::Windows::Forms::Label());
			this->stuffedcheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->siciliancheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->focaciacheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->deepdishcheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->stlouischeckbox = (gcnew System::Windows::Forms::CheckBox());
			this->newyorkcheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->neapolitancheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->toflavormenu = (gcnew System::Windows::Forms::Button());
			this->deepdishpic = (gcnew System::Windows::Forms::Label());
			this->stuffedpic = (gcnew System::Windows::Forms::Label());
			this->sicilianpic = (gcnew System::Windows::Forms::Label());
			this->focaciapic = (gcnew System::Windows::Forms::Label());
			this->stlouispic = (gcnew System::Windows::Forms::Label());
			this->newyorkpic = (gcnew System::Windows::Forms::Label());
			this->neapolitanpic = (gcnew System::Windows::Forms::Label());
			this->italiancookstylebox = (gcnew System::Windows::Forms::ComboBox());
			this->italiancooklabel = (gcnew System::Windows::Forms::Label());
			this->italianherblabel = (gcnew System::Windows::Forms::Label());
			this->italianherbbox = (gcnew System::Windows::Forms::ComboBox());
			this->italianpic = (gcnew System::Windows::Forms::Label());
			this->italiancheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->Crustheading = (gcnew System::Windows::Forms::Label());
			this->FlavourSelect = (gcnew System::Windows::Forms::TabPage());
			this->FlavourPriceBox = (gcnew System::Windows::Forms::TextBox());
			this->backtocrustbutton = (gcnew System::Windows::Forms::Button());
			this->FlavorHeading = (gcnew System::Windows::Forms::Label());
			this->TheCheeseMisc3 = (gcnew System::Windows::Forms::CheckBox());
			this->TheCheeseMisc2 = (gcnew System::Windows::Forms::CheckBox());
			this->TheCheeseMisc1 = (gcnew System::Windows::Forms::CheckBox());
			this->SeekhKebabMisc2 = (gcnew System::Windows::Forms::CheckBox());
			this->SeekhKebabMisc1 = (gcnew System::Windows::Forms::CheckBox());
			this->BBQBuzzMisc2 = (gcnew System::Windows::Forms::CheckBox());
			this->BBQBuzzMisc1 = (gcnew System::Windows::Forms::CheckBox());
			this->ChilliDelightMisc2 = (gcnew System::Windows::Forms::CheckBox());
			this->ChilliDelightMisc1 = (gcnew System::Windows::Forms::CheckBox());
			this->FajitaMisc2 = (gcnew System::Windows::Forms::CheckBox());
			this->FajitaMisc1 = (gcnew System::Windows::Forms::CheckBox());
			this->TikkaMisc2 = (gcnew System::Windows::Forms::CheckBox());
			this->TikkaMisc1 = (gcnew System::Windows::Forms::CheckBox());
			this->BbqBuzzCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->ChilliDelightCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->FajitaCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->TikkaCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->SeekhKebabCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->TheCheeseCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->VeggieDelightPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->VeggieDelightCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->TheCheesePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->SeekhKebabPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->BBQBuzzPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ChilliDelightPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->FajitaPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->TikkaPictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MovetoToping = (gcnew System::Windows::Forms::Button());
			this->ToppingSelect = (gcnew System::Windows::Forms::TabPage());
			this->ToppingPriceBox = (gcnew System::Windows::Forms::TextBox());
			this->BacktoFlavors = (gcnew System::Windows::Forms::Button());
			this->ProceedToCheckOutButton = (gcnew System::Windows::Forms::Button());
			this->CheckBasilScattering = (gcnew System::Windows::Forms::CheckBox());
			this->SausageCheck = (gcnew System::Windows::Forms::CheckBox());
			this->CheckRedPepperFlakes1 = (gcnew System::Windows::Forms::CheckBox());
			this->ToppingSausage = (gcnew System::Windows::Forms::PictureBox());
			this->ExtraLabel = (gcnew System::Windows::Forms::Label());
			this->ChooseExtraBox = (gcnew System::Windows::Forms::ComboBox());
			this->CheckRedPepperFlakes = (gcnew System::Windows::Forms::CheckBox());
			this->Extra_CheezCheck = (gcnew System::Windows::Forms::CheckBox());
			this->ToppingExtra_Cheez = (gcnew System::Windows::Forms::PictureBox());
			this->MashroomCheck = (gcnew System::Windows::Forms::CheckBox());
			this->CheckCreamyGarlicSause = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckCreamlized_Onion = (gcnew System::Windows::Forms::CheckBox());
			this->ToppingMashrooms = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->PeppersLabel = (gcnew System::Windows::Forms::Label());
			this->ChoosePeppersBox = (gcnew System::Windows::Forms::ComboBox());
			this->CheckClovesSpice = (gcnew System::Windows::Forms::CheckBox());
			this->BeefCheck = (gcnew System::Windows::Forms::CheckBox());
			this->ToppingBeef = (gcnew System::Windows::Forms::PictureBox());
			this->QuantityOfCheeseLabel = (gcnew System::Windows::Forms::Label());
			this->ChooseQuantityOfCheezBox = (gcnew System::Windows::Forms::ComboBox());
			this->TypeLabel = (gcnew System::Windows::Forms::Label());
			this->ChooseTypeBox = (gcnew System::Windows::Forms::ComboBox());
			this->PepperoniCheck = (gcnew System::Windows::Forms::CheckBox());
			this->ToppingPepperoni = (gcnew System::Windows::Forms::PictureBox());
			this->CheeseLabel = (gcnew System::Windows::Forms::Label());
			this->ChooseCheeseBox = (gcnew System::Windows::Forms::ComboBox());
			this->CheckBBQ_Sause = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->ChickenCheck = (gcnew System::Windows::Forms::CheckBox());
			this->ToppingChicken = (gcnew System::Windows::Forms::PictureBox());
			this->ToppingHeading = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CheckoutPage = (gcnew System::Windows::Forms::TabPage());
			this->OrderNoCheckOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OrderNoCheckoutLabel = (gcnew System::Windows::Forms::Label());
			this->TotalPriceCheckOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddOnCheckOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->CrustCheckOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FlavourCheckOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TotalPriceCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->AddonsCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->ToppingsCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->CrustCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->FlavourCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->OrderHeadingCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->CardNumberCheckOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CardNumberCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->CardCheckOutComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CardProviderCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->CashCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->CreditCardCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->PaymentModeCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->AddressCheckOutLabel = (gcnew System::Windows::Forms::Label());
			this->AddressCheckOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PhoneNoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PhoneCheckoutLabel = (gcnew System::Windows::Forms::Label());
			this->NameCheckOutText = (gcnew System::Windows::Forms::TextBox());
			this->NameLabelCheckout = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->MainMenu->SuspendLayout();
			this->UserLogin->SuspendLayout();
			this->SignUpPage->SuspendLayout();
			this->PreMade->SuspendLayout();
			this->CrustSelect->SuspendLayout();
			this->FlavourSelect->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VeggieDelightPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TheCheesePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SeekhKebabPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BBQBuzzPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChilliDelightPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FajitaPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TikkaPictureBox1))->BeginInit();
			this->ToppingSelect->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingSausage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingExtra_Cheez))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingMashrooms))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingBeef))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingPepperoni))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingChicken))->BeginInit();
			this->CheckoutPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->MainMenu);
			this->tabControl1->Controls->Add(this->UserLogin);
			this->tabControl1->Controls->Add(this->SignUpPage);
			this->tabControl1->Controls->Add(this->UserPage);
			this->tabControl1->Controls->Add(this->PreMade);
			this->tabControl1->Controls->Add(this->CrustSelect);
			this->tabControl1->Controls->Add(this->FlavourSelect);
			this->tabControl1->Controls->Add(this->ToppingSelect);
			this->tabControl1->Controls->Add(this->CheckoutPage);
			this->tabControl1->Location = System::Drawing::Point(-130, -32);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1218, 602);
			this->tabControl1->TabIndex = 0;
			// 
			// MainMenu
			// 
			this->MainMenu->BackColor = System::Drawing::Color::Transparent;
			this->MainMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainMenu.BackgroundImage")));
			this->MainMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->MainMenu->Controls->Add(this->staff);
			this->MainMenu->Controls->Add(this->customer);
			this->MainMenu->Controls->Add(this->info);
			this->MainMenu->Controls->Add(this->splitter1);
			this->MainMenu->Controls->Add(this->subtitle);
			this->MainMenu->Controls->Add(this->title);
			this->MainMenu->Location = System::Drawing::Point(4, 22);
			this->MainMenu->Name = L"MainMenu";
			this->MainMenu->Padding = System::Windows::Forms::Padding(3);
			this->MainMenu->Size = System::Drawing::Size(1210, 576);
			this->MainMenu->TabIndex = 0;
			this->MainMenu->Text = L"MainMenu";
			// 
			// staff
			// 
			this->staff->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->staff->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"staff.BackgroundImage")));
			this->staff->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->staff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->staff->ForeColor = System::Drawing::Color::White;
			this->staff->Location = System::Drawing::Point(274, 347);
			this->staff->Name = L"staff";
			this->staff->Size = System::Drawing::Size(301, 171);
			this->staff->TabIndex = 11;
			this->staff->Text = L"Click Here to Access The Staff Portal\r\n--For Manager\r\n--For Chefs\r\n--For Delivery"
				L" Boys";
			this->staff->UseVisualStyleBackColor = false;
			this->staff->Click += gcnew System::EventHandler(this, &MyForm::staff_Click);
			// 
			// customer
			// 
			this->customer->BackColor = System::Drawing::Color::Black;
			this->customer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"customer.BackgroundImage")));
			this->customer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->customer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customer->ForeColor = System::Drawing::Color::FloralWhite;
			this->customer->Location = System::Drawing::Point(183, 142);
			this->customer->Name = L"customer";
			this->customer->Size = System::Drawing::Size(285, 163);
			this->customer->TabIndex = 10;
			this->customer->Text = L"Click Here to Access the Customer Portal!\r\n--You Can Order From Here\r\n--View Menu"
				L" Here\r\n--Create Account Here";
			this->customer->UseVisualStyleBackColor = false;
			this->customer->Click += gcnew System::EventHandler(this, &MyForm::customer_Click);
			// 
			// info
			// 
			this->info->ForeColor = System::Drawing::Color::Black;
			this->info->Location = System::Drawing::Point(666, 519);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(222, 54);
			this->info->TabIndex = 9;
			this->info->Text = L"Project Developed by:\r\nMuhammad Ali\r\nFawad J.Fateh\r\nArun Jai";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(3, 3);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 570);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			// 
			// subtitle
			// 
			this->subtitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitle->ForeColor = System::Drawing::Color::Transparent;
			this->subtitle->Location = System::Drawing::Point(179, 81);
			this->subtitle->Name = L"subtitle";
			this->subtitle->Size = System::Drawing::Size(359, 23);
			this->subtitle->TabIndex = 6;
			this->subtitle->Text = L"Best Customizable Pizzas In Town!\r\n";
			this->subtitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// title
			// 
			this->title->Font = (gcnew System::Drawing::Font(L"Algerian", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::Transparent;
			this->title->Location = System::Drawing::Point(138, 32);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(480, 49);
			this->title->TabIndex = 5;
			this->title->Text = L"Welcome To SEYMOUR\r\n\r\n";
			// 
			// UserLogin
			// 
			this->UserLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserLogin.BackgroundImage")));
			this->UserLogin->Controls->Add(this->incorrect);
			this->UserLogin->Controls->Add(this->label3);
			this->UserLogin->Controls->Add(this->Signup);
			this->UserLogin->Controls->Add(this->NewAcc);
			this->UserLogin->Controls->Add(this->Login);
			this->UserLogin->Controls->Add(this->Password);
			this->UserLogin->Controls->Add(this->subforcredentials);
			this->UserLogin->Controls->Add(this->Username);
			this->UserLogin->Controls->Add(this->PasswordBox);
			this->UserLogin->Controls->Add(this->UsernameBox);
			this->UserLogin->Controls->Add(this->UserpartHeading);
			this->UserLogin->Controls->Add(this->GuesetOrderButton);
			this->UserLogin->Controls->Add(this->GuestDescp);
			this->UserLogin->Controls->Add(this->GuestHeading);
			this->UserLogin->Controls->Add(this->usersubheading);
			this->UserLogin->Controls->Add(this->UserHeading);
			this->UserLogin->Location = System::Drawing::Point(4, 22);
			this->UserLogin->Name = L"UserLogin";
			this->UserLogin->Size = System::Drawing::Size(1210, 576);
			this->UserLogin->TabIndex = 2;
			this->UserLogin->Text = L"tabPage1";
			this->UserLogin->UseVisualStyleBackColor = true;
			// 
			// incorrect
			// 
			this->incorrect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->incorrect->ForeColor = System::Drawing::Color::Red;
			this->incorrect->Location = System::Drawing::Point(808, 350);
			this->incorrect->Name = L"incorrect";
			this->incorrect->Size = System::Drawing::Size(311, 23);
			this->incorrect->TabIndex = 16;
			this->incorrect->Text = L"Incorrect Username or Password!";
			this->incorrect->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->incorrect->Visible = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(959, 420);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 109);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Account Holders get amazing Benefits such as Discounts and Promotions!\r\n ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Signup
			// 
			this->Signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Signup->Location = System::Drawing::Point(711, 447);
			this->Signup->Name = L"Signup";
			this->Signup->Size = System::Drawing::Size(181, 65);
			this->Signup->TabIndex = 14;
			this->Signup->Text = L"Sign Up!";
			this->Signup->UseVisualStyleBackColor = true;
			this->Signup->Click += gcnew System::EventHandler(this, &MyForm::Signup_Click);
			// 
			// NewAcc
			// 
			this->NewAcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewAcc->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->NewAcc->Location = System::Drawing::Point(684, 388);
			this->NewAcc->Name = L"NewAcc";
			this->NewAcc->Size = System::Drawing::Size(231, 65);
			this->NewAcc->TabIndex = 13;
			this->NewAcc->Text = L"Don\'t Have an Account\? \r\nSign up here!";
			this->NewAcc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Login
			// 
			this->Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Login->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Login->Location = System::Drawing::Point(893, 305);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(153, 42);
			this->Login->TabIndex = 12;
			this->Login->Text = L"Login!";
			this->Login->UseVisualStyleBackColor = true;
			this->Login->Click += gcnew System::EventHandler(this, &MyForm::Login_Click);
			// 
			// Password
			// 
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Password->ForeColor = System::Drawing::Color::White;
			this->Password->Location = System::Drawing::Point(717, 273);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(100, 26);
			this->Password->TabIndex = 11;
			this->Password->Text = L"Password:";
			this->Password->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// subforcredentials
			// 
			this->subforcredentials->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subforcredentials->ForeColor = System::Drawing::Color::White;
			this->subforcredentials->Location = System::Drawing::Point(778, 188);
			this->subforcredentials->Name = L"subforcredentials";
			this->subforcredentials->Size = System::Drawing::Size(355, 36);
			this->subforcredentials->TabIndex = 10;
			this->subforcredentials->Text = L"Please Enter you Login Credentials below:";
			this->subforcredentials->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Username
			// 
			this->Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Username->ForeColor = System::Drawing::Color::White;
			this->Username->Location = System::Drawing::Point(717, 227);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(100, 26);
			this->Username->TabIndex = 9;
			this->Username->Text = L"Username:";
			this->Username->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PasswordBox
			// 
			this->PasswordBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordBox->Location = System::Drawing::Point(844, 273);
			this->PasswordBox->Name = L"PasswordBox";
			this->PasswordBox->Size = System::Drawing::Size(253, 26);
			this->PasswordBox->TabIndex = 8;
			// 
			// UsernameBox
			// 
			this->UsernameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameBox->Location = System::Drawing::Point(844, 227);
			this->UsernameBox->Name = L"UsernameBox";
			this->UsernameBox->Size = System::Drawing::Size(253, 26);
			this->UsernameBox->TabIndex = 7;
			// 
			// UserpartHeading
			// 
			this->UserpartHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserpartHeading->ForeColor = System::Drawing::Color::White;
			this->UserpartHeading->Location = System::Drawing::Point(806, 139);
			this->UserpartHeading->Name = L"UserpartHeading";
			this->UserpartHeading->Size = System::Drawing::Size(291, 60);
			this->UserpartHeading->TabIndex = 6;
			this->UserpartHeading->Text = L"USER ACCOUNT";
			this->UserpartHeading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GuesetOrderButton
			// 
			this->GuesetOrderButton->BackColor = System::Drawing::Color::Transparent;
			this->GuesetOrderButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GuesetOrderButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GuesetOrderButton->Location = System::Drawing::Point(266, 437);
			this->GuesetOrderButton->Name = L"GuesetOrderButton";
			this->GuesetOrderButton->Size = System::Drawing::Size(214, 75);
			this->GuesetOrderButton->TabIndex = 5;
			this->GuesetOrderButton->Text = L"Take me to the Menu!\r\n";
			this->GuesetOrderButton->UseVisualStyleBackColor = false;
			this->GuesetOrderButton->Click += gcnew System::EventHandler(this, &MyForm::GuesetOrderButton_Click);
			// 
			// GuestDescp
			// 
			this->GuestDescp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GuestDescp->ForeColor = System::Drawing::Color::White;
			this->GuestDescp->Location = System::Drawing::Point(183, 245);
			this->GuestDescp->Name = L"GuestDescp";
			this->GuestDescp->Size = System::Drawing::Size(382, 163);
			this->GuestDescp->TabIndex = 4;
			this->GuestDescp->Text = resources->GetString(L"GuestDescp.Text");
			this->GuestDescp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GuestHeading
			// 
			this->GuestHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GuestHeading->ForeColor = System::Drawing::Color::White;
			this->GuestHeading->Location = System::Drawing::Point(206, 157);
			this->GuestHeading->Name = L"GuestHeading";
			this->GuestHeading->Size = System::Drawing::Size(330, 67);
			this->GuestHeading->TabIndex = 3;
			this->GuestHeading->Text = L"GUEST ORDERING";
			this->GuestHeading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// usersubheading
			// 
			this->usersubheading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usersubheading->ForeColor = System::Drawing::Color::White;
			this->usersubheading->Location = System::Drawing::Point(364, 71);
			this->usersubheading->Name = L"usersubheading";
			this->usersubheading->Size = System::Drawing::Size(604, 68);
			this->usersubheading->TabIndex = 2;
			this->usersubheading->Text = L"Login to your User Account to avail Discounts and Exciting Offers!\r\nOR\r\nContinue "
				L"as a Guest for a Quick Bite.\r\n";
			this->usersubheading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserHeading
			// 
			this->UserHeading->Font = (gcnew System::Drawing::Font(L"Algerian", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserHeading->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->UserHeading->Location = System::Drawing::Point(325, 19);
			this->UserHeading->Name = L"UserHeading";
			this->UserHeading->Size = System::Drawing::Size(664, 52);
			this->UserHeading->TabIndex = 0;
			this->UserHeading->Text = L"CUSTOMER PORTAL\r\n";
			this->UserHeading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SignUpPage
			// 
			this->SignUpPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SignUpPage.BackgroundImage")));
			this->SignUpPage->Controls->Add(this->backtologinbutton);
			this->SignUpPage->Controls->Add(this->codlabel);
			this->SignUpPage->Controls->Add(this->errorlabel);
			this->SignUpPage->Controls->Add(this->passreq);
			this->SignUpPage->Controls->Add(this->usernamereq2);
			this->SignUpPage->Controls->Add(this->expreq);
			this->SignUpPage->Controls->Add(this->expreq2);
			this->SignUpPage->Controls->Add(this->emailreq);
			this->SignUpPage->Controls->Add(this->fnamereq);
			this->SignUpPage->Controls->Add(this->namereq);
			this->SignUpPage->Controls->Add(this->label6);
			this->SignUpPage->Controls->Add(this->signup2);
			this->SignUpPage->Controls->Add(this->passwordbox2);
			this->SignUpPage->Controls->Add(this->passwordlabel);
			this->SignUpPage->Controls->Add(this->notavailablelabel);
			this->SignUpPage->Controls->Add(this->availablelabel);
			this->SignUpPage->Controls->Add(this->usernameavailability);
			this->SignUpPage->Controls->Add(this->emailbox);
			this->SignUpPage->Controls->Add(this->Emaillabel);
			this->SignUpPage->Controls->Add(this->usernamebox2);
			this->SignUpPage->Controls->Add(this->usernamelabel);
			this->SignUpPage->Controls->Add(this->yearlabel);
			this->SignUpPage->Controls->Add(this->monthlabel);
			this->SignUpPage->Controls->Add(this->cardexpyear);
			this->SignUpPage->Controls->Add(this->cardexpmonth);
			this->SignUpPage->Controls->Add(this->cardexplabel);
			this->SignUpPage->Controls->Add(this->cardnoreq);
			this->SignUpPage->Controls->Add(this->cardnobox);
			this->SignUpPage->Controls->Add(this->cardnolabel);
			this->SignUpPage->Controls->Add(this->cardproviderbox);
			this->SignUpPage->Controls->Add(this->label5);
			this->SignUpPage->Controls->Add(this->codcheckbox);
			this->SignUpPage->Controls->Add(this->cardcheckbox);
			this->SignUpPage->Controls->Add(this->paymenttypelabel);
			this->SignUpPage->Controls->Add(this->addressbox);
			this->SignUpPage->Controls->Add(this->label4);
			this->SignUpPage->Controls->Add(this->cnicreq);
			this->SignUpPage->Controls->Add(this->cnicbox);
			this->SignUpPage->Controls->Add(this->cniclabel);
			this->SignUpPage->Controls->Add(this->contactreq);
			this->SignUpPage->Controls->Add(this->contactbox);
			this->SignUpPage->Controls->Add(this->contactlabel);
			this->SignUpPage->Controls->Add(this->genderbox);
			this->SignUpPage->Controls->Add(this->genderlabel);
			this->SignUpPage->Controls->Add(this->agereq);
			this->SignUpPage->Controls->Add(this->agebox);
			this->SignUpPage->Controls->Add(this->Agelabel);
			this->SignUpPage->Controls->Add(this->fnamelabel);
			this->SignUpPage->Controls->Add(this->FNamebox);
			this->SignUpPage->Controls->Add(this->Namebox);
			this->SignUpPage->Controls->Add(this->namelabel);
			this->SignUpPage->Controls->Add(this->SignUPtext);
			this->SignUpPage->Controls->Add(this->SignUpHeading);
			this->SignUpPage->Location = System::Drawing::Point(4, 22);
			this->SignUpPage->Name = L"SignUpPage";
			this->SignUpPage->Size = System::Drawing::Size(1210, 576);
			this->SignUpPage->TabIndex = 4;
			this->SignUpPage->Text = L"tabPage1";
			this->SignUpPage->UseVisualStyleBackColor = true;
			// 
			// backtologinbutton
			// 
			this->backtologinbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backtologinbutton->Location = System::Drawing::Point(148, 23);
			this->backtologinbutton->Name = L"backtologinbutton";
			this->backtologinbutton->Size = System::Drawing::Size(108, 47);
			this->backtologinbutton->TabIndex = 52;
			this->backtologinbutton->Text = L"<--- BACK";
			this->backtologinbutton->UseVisualStyleBackColor = true;
			this->backtologinbutton->Click += gcnew System::EventHandler(this, &MyForm::backtologinbutton_Click);
			// 
			// codlabel
			// 
			this->codlabel->AutoSize = true;
			this->codlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codlabel->ForeColor = System::Drawing::Color::Red;
			this->codlabel->Location = System::Drawing::Point(902, 148);
			this->codlabel->Name = L"codlabel";
			this->codlabel->Size = System::Drawing::Size(123, 16);
			this->codlabel->TabIndex = 51;
			this->codlabel->Text = L"Please Select One!";
			this->codlabel->Visible = false;
			// 
			// errorlabel
			// 
			this->errorlabel->AutoSize = true;
			this->errorlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->errorlabel->ForeColor = System::Drawing::Color::Red;
			this->errorlabel->Location = System::Drawing::Point(808, 94);
			this->errorlabel->Name = L"errorlabel";
			this->errorlabel->Size = System::Drawing::Size(353, 20);
			this->errorlabel->TabIndex = 50;
			this->errorlabel->Text = L"Account Creation Failed! Please Fix Errors!";
			this->errorlabel->Visible = false;
			// 
			// passreq
			// 
			this->passreq->AutoSize = true;
			this->passreq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passreq->ForeColor = System::Drawing::Color::Red;
			this->passreq->Location = System::Drawing::Point(800, 476);
			this->passreq->Name = L"passreq";
			this->passreq->Size = System::Drawing::Size(183, 16);
			this->passreq->TabIndex = 49;
			this->passreq->Text = L"Must be 8 or more charecters!";
			// 
			// usernamereq2
			// 
			this->usernamereq2->AutoSize = true;
			this->usernamereq2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernamereq2->ForeColor = System::Drawing::Color::Red;
			this->usernamereq2->Location = System::Drawing::Point(800, 427);
			this->usernamereq2->Name = L"usernamereq2";
			this->usernamereq2->Size = System::Drawing::Size(158, 16);
			this->usernamereq2->TabIndex = 48;
			this->usernamereq2->Text = L"Username Not Available!";
			this->usernamereq2->Visible = false;
			// 
			// expreq
			// 
			this->expreq->AutoSize = true;
			this->expreq->ForeColor = System::Drawing::Color::Red;
			this->expreq->Location = System::Drawing::Point(928, 310);
			this->expreq->Name = L"expreq";
			this->expreq->Size = System::Drawing::Size(256, 13);
			this->expreq->TabIndex = 47;
			this->expreq->Text = L"Expiry Date can not be in the past. Card has Expired!";
			this->expreq->Visible = false;
			// 
			// expreq2
			// 
			this->expreq2->AutoSize = true;
			this->expreq2->ForeColor = System::Drawing::Color::Red;
			this->expreq2->Location = System::Drawing::Point(766, 310);
			this->expreq2->Name = L"expreq2";
			this->expreq2->Size = System::Drawing::Size(108, 13);
			this->expreq2->TabIndex = 46;
			this->expreq2->Text = L"Numeric Values Only!";
			// 
			// emailreq
			// 
			this->emailreq->AutoSize = true;
			this->emailreq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailreq->ForeColor = System::Drawing::Color::Red;
			this->emailreq->Location = System::Drawing::Point(913, 364);
			this->emailreq->Name = L"emailreq";
			this->emailreq->Size = System::Drawing::Size(180, 15);
			this->emailreq->TabIndex = 45;
			this->emailreq->Text = L"Please use Proper email format";
			this->emailreq->Visible = false;
			// 
			// fnamereq
			// 
			this->fnamereq->AutoSize = true;
			this->fnamereq->ForeColor = System::Drawing::Color::Red;
			this->fnamereq->Location = System::Drawing::Point(239, 228);
			this->fnamereq->Name = L"fnamereq";
			this->fnamereq->Size = System::Drawing::Size(211, 13);
			this->fnamereq->TabIndex = 44;
			this->fnamereq->Text = L"Name can only contain alphabets or Space";
			this->fnamereq->Visible = false;
			// 
			// namereq
			// 
			this->namereq->AutoSize = true;
			this->namereq->ForeColor = System::Drawing::Color::Red;
			this->namereq->Location = System::Drawing::Point(239, 173);
			this->namereq->Name = L"namereq";
			this->namereq->Size = System::Drawing::Size(211, 13);
			this->namereq->TabIndex = 43;
			this->namereq->Text = L"Name can only contain alphabets or Space";
			this->namereq->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(1044, 482);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 80);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Why Sign Up\?\r\nAmazing Discounts\r\nReward Points\r\nOrder History\r\nEase Of Payment\r\n";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// signup2
			// 
			this->signup2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup2->Location = System::Drawing::Point(778, 495);
			this->signup2->Name = L"signup2";
			this->signup2->Size = System::Drawing::Size(225, 64);
			this->signup2->TabIndex = 41;
			this->signup2->Text = L"Sign Me Up!";
			this->signup2->UseVisualStyleBackColor = true;
			this->signup2->Click += gcnew System::EventHandler(this, &MyForm::signup2_Click);
			// 
			// passwordbox2
			// 
			this->passwordbox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordbox2->Location = System::Drawing::Point(798, 447);
			this->passwordbox2->Name = L"passwordbox2";
			this->passwordbox2->Size = System::Drawing::Size(205, 26);
			this->passwordbox2->TabIndex = 40;
			// 
			// passwordlabel
			// 
			this->passwordlabel->AutoSize = true;
			this->passwordlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->passwordlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->passwordlabel->Location = System::Drawing::Point(636, 447);
			this->passwordlabel->Name = L"passwordlabel";
			this->passwordlabel->Size = System::Drawing::Size(122, 24);
			this->passwordlabel->TabIndex = 39;
			this->passwordlabel->Text = L"**Password:";
			// 
			// notavailablelabel
			// 
			this->notavailablelabel->AutoSize = true;
			this->notavailablelabel->ForeColor = System::Drawing::Color::Red;
			this->notavailablelabel->Location = System::Drawing::Point(1099, 409);
			this->notavailablelabel->Name = L"notavailablelabel";
			this->notavailablelabel->Size = System::Drawing::Size(73, 13);
			this->notavailablelabel->TabIndex = 38;
			this->notavailablelabel->Text = L"Not Available!";
			this->notavailablelabel->Visible = false;
			// 
			// availablelabel
			// 
			this->availablelabel->AutoSize = true;
			this->availablelabel->ForeColor = System::Drawing::Color::Lime;
			this->availablelabel->Location = System::Drawing::Point(1099, 398);
			this->availablelabel->Name = L"availablelabel";
			this->availablelabel->Size = System::Drawing::Size(53, 13);
			this->availablelabel->TabIndex = 37;
			this->availablelabel->Text = L"Available!";
			this->availablelabel->Visible = false;
			// 
			// usernameavailability
			// 
			this->usernameavailability->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->usernameavailability->Location = System::Drawing::Point(990, 399);
			this->usernameavailability->Name = L"usernameavailability";
			this->usernameavailability->Size = System::Drawing::Size(103, 23);
			this->usernameavailability->TabIndex = 36;
			this->usernameavailability->Text = L"Check Availibilty";
			this->usernameavailability->UseVisualStyleBackColor = true;
			this->usernameavailability->Click += gcnew System::EventHandler(this, &MyForm::usernameavailability_Click);
			// 
			// emailbox
			// 
			this->emailbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailbox->Location = System::Drawing::Point(905, 335);
			this->emailbox->Name = L"emailbox";
			this->emailbox->Size = System::Drawing::Size(220, 26);
			this->emailbox->TabIndex = 35;
			// 
			// Emaillabel
			// 
			this->Emaillabel->AutoSize = true;
			this->Emaillabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Emaillabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Emaillabel->Location = System::Drawing::Point(826, 338);
			this->Emaillabel->Name = L"Emaillabel";
			this->Emaillabel->Size = System::Drawing::Size(58, 20);
			this->Emaillabel->TabIndex = 34;
			this->Emaillabel->Text = L"Email:";
			// 
			// usernamebox2
			// 
			this->usernamebox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernamebox2->Location = System::Drawing::Point(798, 398);
			this->usernamebox2->Name = L"usernamebox2";
			this->usernamebox2->Size = System::Drawing::Size(173, 26);
			this->usernamebox2->TabIndex = 33;
			// 
			// usernamelabel
			// 
			this->usernamelabel->AutoSize = true;
			this->usernamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->usernamelabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->usernamelabel->Location = System::Drawing::Point(636, 398);
			this->usernamelabel->Name = L"usernamelabel";
			this->usernamelabel->Size = System::Drawing::Size(127, 24);
			this->usernamelabel->TabIndex = 32;
			this->usernamelabel->Text = L"**Username:";
			// 
			// yearlabel
			// 
			this->yearlabel->AutoSize = true;
			this->yearlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->yearlabel->Location = System::Drawing::Point(1025, 295);
			this->yearlabel->Name = L"yearlabel";
			this->yearlabel->Size = System::Drawing::Size(35, 15);
			this->yearlabel->TabIndex = 31;
			this->yearlabel->Text = L"Year:";
			// 
			// monthlabel
			// 
			this->monthlabel->AutoSize = true;
			this->monthlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->monthlabel->Location = System::Drawing::Point(902, 295);
			this->monthlabel->Name = L"monthlabel";
			this->monthlabel->Size = System::Drawing::Size(45, 15);
			this->monthlabel->TabIndex = 30;
			this->monthlabel->Text = L"Month:";
			// 
			// cardexpyear
			// 
			this->cardexpyear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardexpyear->Location = System::Drawing::Point(1066, 289);
			this->cardexpyear->Name = L"cardexpyear";
			this->cardexpyear->Size = System::Drawing::Size(100, 26);
			this->cardexpyear->TabIndex = 29;
			this->cardexpyear->Text = L"0";
			// 
			// cardexpmonth
			// 
			this->cardexpmonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardexpmonth->Location = System::Drawing::Point(953, 289);
			this->cardexpmonth->Name = L"cardexpmonth";
			this->cardexpmonth->Size = System::Drawing::Size(66, 26);
			this->cardexpmonth->TabIndex = 28;
			this->cardexpmonth->Text = L"0";
			// 
			// cardexplabel
			// 
			this->cardexplabel->AutoSize = true;
			this->cardexplabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cardexplabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cardexplabel->Location = System::Drawing::Point(735, 290);
			this->cardexplabel->Name = L"cardexplabel";
			this->cardexplabel->Size = System::Drawing::Size(149, 20);
			this->cardexplabel->TabIndex = 27;
			this->cardexplabel->Text = L"Card Expiry Date:";
			// 
			// cardnoreq
			// 
			this->cardnoreq->AutoSize = true;
			this->cardnoreq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardnoreq->ForeColor = System::Drawing::Color::Red;
			this->cardnoreq->Location = System::Drawing::Point(902, 253);
			this->cardnoreq->Name = L"cardnoreq";
			this->cardnoreq->Size = System::Drawing::Size(217, 16);
			this->cardnoreq->TabIndex = 26;
			this->cardnoreq->Text = L"Must be a valid 9 digit card number!";
			// 
			// cardnobox
			// 
			this->cardnobox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardnobox->Location = System::Drawing::Point(905, 224);
			this->cardnobox->Name = L"cardnobox";
			this->cardnobox->Size = System::Drawing::Size(220, 26);
			this->cardnobox->TabIndex = 25;
			this->cardnobox->Text = L"0";
			// 
			// cardnolabel
			// 
			this->cardnolabel->AutoSize = true;
			this->cardnolabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cardnolabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cardnolabel->Location = System::Drawing::Point(765, 227);
			this->cardnolabel->Name = L"cardnolabel";
			this->cardnolabel->Size = System::Drawing::Size(119, 20);
			this->cardnolabel->TabIndex = 24;
			this->cardnolabel->Text = L"Card Number:";
			// 
			// cardproviderbox
			// 
			this->cardproviderbox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"MasterCard", L"Visa",
					L"UnionPay", L"PayPak"
			});
			this->cardproviderbox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->cardproviderbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cardproviderbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardproviderbox->FormattingEnabled = true;
			this->cardproviderbox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"MasterCard", L"Visa", L"UnionPay", L"PayPak" });
			this->cardproviderbox->Location = System::Drawing::Point(905, 173);
			this->cardproviderbox->Name = L"cardproviderbox";
			this->cardproviderbox->Size = System::Drawing::Size(147, 28);
			this->cardproviderbox->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(762, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Card Provider:";
			// 
			// codcheckbox
			// 
			this->codcheckbox->AutoSize = true;
			this->codcheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codcheckbox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->codcheckbox->Location = System::Drawing::Point(990, 131);
			this->codcheckbox->Name = L"codcheckbox";
			this->codcheckbox->Size = System::Drawing::Size(162, 24);
			this->codcheckbox->TabIndex = 21;
			this->codcheckbox->Text = L"Cash on Delivery";
			this->codcheckbox->UseVisualStyleBackColor = true;
			this->codcheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::codcheckbox_CheckedChanged);
			// 
			// cardcheckbox
			// 
			this->cardcheckbox->AutoSize = true;
			this->cardcheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardcheckbox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cardcheckbox->Location = System::Drawing::Point(905, 131);
			this->cardcheckbox->Name = L"cardcheckbox";
			this->cardcheckbox->Size = System::Drawing::Size(66, 24);
			this->cardcheckbox->TabIndex = 20;
			this->cardcheckbox->Text = L"Card";
			this->cardcheckbox->UseVisualStyleBackColor = true;
			this->cardcheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cardcheckbox_CheckedChanged);
			// 
			// paymenttypelabel
			// 
			this->paymenttypelabel->AutoSize = true;
			this->paymenttypelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->paymenttypelabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->paymenttypelabel->Location = System::Drawing::Point(680, 132);
			this->paymenttypelabel->Name = L"paymenttypelabel";
			this->paymenttypelabel->Size = System::Drawing::Size(204, 20);
			this->paymenttypelabel->TabIndex = 19;
			this->paymenttypelabel->Text = L"**Default Payment Type:";
			// 
			// addressbox
			// 
			this->addressbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addressbox->Location = System::Drawing::Point(239, 498);
			this->addressbox->Multiline = true;
			this->addressbox->Name = L"addressbox";
			this->addressbox->Size = System::Drawing::Size(258, 61);
			this->addressbox->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(149, 499);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Address:";
			// 
			// cnicreq
			// 
			this->cnicreq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnicreq->ForeColor = System::Drawing::Color::Red;
			this->cnicreq->Location = System::Drawing::Point(410, 430);
			this->cnicreq->Name = L"cnicreq";
			this->cnicreq->Size = System::Drawing::Size(154, 52);
			this->cnicreq->TabIndex = 16;
			this->cnicreq->Text = L"Must be valid 10 digit CNIC number!";
			// 
			// cnicbox
			// 
			this->cnicbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnicbox->Location = System::Drawing::Point(239, 430);
			this->cnicbox->Name = L"cnicbox";
			this->cnicbox->Size = System::Drawing::Size(165, 26);
			this->cnicbox->TabIndex = 15;
			this->cnicbox->Text = L"0";
			// 
			// cniclabel
			// 
			this->cniclabel->AutoSize = true;
			this->cniclabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cniclabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cniclabel->Location = System::Drawing::Point(144, 436);
			this->cniclabel->Name = L"cniclabel";
			this->cniclabel->Size = System::Drawing::Size(85, 20);
			this->cniclabel->TabIndex = 14;
			this->cniclabel->Text = L"**CNIC #:";
			// 
			// contactreq
			// 
			this->contactreq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactreq->ForeColor = System::Drawing::Color::Red;
			this->contactreq->Location = System::Drawing::Point(394, 364);
			this->contactreq->Name = L"contactreq";
			this->contactreq->Size = System::Drawing::Size(154, 52);
			this->contactreq->TabIndex = 13;
			this->contactreq->Text = L"Must be valid 11 digit number starting from 0.";
			// 
			// contactbox
			// 
			this->contactbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactbox->Location = System::Drawing::Point(239, 373);
			this->contactbox->Name = L"contactbox";
			this->contactbox->Size = System::Drawing::Size(149, 26);
			this->contactbox->TabIndex = 12;
			this->contactbox->Text = L"0";
			// 
			// contactlabel
			// 
			this->contactlabel->AutoSize = true;
			this->contactlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->contactlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->contactlabel->Location = System::Drawing::Point(133, 377);
			this->contactlabel->Name = L"contactlabel";
			this->contactlabel->Size = System::Drawing::Size(100, 18);
			this->contactlabel->TabIndex = 11;
			this->contactlabel->Text = L"**Contact #:";
			this->contactlabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// genderbox
			// 
			this->genderbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->genderbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genderbox->FormattingEnabled = true;
			this->genderbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Other" });
			this->genderbox->Location = System::Drawing::Point(239, 318);
			this->genderbox->Name = L"genderbox";
			this->genderbox->Size = System::Drawing::Size(121, 28);
			this->genderbox->TabIndex = 10;
			// 
			// genderlabel
			// 
			this->genderlabel->AutoSize = true;
			this->genderlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->genderlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->genderlabel->Location = System::Drawing::Point(145, 321);
			this->genderlabel->Name = L"genderlabel";
			this->genderlabel->Size = System::Drawing::Size(88, 20);
			this->genderlabel->TabIndex = 9;
			this->genderlabel->Text = L"**Gender:";
			this->genderlabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// agereq
			// 
			this->agereq->AutoSize = true;
			this->agereq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agereq->ForeColor = System::Drawing::Color::Red;
			this->agereq->Location = System::Drawing::Point(348, 262);
			this->agereq->Name = L"agereq";
			this->agereq->Size = System::Drawing::Size(149, 16);
			this->agereq->TabIndex = 8;
			this->agereq->Text = L"Must be greater than 10!";
			// 
			// agebox
			// 
			this->agebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agebox->Location = System::Drawing::Point(239, 256);
			this->agebox->Name = L"agebox";
			this->agebox->Size = System::Drawing::Size(100, 26);
			this->agebox->TabIndex = 7;
			this->agebox->Text = L"0";
			// 
			// Agelabel
			// 
			this->Agelabel->AutoSize = true;
			this->Agelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Agelabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Agelabel->Location = System::Drawing::Point(159, 259);
			this->Agelabel->Name = L"Agelabel";
			this->Agelabel->Size = System::Drawing::Size(60, 20);
			this->Agelabel->TabIndex = 6;
			this->Agelabel->Text = L"**Age:";
			this->Agelabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// fnamelabel
			// 
			this->fnamelabel->AutoSize = true;
			this->fnamelabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->fnamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fnamelabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->fnamelabel->Location = System::Drawing::Point(138, 205);
			this->fnamelabel->Name = L"fnamelabel";
			this->fnamelabel->Size = System::Drawing::Size(101, 16);
			this->fnamelabel->TabIndex = 5;
			this->fnamelabel->Text = L"Father Name:";
			// 
			// FNamebox
			// 
			this->FNamebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FNamebox->Location = System::Drawing::Point(239, 199);
			this->FNamebox->Name = L"FNamebox";
			this->FNamebox->Size = System::Drawing::Size(258, 26);
			this->FNamebox->TabIndex = 4;
			// 
			// Namebox
			// 
			this->Namebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Namebox->Location = System::Drawing::Point(239, 145);
			this->Namebox->Name = L"Namebox";
			this->Namebox->Size = System::Drawing::Size(258, 26);
			this->Namebox->TabIndex = 3;
			// 
			// namelabel
			// 
			this->namelabel->AutoSize = true;
			this->namelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->namelabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->namelabel->Location = System::Drawing::Point(155, 148);
			this->namelabel->Name = L"namelabel";
			this->namelabel->Size = System::Drawing::Size(74, 20);
			this->namelabel->TabIndex = 2;
			this->namelabel->Text = L"**Name:";
			this->namelabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// SignUPtext
			// 
			this->SignUPtext->CausesValidation = false;
			this->SignUPtext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SignUPtext->ForeColor = System::Drawing::Color::White;
			this->SignUPtext->Location = System::Drawing::Point(138, 87);
			this->SignUPtext->Name = L"SignUPtext";
			this->SignUPtext->Size = System::Drawing::Size(664, 35);
			this->SignUPtext->TabIndex = 1;
			this->SignUPtext->Text = L"Please Enter the Information required below. Fields marked with ** are cumpolsory"
				L".";
			this->SignUPtext->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SignUpHeading
			// 
			this->SignUpHeading->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignUpHeading->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->SignUpHeading->Location = System::Drawing::Point(422, 19);
			this->SignUpHeading->Name = L"SignUpHeading";
			this->SignUpHeading->Size = System::Drawing::Size(501, 80);
			this->SignUpHeading->TabIndex = 0;
			this->SignUpHeading->Text = L"Create a New User Account";
			this->SignUpHeading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserPage
			// 
			this->UserPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserPage.BackgroundImage")));
			this->UserPage->Location = System::Drawing::Point(4, 22);
			this->UserPage->Name = L"UserPage";
			this->UserPage->Size = System::Drawing::Size(1210, 576);
			this->UserPage->TabIndex = 5;
			this->UserPage->Text = L"tabPage1";
			this->UserPage->UseVisualStyleBackColor = true;
			// 
			// PreMade
			// 
			this->PreMade->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PreMade.BackgroundImage")));
			this->PreMade->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PreMade->Controls->Add(this->pizzaamountbox);
			this->PreMade->Controls->Add(this->startmenubox);
			this->PreMade->Controls->Add(this->sizeofpizzabox5);
			this->PreMade->Controls->Add(this->sizeofpizzalabel5);
			this->PreMade->Controls->Add(this->sizeofpizzabox4);
			this->PreMade->Controls->Add(this->sizeofpizzalabel4);
			this->PreMade->Controls->Add(this->sizeofpizzabox3);
			this->PreMade->Controls->Add(this->sizeofpizzalabel3);
			this->PreMade->Controls->Add(this->sizeofpizzabox2);
			this->PreMade->Controls->Add(this->sizeofpizzalaebl2);
			this->PreMade->Controls->Add(this->sizeofpizzabox);
			this->PreMade->Controls->Add(this->label12);
			this->PreMade->Controls->Add(this->sizeofpizzalabel);
			this->PreMade->Controls->Add(this->pizzaamountlabel);
			this->PreMade->Controls->Add(this->chefchoicesubheading2);
			this->PreMade->Controls->Add(this->allcheesebox);
			this->PreMade->Controls->Add(this->allcheesepic);
			this->PreMade->Controls->Add(this->westsidegarlicbox);
			this->PreMade->Controls->Add(this->westsidegarlicpic);
			this->PreMade->Controls->Add(this->chickensupremebox);
			this->PreMade->Controls->Add(this->chickensupremepic);
			this->PreMade->Controls->Add(this->fajitablastbox);
			this->PreMade->Controls->Add(this->fajitablastpic);
			this->PreMade->Controls->Add(this->chefchoicesubheading);
			this->PreMade->Controls->Add(this->ChefChoiceHeading);
			this->PreMade->Location = System::Drawing::Point(4, 22);
			this->PreMade->Name = L"PreMade";
			this->PreMade->Size = System::Drawing::Size(1210, 576);
			this->PreMade->TabIndex = 8;
			this->PreMade->Text = L"tabPage1";
			this->PreMade->UseVisualStyleBackColor = true;
			// 
			// pizzaamountbox
			// 
			this->pizzaamountbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->pizzaamountbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pizzaamountbox->FormattingEnabled = true;
			this->pizzaamountbox->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->pizzaamountbox->Location = System::Drawing::Point(481, 390);
			this->pizzaamountbox->Name = L"pizzaamountbox";
			this->pizzaamountbox->Size = System::Drawing::Size(93, 28);
			this->pizzaamountbox->TabIndex = 25;
			// 
			// startmenubox
			// 
			this->startmenubox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startmenubox->Location = System::Drawing::Point(1040, 486);
			this->startmenubox->Name = L"startmenubox";
			this->startmenubox->Size = System::Drawing::Size(138, 65);
			this->startmenubox->TabIndex = 24;
			this->startmenubox->Text = L"Let\'s Get Cookin\'";
			this->startmenubox->UseVisualStyleBackColor = true;
			// 
			// sizeofpizzabox5
			// 
			this->sizeofpizzabox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sizeofpizzabox5->FormattingEnabled = true;
			this->sizeofpizzabox5->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"6", L"7", L"8", L"9", L"10", L"11", L"12",
					L"15", L"17", L"18", L"20"
			});
			this->sizeofpizzabox5->Location = System::Drawing::Point(846, 504);
			this->sizeofpizzabox5->Name = L"sizeofpizzabox5";
			this->sizeofpizzabox5->Size = System::Drawing::Size(93, 21);
			this->sizeofpizzabox5->TabIndex = 23;
			// 
			// sizeofpizzalabel5
			// 
			this->sizeofpizzalabel5->AutoSize = true;
			this->sizeofpizzalabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sizeofpizzalabel5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sizeofpizzalabel5->Location = System::Drawing::Point(653, 505);
			this->sizeofpizzalabel5->Name = L"sizeofpizzalabel5";
			this->sizeofpizzalabel5->Size = System::Drawing::Size(164, 20);
			this->sizeofpizzalabel5->TabIndex = 22;
			this->sizeofpizzalabel5->Text = L"Size of the Pizza 5:";
			// 
			// sizeofpizzabox4
			// 
			this->sizeofpizzabox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sizeofpizzabox4->FormattingEnabled = true;
			this->sizeofpizzabox4->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"6", L"7", L"8", L"9", L"10", L"11", L"12",
					L"15", L"17", L"18", L"20"
			});
			this->sizeofpizzabox4->Location = System::Drawing::Point(846, 457);
			this->sizeofpizzabox4->Name = L"sizeofpizzabox4";
			this->sizeofpizzabox4->Size = System::Drawing::Size(93, 21);
			this->sizeofpizzabox4->TabIndex = 21;
			// 
			// sizeofpizzalabel4
			// 
			this->sizeofpizzalabel4->AutoSize = true;
			this->sizeofpizzalabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sizeofpizzalabel4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sizeofpizzalabel4->Location = System::Drawing::Point(653, 458);
			this->sizeofpizzalabel4->Name = L"sizeofpizzalabel4";
			this->sizeofpizzalabel4->Size = System::Drawing::Size(164, 20);
			this->sizeofpizzalabel4->TabIndex = 20;
			this->sizeofpizzalabel4->Text = L"Size of the Pizza 4:";
			this->sizeofpizzalabel4->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// sizeofpizzabox3
			// 
			this->sizeofpizzabox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sizeofpizzabox3->FormattingEnabled = true;
			this->sizeofpizzabox3->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"6", L"7", L"8", L"9", L"10", L"11", L"12",
					L"15", L"17", L"18", L"20"
			});
			this->sizeofpizzabox3->Location = System::Drawing::Point(846, 409);
			this->sizeofpizzabox3->Name = L"sizeofpizzabox3";
			this->sizeofpizzabox3->Size = System::Drawing::Size(93, 21);
			this->sizeofpizzabox3->TabIndex = 19;
			this->sizeofpizzabox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// sizeofpizzalabel3
			// 
			this->sizeofpizzalabel3->AutoSize = true;
			this->sizeofpizzalabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sizeofpizzalabel3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sizeofpizzalabel3->Location = System::Drawing::Point(653, 410);
			this->sizeofpizzalabel3->Name = L"sizeofpizzalabel3";
			this->sizeofpizzalabel3->Size = System::Drawing::Size(164, 20);
			this->sizeofpizzalabel3->TabIndex = 18;
			this->sizeofpizzalabel3->Text = L"Size of the Pizza 3:";
			this->sizeofpizzalabel3->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// sizeofpizzabox2
			// 
			this->sizeofpizzabox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sizeofpizzabox2->FormattingEnabled = true;
			this->sizeofpizzabox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"6", L"7", L"8", L"9", L"10", L"11", L"12",
					L"15", L"17", L"18", L"20"
			});
			this->sizeofpizzabox2->Location = System::Drawing::Point(367, 505);
			this->sizeofpizzabox2->Name = L"sizeofpizzabox2";
			this->sizeofpizzabox2->Size = System::Drawing::Size(93, 21);
			this->sizeofpizzabox2->TabIndex = 17;
			// 
			// sizeofpizzalaebl2
			// 
			this->sizeofpizzalaebl2->AutoSize = true;
			this->sizeofpizzalaebl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sizeofpizzalaebl2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sizeofpizzalaebl2->Location = System::Drawing::Point(174, 506);
			this->sizeofpizzalaebl2->Name = L"sizeofpizzalaebl2";
			this->sizeofpizzalaebl2->Size = System::Drawing::Size(164, 20);
			this->sizeofpizzalaebl2->TabIndex = 16;
			this->sizeofpizzalaebl2->Text = L"Size of the Pizza 2:";
			// 
			// sizeofpizzabox
			// 
			this->sizeofpizzabox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sizeofpizzabox->FormattingEnabled = true;
			this->sizeofpizzabox->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"10", L"11", L"12", L"15", L"17", L"18",
					L"20", L"6", L"7", L"8", L"9"
			});
			this->sizeofpizzabox->Location = System::Drawing::Point(367, 457);
			this->sizeofpizzabox->Name = L"sizeofpizzabox";
			this->sizeofpizzabox->Size = System::Drawing::Size(93, 21);
			this->sizeofpizzabox->Sorted = true;
			this->sizeofpizzabox->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(175, 412);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(285, 16);
			this->label12->TabIndex = 14;
			this->label12->Text = L"There can be a maximum of 5 Pizzas per Order";
			// 
			// sizeofpizzalabel
			// 
			this->sizeofpizzalabel->AutoSize = true;
			this->sizeofpizzalabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sizeofpizzalabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sizeofpizzalabel->Location = System::Drawing::Point(174, 458);
			this->sizeofpizzalabel->Name = L"sizeofpizzalabel";
			this->sizeofpizzalabel->Size = System::Drawing::Size(164, 20);
			this->sizeofpizzalabel->TabIndex = 13;
			this->sizeofpizzalabel->Text = L"Size of the Pizza 1:";
			// 
			// pizzaamountlabel
			// 
			this->pizzaamountlabel->AutoSize = true;
			this->pizzaamountlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pizzaamountlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->pizzaamountlabel->Location = System::Drawing::Point(175, 394);
			this->pizzaamountlabel->Name = L"pizzaamountlabel";
			this->pizzaamountlabel->Size = System::Drawing::Size(257, 18);
			this->pizzaamountlabel->TabIndex = 11;
			this->pizzaamountlabel->Text = L"How Many Pizzas Do You Want\?";
			// 
			// chefchoicesubheading2
			// 
			this->chefchoicesubheading2->AutoSize = true;
			this->chefchoicesubheading2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chefchoicesubheading2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->chefchoicesubheading2->Location = System::Drawing::Point(310, 356);
			this->chefchoicesubheading2->Name = L"chefchoicesubheading2";
			this->chefchoicesubheading2->Size = System::Drawing::Size(718, 20);
			this->chefchoicesubheading2->TabIndex = 10;
			this->chefchoicesubheading2->Text = L"OR Fill the Following details to start creating a customized Pizza according to y"
				L"our taste!";
			// 
			// allcheesebox
			// 
			this->allcheesebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->allcheesebox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->allcheesebox->Location = System::Drawing::Point(943, 245);
			this->allcheesebox->Name = L"allcheesebox";
			this->allcheesebox->Size = System::Drawing::Size(210, 95);
			this->allcheesebox->TabIndex = 9;
			this->allcheesebox->Text = L"Experience the taste of Chicken Fajita topped with olives, bellpeppers and anchov"
				L"ies. A crispy italian crust crust and an extra chicken topping leaves you asking"
				L" for more!";
			this->allcheesebox->UseVisualStyleBackColor = true;
			// 
			// allcheesepic
			// 
			this->allcheesepic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"allcheesepic.Image")));
			this->allcheesepic->Location = System::Drawing::Point(960, 97);
			this->allcheesepic->Name = L"allcheesepic";
			this->allcheesepic->Size = System::Drawing::Size(177, 145);
			this->allcheesepic->TabIndex = 8;
			this->allcheesepic->Text = L"label2";
			// 
			// westsidegarlicbox
			// 
			this->westsidegarlicbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->westsidegarlicbox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->westsidegarlicbox->Location = System::Drawing::Point(673, 245);
			this->westsidegarlicbox->Name = L"westsidegarlicbox";
			this->westsidegarlicbox->Size = System::Drawing::Size(210, 95);
			this->westsidegarlicbox->TabIndex = 7;
			this->westsidegarlicbox->Text = L"Experience the taste of Chicken Fajita topped with olives, bellpeppers and anchov"
				L"ies. A crispy italian crust crust and an extra chicken topping leaves you asking"
				L" for more!";
			this->westsidegarlicbox->UseVisualStyleBackColor = true;
			// 
			// westsidegarlicpic
			// 
			this->westsidegarlicpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"westsidegarlicpic.Image")));
			this->westsidegarlicpic->Location = System::Drawing::Point(690, 97);
			this->westsidegarlicpic->Name = L"westsidegarlicpic";
			this->westsidegarlicpic->Size = System::Drawing::Size(177, 145);
			this->westsidegarlicpic->TabIndex = 6;
			this->westsidegarlicpic->Text = L"label2";
			// 
			// chickensupremebox
			// 
			this->chickensupremebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chickensupremebox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->chickensupremebox->Location = System::Drawing::Point(409, 245);
			this->chickensupremebox->Name = L"chickensupremebox";
			this->chickensupremebox->Size = System::Drawing::Size(210, 95);
			this->chickensupremebox->TabIndex = 5;
			this->chickensupremebox->Text = L"Experience the taste of Chicken Fajita topped with olives, bellpeppers and anchov"
				L"ies. A crispy italian crust crust and an extra chicken topping leaves you asking"
				L" for more!";
			this->chickensupremebox->UseVisualStyleBackColor = true;
			// 
			// chickensupremepic
			// 
			this->chickensupremepic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chickensupremepic.Image")));
			this->chickensupremepic->Location = System::Drawing::Point(426, 97);
			this->chickensupremepic->Name = L"chickensupremepic";
			this->chickensupremepic->Size = System::Drawing::Size(177, 145);
			this->chickensupremepic->TabIndex = 4;
			this->chickensupremepic->Text = L"label2";
			// 
			// fajitablastbox
			// 
			this->fajitablastbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fajitablastbox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->fajitablastbox->Location = System::Drawing::Point(155, 245);
			this->fajitablastbox->Name = L"fajitablastbox";
			this->fajitablastbox->Size = System::Drawing::Size(210, 95);
			this->fajitablastbox->TabIndex = 3;
			this->fajitablastbox->Text = L"Experience the taste of Chicken Fajita topped with olives, bellpeppers and anchov"
				L"ies. A crispy italian crust crust and an extra chicken topping leaves you asking"
				L" for more!";
			this->fajitablastbox->UseVisualStyleBackColor = true;
			// 
			// fajitablastpic
			// 
			this->fajitablastpic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fajitablastpic->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->fajitablastpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fajitablastpic.Image")));
			this->fajitablastpic->Location = System::Drawing::Point(172, 97);
			this->fajitablastpic->Name = L"fajitablastpic";
			this->fajitablastpic->Size = System::Drawing::Size(177, 145);
			this->fajitablastpic->TabIndex = 2;
			this->fajitablastpic->Text = L"Chicken Fajita";
			this->fajitablastpic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// chefchoicesubheading
			// 
			this->chefchoicesubheading->AutoSize = true;
			this->chefchoicesubheading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chefchoicesubheading->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->chefchoicesubheading->Location = System::Drawing::Point(461, 68);
			this->chefchoicesubheading->Name = L"chefchoicesubheading";
			this->chefchoicesubheading->Size = System::Drawing::Size(406, 20);
			this->chefchoicesubheading->TabIndex = 1;
			this->chefchoicesubheading->Text = L"Choose one of our best selling pizzas from below:";
			// 
			// ChefChoiceHeading
			// 
			this->ChefChoiceHeading->BackColor = System::Drawing::Color::Transparent;
			this->ChefChoiceHeading->Font = (gcnew System::Drawing::Font(L"Algerian", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChefChoiceHeading->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ChefChoiceHeading->Location = System::Drawing::Point(443, 19);
			this->ChefChoiceHeading->Name = L"ChefChoiceHeading";
			this->ChefChoiceHeading->Size = System::Drawing::Size(464, 49);
			this->ChefChoiceHeading->TabIndex = 0;
			this->ChefChoiceHeading->Text = L"Chef\'s Chosen Pizzas";
			// 
			// CrustSelect
			// 
			this->CrustSelect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CrustSelect.BackgroundImage")));
			this->CrustSelect->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CrustSelect->Controls->Add(this->crustreq);
			this->CrustSelect->Controls->Add(this->crustpricebox);
			this->CrustSelect->Controls->Add(this->stuffedlayeringbox);
			this->CrustSelect->Controls->Add(this->stuffedlayerlabel);
			this->CrustSelect->Controls->Add(this->stuffedfillingbox);
			this->CrustSelect->Controls->Add(this->stuffedfillinglabel);
			this->CrustSelect->Controls->Add(this->stuffedcheeselbel);
			this->CrustSelect->Controls->Add(this->stuffedcheezebox);
			this->CrustSelect->Controls->Add(this->sicilianoilbox);
			this->CrustSelect->Controls->Add(this->sicilianoillabel);
			this->CrustSelect->Controls->Add(this->sicilianpanlabel);
			this->CrustSelect->Controls->Add(this->sicilianpanbox);
			this->CrustSelect->Controls->Add(this->focaciaoilbox);
			this->CrustSelect->Controls->Add(this->focaciaoillabel);
			this->CrustSelect->Controls->Add(this->focaciaherblabel);
			this->CrustSelect->Controls->Add(this->focaciaherbbox);
			this->CrustSelect->Controls->Add(this->deepdishsaucebox);
			this->CrustSelect->Controls->Add(this->deepdishsaucelabel);
			this->CrustSelect->Controls->Add(this->deepdishthicknesslabel);
			this->CrustSelect->Controls->Add(this->deepdishthicknessbox);
			this->CrustSelect->Controls->Add(this->stlouiscutbox);
			this->CrustSelect->Controls->Add(this->stlouischeesebox);
			this->CrustSelect->Controls->Add(this->newyorkmineral);
			this->CrustSelect->Controls->Add(this->newyorkherblabel);
			this->CrustSelect->Controls->Add(this->newyorkherbbox);
			this->CrustSelect->Controls->Add(this->neapolitanhand);
			this->CrustSelect->Controls->Add(this->neapolitancookstylebox);
			this->CrustSelect->Controls->Add(this->neapolitancooklabel);
			this->CrustSelect->Controls->Add(this->stuffedcheckbox);
			this->CrustSelect->Controls->Add(this->siciliancheckbox);
			this->CrustSelect->Controls->Add(this->focaciacheckbox);
			this->CrustSelect->Controls->Add(this->deepdishcheckbox);
			this->CrustSelect->Controls->Add(this->stlouischeckbox);
			this->CrustSelect->Controls->Add(this->newyorkcheckbox);
			this->CrustSelect->Controls->Add(this->neapolitancheckbox);
			this->CrustSelect->Controls->Add(this->toflavormenu);
			this->CrustSelect->Controls->Add(this->deepdishpic);
			this->CrustSelect->Controls->Add(this->stuffedpic);
			this->CrustSelect->Controls->Add(this->sicilianpic);
			this->CrustSelect->Controls->Add(this->focaciapic);
			this->CrustSelect->Controls->Add(this->stlouispic);
			this->CrustSelect->Controls->Add(this->newyorkpic);
			this->CrustSelect->Controls->Add(this->neapolitanpic);
			this->CrustSelect->Controls->Add(this->italiancookstylebox);
			this->CrustSelect->Controls->Add(this->italiancooklabel);
			this->CrustSelect->Controls->Add(this->italianherblabel);
			this->CrustSelect->Controls->Add(this->italianherbbox);
			this->CrustSelect->Controls->Add(this->italianpic);
			this->CrustSelect->Controls->Add(this->italiancheckbox);
			this->CrustSelect->Controls->Add(this->Crustheading);
			this->CrustSelect->Location = System::Drawing::Point(4, 22);
			this->CrustSelect->Name = L"CrustSelect";
			this->CrustSelect->Size = System::Drawing::Size(1210, 576);
			this->CrustSelect->TabIndex = 1;
			this->CrustSelect->Text = L"Crust select";
			this->CrustSelect->UseVisualStyleBackColor = true;
			this->CrustSelect->Enter += gcnew System::EventHandler(this, &MyForm::CrustSelect_Enter);
			// 
			// crustreq
			// 
			this->crustreq->AutoSize = true;
			this->crustreq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crustreq->ForeColor = System::Drawing::Color::Red;
			this->crustreq->Location = System::Drawing::Point(1048, 458);
			this->crustreq->Name = L"crustreq";
			this->crustreq->Size = System::Drawing::Size(163, 18);
			this->crustreq->TabIndex = 51;
			this->crustreq->Text = L"Please Choose One!";
			this->crustreq->Visible = false;
			// 
			// crustpricebox
			// 
			this->crustpricebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crustpricebox->Location = System::Drawing::Point(1047, 358);
			this->crustpricebox->Multiline = true;
			this->crustpricebox->Name = L"crustpricebox";
			this->crustpricebox->ReadOnly = true;
			this->crustpricebox->Size = System::Drawing::Size(151, 41);
			this->crustpricebox->TabIndex = 50;
			this->crustpricebox->Text = L"CURRENT PRICE\r\n= Rs ";
			this->crustpricebox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// stuffedlayeringbox
			// 
			this->stuffedlayeringbox->FormattingEnabled = true;
			this->stuffedlayeringbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Single", L"Thincut", L"Double" });
			this->stuffedlayeringbox->Location = System::Drawing::Point(974, 547);
			this->stuffedlayeringbox->Name = L"stuffedlayeringbox";
			this->stuffedlayeringbox->Size = System::Drawing::Size(66, 21);
			this->stuffedlayeringbox->TabIndex = 49;
			this->stuffedlayeringbox->Visible = false;
			// 
			// stuffedlayerlabel
			// 
			this->stuffedlayerlabel->AutoSize = true;
			this->stuffedlayerlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stuffedlayerlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stuffedlayerlabel->Location = System::Drawing::Point(980, 531);
			this->stuffedlayerlabel->Name = L"stuffedlayerlabel";
			this->stuffedlayerlabel->Size = System::Drawing::Size(55, 13);
			this->stuffedlayerlabel->TabIndex = 48;
			this->stuffedlayerlabel->Text = L"Layering";
			this->stuffedlayerlabel->Visible = false;
			// 
			// stuffedfillingbox
			// 
			this->stuffedfillingbox->FormattingEnabled = true;
			this->stuffedfillingbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Edge", L"Base", L"Whole" });
			this->stuffedfillingbox->Location = System::Drawing::Point(901, 547);
			this->stuffedfillingbox->Name = L"stuffedfillingbox";
			this->stuffedfillingbox->Size = System::Drawing::Size(66, 21);
			this->stuffedfillingbox->TabIndex = 47;
			this->stuffedfillingbox->Visible = false;
			// 
			// stuffedfillinglabel
			// 
			this->stuffedfillinglabel->AutoSize = true;
			this->stuffedfillinglabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->stuffedfillinglabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stuffedfillinglabel->Location = System::Drawing::Point(907, 531);
			this->stuffedfillinglabel->Name = L"stuffedfillinglabel";
			this->stuffedfillinglabel->Size = System::Drawing::Size(40, 13);
			this->stuffedfillinglabel->TabIndex = 46;
			this->stuffedfillinglabel->Text = L"Filling";
			this->stuffedfillinglabel->Visible = false;
			// 
			// stuffedcheeselbel
			// 
			this->stuffedcheeselbel->AutoSize = true;
			this->stuffedcheeselbel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stuffedcheeselbel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stuffedcheeselbel->Location = System::Drawing::Point(837, 531);
			this->stuffedcheeselbel->Name = L"stuffedcheeselbel";
			this->stuffedcheeselbel->Size = System::Drawing::Size(49, 13);
			this->stuffedcheeselbel->TabIndex = 45;
			this->stuffedcheeselbel->Text = L"Cheese";
			this->stuffedcheeselbel->Visible = false;
			// 
			// stuffedcheezebox
			// 
			this->stuffedcheezebox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->stuffedcheezebox->FormattingEnabled = true;
			this->stuffedcheezebox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Cheddar", L"American", L"Mozerralla" });
			this->stuffedcheezebox->Location = System::Drawing::Point(828, 547);
			this->stuffedcheezebox->Name = L"stuffedcheezebox";
			this->stuffedcheezebox->Size = System::Drawing::Size(67, 21);
			this->stuffedcheezebox->TabIndex = 44;
			this->stuffedcheezebox->Visible = false;
			// 
			// sicilianoilbox
			// 
			this->sicilianoilbox->FormattingEnabled = true;
			this->sicilianoilbox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Olive ", L"Canola", L"Flavored", L"Cooking" });
			this->sicilianoilbox->Location = System::Drawing::Point(709, 547);
			this->sicilianoilbox->Name = L"sicilianoilbox";
			this->sicilianoilbox->Size = System::Drawing::Size(84, 21);
			this->sicilianoilbox->TabIndex = 43;
			this->sicilianoilbox->Visible = false;
			// 
			// sicilianoillabel
			// 
			this->sicilianoillabel->AutoSize = true;
			this->sicilianoillabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sicilianoillabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sicilianoillabel->Location = System::Drawing::Point(710, 531);
			this->sicilianoillabel->Name = L"sicilianoillabel";
			this->sicilianoillabel->Size = System::Drawing::Size(65, 13);
			this->sicilianoillabel->TabIndex = 42;
			this->sicilianoillabel->Text = L"Oil Choice";
			this->sicilianoillabel->Visible = false;
			// 
			// sicilianpanlabel
			// 
			this->sicilianpanlabel->AutoSize = true;
			this->sicilianpanlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sicilianpanlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sicilianpanlabel->Location = System::Drawing::Point(610, 531);
			this->sicilianpanlabel->Name = L"sicilianpanlabel";
			this->sicilianpanlabel->Size = System::Drawing::Size(72, 13);
			this->sicilianpanlabel->TabIndex = 41;
			this->sicilianpanlabel->Text = L"Pan Choice";
			this->sicilianpanlabel->Visible = false;
			// 
			// sicilianpanbox
			// 
			this->sicilianpanbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sicilianpanbox->FormattingEnabled = true;
			this->sicilianpanbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Standard", L"Deep", L"High Temp" });
			this->sicilianpanbox->Location = System::Drawing::Point(613, 547);
			this->sicilianpanbox->Name = L"sicilianpanbox";
			this->sicilianpanbox->Size = System::Drawing::Size(90, 21);
			this->sicilianpanbox->TabIndex = 40;
			this->sicilianpanbox->Visible = false;
			// 
			// focaciaoilbox
			// 
			this->focaciaoilbox->FormattingEnabled = true;
			this->focaciaoilbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Olive Oil", L"Scented Oil", L"Flavored Oil" });
			this->focaciaoilbox->Location = System::Drawing::Point(468, 547);
			this->focaciaoilbox->Name = L"focaciaoilbox";
			this->focaciaoilbox->Size = System::Drawing::Size(84, 21);
			this->focaciaoilbox->TabIndex = 39;
			this->focaciaoilbox->Visible = false;
			// 
			// focaciaoillabel
			// 
			this->focaciaoillabel->AutoSize = true;
			this->focaciaoillabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->focaciaoillabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->focaciaoillabel->Location = System::Drawing::Point(469, 531);
			this->focaciaoillabel->Name = L"focaciaoillabel";
			this->focaciaoillabel->Size = System::Drawing::Size(69, 13);
			this->focaciaoillabel->TabIndex = 38;
			this->focaciaoillabel->Text = L"Oil Coating";
			this->focaciaoillabel->Visible = false;
			// 
			// focaciaherblabel
			// 
			this->focaciaherblabel->AutoSize = true;
			this->focaciaherblabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->focaciaherblabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->focaciaherblabel->Location = System::Drawing::Point(369, 531);
			this->focaciaherblabel->Name = L"focaciaherblabel";
			this->focaciaherblabel->Size = System::Drawing::Size(40, 13);
			this->focaciaherblabel->TabIndex = 37;
			this->focaciaherblabel->Text = L"Herbs";
			this->focaciaherblabel->Visible = false;
			// 
			// focaciaherbbox
			// 
			this->focaciaherbbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->focaciaherbbox->FormattingEnabled = true;
			this->focaciaherbbox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Onions", L"Garlic", L"Scallion", L"Garlic Powder" });
			this->focaciaherbbox->Location = System::Drawing::Point(372, 547);
			this->focaciaherbbox->Name = L"focaciaherbbox";
			this->focaciaherbbox->Size = System::Drawing::Size(90, 21);
			this->focaciaherbbox->TabIndex = 36;
			this->focaciaherbbox->Visible = false;
			// 
			// deepdishsaucebox
			// 
			this->deepdishsaucebox->FormattingEnabled = true;
			this->deepdishsaucebox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ketchup", L"Chilli", L"Special Sauce" });
			this->deepdishsaucebox->Location = System::Drawing::Point(234, 547);
			this->deepdishsaucebox->Name = L"deepdishsaucebox";
			this->deepdishsaucebox->Size = System::Drawing::Size(84, 21);
			this->deepdishsaucebox->TabIndex = 35;
			this->deepdishsaucebox->Visible = false;
			// 
			// deepdishsaucelabel
			// 
			this->deepdishsaucelabel->AutoSize = true;
			this->deepdishsaucelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deepdishsaucelabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->deepdishsaucelabel->Location = System::Drawing::Point(235, 531);
			this->deepdishsaucelabel->Name = L"deepdishsaucelabel";
			this->deepdishsaucelabel->Size = System::Drawing::Size(49, 13);
			this->deepdishsaucelabel->TabIndex = 34;
			this->deepdishsaucelabel->Text = L"Sauces";
			this->deepdishsaucelabel->Visible = false;
			// 
			// deepdishthicknesslabel
			// 
			this->deepdishthicknesslabel->AutoSize = true;
			this->deepdishthicknesslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deepdishthicknesslabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->deepdishthicknesslabel->Location = System::Drawing::Point(135, 531);
			this->deepdishthicknesslabel->Name = L"deepdishthicknesslabel";
			this->deepdishthicknesslabel->Size = System::Drawing::Size(65, 13);
			this->deepdishthicknesslabel->TabIndex = 33;
			this->deepdishthicknesslabel->Text = L"Thickness";
			this->deepdishthicknesslabel->Visible = false;
			// 
			// deepdishthicknessbox
			// 
			this->deepdishthicknessbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->deepdishthicknessbox->FormattingEnabled = true;
			this->deepdishthicknessbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Two ``", L"Two and a half ``", L"Three ``" });
			this->deepdishthicknessbox->Location = System::Drawing::Point(138, 547);
			this->deepdishthicknessbox->Name = L"deepdishthicknessbox";
			this->deepdishthicknessbox->Size = System::Drawing::Size(90, 21);
			this->deepdishthicknessbox->TabIndex = 32;
			this->deepdishthicknessbox->Visible = false;
			// 
			// stlouiscutbox
			// 
			this->stlouiscutbox->AutoSize = true;
			this->stlouiscutbox->Checked = true;
			this->stlouiscutbox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->stlouiscutbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stlouiscutbox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stlouiscutbox->Location = System::Drawing::Point(926, 253);
			this->stlouiscutbox->Name = L"stlouiscutbox";
			this->stlouiscutbox->Size = System::Drawing::Size(94, 30);
			this->stlouiscutbox->TabIndex = 31;
			this->stlouiscutbox->Text = L"Tavern Cut\r\n(square cut)";
			this->stlouiscutbox->UseVisualStyleBackColor = true;
			this->stlouiscutbox->Visible = false;
			// 
			// stlouischeesebox
			// 
			this->stlouischeesebox->AutoSize = true;
			this->stlouischeesebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stlouischeesebox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stlouischeesebox->Location = System::Drawing::Point(852, 253);
			this->stlouischeesebox->Name = L"stlouischeesebox";
			this->stlouischeesebox->Size = System::Drawing::Size(68, 30);
			this->stlouischeesebox->TabIndex = 30;
			this->stlouischeesebox->Text = L"Cheese\r\nLining";
			this->stlouischeesebox->UseVisualStyleBackColor = true;
			this->stlouischeesebox->Visible = false;
			// 
			// newyorkmineral
			// 
			this->newyorkmineral->AutoSize = true;
			this->newyorkmineral->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newyorkmineral->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->newyorkmineral->Location = System::Drawing::Point(619, 253);
			this->newyorkmineral->Name = L"newyorkmineral";
			this->newyorkmineral->Size = System::Drawing::Size(90, 17);
			this->newyorkmineral->TabIndex = 29;
			this->newyorkmineral->Text = L"Mineralized";
			this->newyorkmineral->UseVisualStyleBackColor = true;
			this->newyorkmineral->Visible = false;
			// 
			// newyorkherblabel
			// 
			this->newyorkherblabel->AutoSize = true;
			this->newyorkherblabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newyorkherblabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->newyorkherblabel->Location = System::Drawing::Point(712, 250);
			this->newyorkherblabel->Name = L"newyorkherblabel";
			this->newyorkherblabel->Size = System::Drawing::Size(44, 13);
			this->newyorkherblabel->TabIndex = 28;
			this->newyorkherblabel->Text = L"Herbs:";
			this->newyorkherblabel->Visible = false;
			// 
			// newyorkherbbox
			// 
			this->newyorkherbbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->newyorkherbbox->FormattingEnabled = true;
			this->newyorkherbbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"Onions", L"Garlic" });
			this->newyorkherbbox->Location = System::Drawing::Point(715, 266);
			this->newyorkherbbox->Name = L"newyorkherbbox";
			this->newyorkherbbox->Size = System::Drawing::Size(59, 21);
			this->newyorkherbbox->TabIndex = 27;
			this->newyorkherbbox->Visible = false;
			// 
			// neapolitanhand
			// 
			this->neapolitanhand->AutoSize = true;
			this->neapolitanhand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->neapolitanhand->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->neapolitanhand->Location = System::Drawing::Point(372, 249);
			this->neapolitanhand->Name = L"neapolitanhand";
			this->neapolitanhand->Size = System::Drawing::Size(101, 17);
			this->neapolitanhand->TabIndex = 26;
			this->neapolitanhand->Text = L"Hand Tossed";
			this->neapolitanhand->UseVisualStyleBackColor = true;
			this->neapolitanhand->Visible = false;
			// 
			// neapolitancookstylebox
			// 
			this->neapolitancookstylebox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->neapolitancookstylebox->FormattingEnabled = true;
			this->neapolitancookstylebox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pan", L"Wood Fire", L"Oven" });
			this->neapolitancookstylebox->Location = System::Drawing::Point(479, 266);
			this->neapolitancookstylebox->Name = L"neapolitancookstylebox";
			this->neapolitancookstylebox->Size = System::Drawing::Size(84, 21);
			this->neapolitancookstylebox->TabIndex = 25;
			this->neapolitancookstylebox->Visible = false;
			// 
			// neapolitancooklabel
			// 
			this->neapolitancooklabel->AutoSize = true;
			this->neapolitancooklabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->neapolitancooklabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->neapolitancooklabel->Location = System::Drawing::Point(479, 250);
			this->neapolitancooklabel->Name = L"neapolitancooklabel";
			this->neapolitancooklabel->Size = System::Drawing::Size(62, 13);
			this->neapolitancooklabel->TabIndex = 24;
			this->neapolitancooklabel->Text = L"Cookstyle";
			this->neapolitancooklabel->Visible = false;
			// 
			// stuffedcheckbox
			// 
			this->stuffedcheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stuffedcheckbox->ForeColor = System::Drawing::Color::White;
			this->stuffedcheckbox->Location = System::Drawing::Point(840, 433);
			this->stuffedcheckbox->Name = L"stuffedcheckbox";
			this->stuffedcheckbox->Size = System::Drawing::Size(176, 84);
			this->stuffedcheckbox->TabIndex = 23;
			this->stuffedcheckbox->Text = L"stuffed text here";
			this->stuffedcheckbox->UseVisualStyleBackColor = true;
			this->stuffedcheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::stuffedcheckbox_CheckedChanged);
			// 
			// siciliancheckbox
			// 
			this->siciliancheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->siciliancheckbox->ForeColor = System::Drawing::Color::White;
			this->siciliancheckbox->Location = System::Drawing::Point(617, 433);
			this->siciliancheckbox->Name = L"siciliancheckbox";
			this->siciliancheckbox->Size = System::Drawing::Size(176, 84);
			this->siciliancheckbox->TabIndex = 22;
			this->siciliancheckbox->Text = L"Sicilian text here";
			this->siciliancheckbox->UseVisualStyleBackColor = true;
			this->siciliancheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::siciliancheckbox_CheckedChanged);
			// 
			// focaciacheckbox
			// 
			this->focaciacheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->focaciacheckbox->ForeColor = System::Drawing::Color::White;
			this->focaciacheckbox->Location = System::Drawing::Point(372, 433);
			this->focaciacheckbox->Name = L"focaciacheckbox";
			this->focaciacheckbox->Size = System::Drawing::Size(176, 84);
			this->focaciacheckbox->TabIndex = 21;
			this->focaciacheckbox->Text = L"Focacia text here";
			this->focaciacheckbox->UseVisualStyleBackColor = true;
			this->focaciacheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::focaciacheckbox_CheckedChanged);
			// 
			// deepdishcheckbox
			// 
			this->deepdishcheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deepdishcheckbox->ForeColor = System::Drawing::Color::White;
			this->deepdishcheckbox->Location = System::Drawing::Point(138, 433);
			this->deepdishcheckbox->Name = L"deepdishcheckbox";
			this->deepdishcheckbox->Size = System::Drawing::Size(176, 97);
			this->deepdishcheckbox->TabIndex = 20;
			this->deepdishcheckbox->Text = L"Deep dish text here";
			this->deepdishcheckbox->UseVisualStyleBackColor = true;
			this->deepdishcheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::deepdishcheckbox_CheckedChanged);
			// 
			// stlouischeckbox
			// 
			this->stlouischeckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stlouischeckbox->ForeColor = System::Drawing::Color::White;
			this->stlouischeckbox->Location = System::Drawing::Point(840, 163);
			this->stlouischeckbox->Name = L"stlouischeckbox";
			this->stlouischeckbox->Size = System::Drawing::Size(176, 84);
			this->stlouischeckbox->TabIndex = 19;
			this->stlouischeckbox->Text = L"St louis text";
			this->stlouischeckbox->UseVisualStyleBackColor = true;
			this->stlouischeckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::stlouischeckbox_CheckedChanged);
			// 
			// newyorkcheckbox
			// 
			this->newyorkcheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newyorkcheckbox->ForeColor = System::Drawing::Color::White;
			this->newyorkcheckbox->Location = System::Drawing::Point(617, 163);
			this->newyorkcheckbox->Name = L"newyorkcheckbox";
			this->newyorkcheckbox->Size = System::Drawing::Size(176, 84);
			this->newyorkcheckbox->TabIndex = 18;
			this->newyorkcheckbox->Text = L"NewYork text here";
			this->newyorkcheckbox->UseVisualStyleBackColor = true;
			this->newyorkcheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::newyorkcheckbox_CheckedChanged);
			// 
			// neapolitancheckbox
			// 
			this->neapolitancheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->neapolitancheckbox->ForeColor = System::Drawing::Color::White;
			this->neapolitancheckbox->Location = System::Drawing::Point(372, 163);
			this->neapolitancheckbox->Name = L"neapolitancheckbox";
			this->neapolitancheckbox->Size = System::Drawing::Size(176, 84);
			this->neapolitancheckbox->TabIndex = 17;
			this->neapolitancheckbox->Text = L"Neapolitan text here";
			this->neapolitancheckbox->UseVisualStyleBackColor = true;
			this->neapolitancheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::neapolitancheckbox_CheckedChanged);
			// 
			// toflavormenu
			// 
			this->toflavormenu->Location = System::Drawing::Point(1063, 477);
			this->toflavormenu->Name = L"toflavormenu";
			this->toflavormenu->Size = System::Drawing::Size(135, 67);
			this->toflavormenu->TabIndex = 16;
			this->toflavormenu->Text = L"Go to Flavours Select";
			this->toflavormenu->UseVisualStyleBackColor = true;
			this->toflavormenu->Click += gcnew System::EventHandler(this, &MyForm::toflavormenu_Click);
			// 
			// deepdishpic
			// 
			this->deepdishpic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deepdishpic->ForeColor = System::Drawing::SystemColors::ControlText;
			this->deepdishpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deepdishpic.Image")));
			this->deepdishpic->Location = System::Drawing::Point(152, 300);
			this->deepdishpic->Name = L"deepdishpic";
			this->deepdishpic->Size = System::Drawing::Size(141, 130);
			this->deepdishpic->TabIndex = 15;
			this->deepdishpic->Text = L"DEEPDISH";
			this->deepdishpic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// stuffedpic
			// 
			this->stuffedpic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->stuffedpic->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stuffedpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stuffedpic.Image")));
			this->stuffedpic->Location = System::Drawing::Point(861, 300);
			this->stuffedpic->Name = L"stuffedpic";
			this->stuffedpic->Size = System::Drawing::Size(141, 130);
			this->stuffedpic->TabIndex = 14;
			this->stuffedpic->Text = L"STUFFED";
			this->stuffedpic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// sicilianpic
			// 
			this->sicilianpic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sicilianpic->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sicilianpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sicilianpic.Image")));
			this->sicilianpic->Location = System::Drawing::Point(633, 300);
			this->sicilianpic->Name = L"sicilianpic";
			this->sicilianpic->Size = System::Drawing::Size(141, 130);
			this->sicilianpic->TabIndex = 13;
			this->sicilianpic->Text = L"SICILIAN";
			this->sicilianpic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// focaciapic
			// 
			this->focaciapic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->focaciapic->ForeColor = System::Drawing::SystemColors::ControlText;
			this->focaciapic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"focaciapic.Image")));
			this->focaciapic->Location = System::Drawing::Point(387, 300);
			this->focaciapic->Name = L"focaciapic";
			this->focaciapic->Size = System::Drawing::Size(141, 130);
			this->focaciapic->TabIndex = 12;
			this->focaciapic->Text = L"FOCACIA";
			this->focaciapic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// stlouispic
			// 
			this->stlouispic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->stlouispic->ForeColor = System::Drawing::SystemColors::ControlText;
			this->stlouispic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stlouispic.Image")));
			this->stlouispic->Location = System::Drawing::Point(861, 30);
			this->stlouispic->Name = L"stlouispic";
			this->stlouispic->Size = System::Drawing::Size(141, 130);
			this->stlouispic->TabIndex = 11;
			this->stlouispic->Text = L"ST. LOUIS";
			this->stlouispic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// newyorkpic
			// 
			this->newyorkpic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->newyorkpic->ForeColor = System::Drawing::SystemColors::ControlText;
			this->newyorkpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newyorkpic.Image")));
			this->newyorkpic->Location = System::Drawing::Point(633, 30);
			this->newyorkpic->Name = L"newyorkpic";
			this->newyorkpic->Size = System::Drawing::Size(141, 130);
			this->newyorkpic->TabIndex = 10;
			this->newyorkpic->Text = L"NEWYORK";
			this->newyorkpic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// neapolitanpic
			// 
			this->neapolitanpic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->neapolitanpic->ForeColor = System::Drawing::SystemColors::Control;
			this->neapolitanpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"neapolitanpic.Image")));
			this->neapolitanpic->Location = System::Drawing::Point(387, 30);
			this->neapolitanpic->Name = L"neapolitanpic";
			this->neapolitanpic->Size = System::Drawing::Size(141, 130);
			this->neapolitanpic->TabIndex = 9;
			this->neapolitanpic->Text = L"NEAPOLITAN";
			this->neapolitanpic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// italiancookstylebox
			// 
			this->italiancookstylebox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->italiancookstylebox->FormattingEnabled = true;
			this->italiancookstylebox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pan", L"Wood Fire", L"Oven" });
			this->italiancookstylebox->Location = System::Drawing::Point(230, 266);
			this->italiancookstylebox->Name = L"italiancookstylebox";
			this->italiancookstylebox->Size = System::Drawing::Size(84, 21);
			this->italiancookstylebox->TabIndex = 8;
			this->italiancookstylebox->Visible = false;
			// 
			// italiancooklabel
			// 
			this->italiancooklabel->AutoSize = true;
			this->italiancooklabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->italiancooklabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->italiancooklabel->Location = System::Drawing::Point(231, 250);
			this->italiancooklabel->Name = L"italiancooklabel";
			this->italiancooklabel->Size = System::Drawing::Size(62, 13);
			this->italiancooklabel->TabIndex = 7;
			this->italiancooklabel->Text = L"Cookstyle";
			this->italiancooklabel->Visible = false;
			// 
			// italianherblabel
			// 
			this->italianherblabel->AutoSize = true;
			this->italianherblabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->italianherblabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->italianherblabel->Location = System::Drawing::Point(152, 250);
			this->italianherblabel->Name = L"italianherblabel";
			this->italianherblabel->Size = System::Drawing::Size(44, 13);
			this->italianherblabel->TabIndex = 6;
			this->italianherblabel->Text = L"Herbs:";
			this->italianherblabel->Visible = false;
			// 
			// italianherbbox
			// 
			this->italianherbbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->italianherbbox->FormattingEnabled = true;
			this->italianherbbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"Onions", L"Garlic" });
			this->italianherbbox->Location = System::Drawing::Point(155, 266);
			this->italianherbbox->Name = L"italianherbbox";
			this->italianherbbox->Size = System::Drawing::Size(59, 21);
			this->italianherbbox->TabIndex = 5;
			this->italianherbbox->Visible = false;
			// 
			// italianpic
			// 
			this->italianpic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->italianpic->ForeColor = System::Drawing::SystemColors::ControlText;
			this->italianpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"italianpic.Image")));
			this->italianpic->Location = System::Drawing::Point(152, 30);
			this->italianpic->Name = L"italianpic";
			this->italianpic->Size = System::Drawing::Size(141, 130);
			this->italianpic->TabIndex = 4;
			this->italianpic->Text = L"ITALIAN";
			this->italianpic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// italiancheckbox
			// 
			this->italiancheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->italiancheckbox->ForeColor = System::Drawing::Color::White;
			this->italiancheckbox->Location = System::Drawing::Point(138, 163);
			this->italiancheckbox->Name = L"italiancheckbox";
			this->italiancheckbox->Size = System::Drawing::Size(176, 84);
			this->italiancheckbox->TabIndex = 2;
			this->italiancheckbox->Text = L"Italian text here";
			this->italiancheckbox->UseVisualStyleBackColor = true;
			this->italiancheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::italiancheckbox_CheckedChanged);
			// 
			// Crustheading
			// 
			this->Crustheading->Font = (gcnew System::Drawing::Font(L"Algerian", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Crustheading->ForeColor = System::Drawing::Color::White;
			this->Crustheading->Location = System::Drawing::Point(1040, 148);
			this->Crustheading->Name = L"Crustheading";
			this->Crustheading->Size = System::Drawing::Size(154, 97);
			this->Crustheading->TabIndex = 0;
			this->Crustheading->Text = L"CRUST MENU";
			this->Crustheading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FlavourSelect
			// 
			this->FlavourSelect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FlavourSelect.BackgroundImage")));
			this->FlavourSelect->Controls->Add(this->FlavourPriceBox);
			this->FlavourSelect->Controls->Add(this->backtocrustbutton);
			this->FlavourSelect->Controls->Add(this->FlavorHeading);
			this->FlavourSelect->Controls->Add(this->TheCheeseMisc3);
			this->FlavourSelect->Controls->Add(this->TheCheeseMisc2);
			this->FlavourSelect->Controls->Add(this->TheCheeseMisc1);
			this->FlavourSelect->Controls->Add(this->SeekhKebabMisc2);
			this->FlavourSelect->Controls->Add(this->SeekhKebabMisc1);
			this->FlavourSelect->Controls->Add(this->BBQBuzzMisc2);
			this->FlavourSelect->Controls->Add(this->BBQBuzzMisc1);
			this->FlavourSelect->Controls->Add(this->ChilliDelightMisc2);
			this->FlavourSelect->Controls->Add(this->ChilliDelightMisc1);
			this->FlavourSelect->Controls->Add(this->FajitaMisc2);
			this->FlavourSelect->Controls->Add(this->FajitaMisc1);
			this->FlavourSelect->Controls->Add(this->TikkaMisc2);
			this->FlavourSelect->Controls->Add(this->TikkaMisc1);
			this->FlavourSelect->Controls->Add(this->BbqBuzzCheckbox);
			this->FlavourSelect->Controls->Add(this->ChilliDelightCheckbox);
			this->FlavourSelect->Controls->Add(this->FajitaCheckbox);
			this->FlavourSelect->Controls->Add(this->TikkaCheckbox);
			this->FlavourSelect->Controls->Add(this->SeekhKebabCheckbox);
			this->FlavourSelect->Controls->Add(this->TheCheeseCheckbox);
			this->FlavourSelect->Controls->Add(this->VeggieDelightPictureBox);
			this->FlavourSelect->Controls->Add(this->VeggieDelightCheckBox);
			this->FlavourSelect->Controls->Add(this->TheCheesePictureBox);
			this->FlavourSelect->Controls->Add(this->SeekhKebabPictureBox);
			this->FlavourSelect->Controls->Add(this->BBQBuzzPictureBox);
			this->FlavourSelect->Controls->Add(this->ChilliDelightPictureBox);
			this->FlavourSelect->Controls->Add(this->FajitaPictureBox);
			this->FlavourSelect->Controls->Add(this->TikkaPictureBox1);
			this->FlavourSelect->Controls->Add(this->MovetoToping);
			this->FlavourSelect->Location = System::Drawing::Point(4, 22);
			this->FlavourSelect->Name = L"FlavourSelect";
			this->FlavourSelect->Size = System::Drawing::Size(1210, 576);
			this->FlavourSelect->TabIndex = 3;
			this->FlavourSelect->Text = L"FlavourSelect";
			this->FlavourSelect->UseVisualStyleBackColor = true;
			// 
			// FlavourPriceBox
			// 
			this->FlavourPriceBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FlavourPriceBox->Location = System::Drawing::Point(976, 432);
			this->FlavourPriceBox->Multiline = true;
			this->FlavourPriceBox->Name = L"FlavourPriceBox";
			this->FlavourPriceBox->ReadOnly = true;
			this->FlavourPriceBox->Size = System::Drawing::Size(184, 41);
			this->FlavourPriceBox->TabIndex = 42;
			this->FlavourPriceBox->Text = L"CURRENT PRICE\r\n= Rs ";
			this->FlavourPriceBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// backtocrustbutton
			// 
			this->backtocrustbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backtocrustbutton->Location = System::Drawing::Point(1106, 3);
			this->backtocrustbutton->Name = L"backtocrustbutton";
			this->backtocrustbutton->Size = System::Drawing::Size(104, 55);
			this->backtocrustbutton->TabIndex = 41;
			this->backtocrustbutton->Text = L"<---- Back";
			this->backtocrustbutton->UseVisualStyleBackColor = true;
			this->backtocrustbutton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// FlavorHeading
			// 
			this->FlavorHeading->Font = (gcnew System::Drawing::Font(L"Algerian", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FlavorHeading->ForeColor = System::Drawing::Color::White;
			this->FlavorHeading->Location = System::Drawing::Point(961, 61);
			this->FlavorHeading->Name = L"FlavorHeading";
			this->FlavorHeading->Size = System::Drawing::Size(192, 93);
			this->FlavorHeading->TabIndex = 39;
			this->FlavorHeading->Text = L"Flavour Menu";
			this->FlavorHeading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TheCheeseMisc3
			// 
			this->TheCheeseMisc3->AutoSize = true;
			this->TheCheeseMisc3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TheCheeseMisc3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TheCheeseMisc3->Location = System::Drawing::Point(475, 538);
			this->TheCheeseMisc3->Name = L"TheCheeseMisc3";
			this->TheCheeseMisc3->Size = System::Drawing::Size(73, 17);
			this->TheCheeseMisc3->TabIndex = 38;
			this->TheCheeseMisc3->Text = L"Cheddar";
			this->TheCheeseMisc3->UseVisualStyleBackColor = true;
			this->TheCheeseMisc3->Visible = false;
			this->TheCheeseMisc3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TheCheeseMisc3_CheckedChanged);
			// 
			// TheCheeseMisc2
			// 
			this->TheCheeseMisc2->AutoSize = true;
			this->TheCheeseMisc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TheCheeseMisc2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TheCheeseMisc2->Location = System::Drawing::Point(528, 515);
			this->TheCheeseMisc2->Name = L"TheCheeseMisc2";
			this->TheCheeseMisc2->Size = System::Drawing::Size(63, 17);
			this->TheCheeseMisc2->TabIndex = 37;
			this->TheCheeseMisc2->Text = L"Gouda";
			this->TheCheeseMisc2->UseVisualStyleBackColor = true;
			this->TheCheeseMisc2->Visible = false;
			this->TheCheeseMisc2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TheCheeseMisc2_CheckedChanged);
			// 
			// TheCheeseMisc1
			// 
			this->TheCheeseMisc1->AutoSize = true;
			this->TheCheeseMisc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TheCheeseMisc1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TheCheeseMisc1->Location = System::Drawing::Point(420, 515);
			this->TheCheeseMisc1->Name = L"TheCheeseMisc1";
			this->TheCheeseMisc1->Size = System::Drawing::Size(80, 17);
			this->TheCheeseMisc1->TabIndex = 36;
			this->TheCheeseMisc1->Text = L"Mozarella";
			this->TheCheeseMisc1->UseVisualStyleBackColor = true;
			this->TheCheeseMisc1->Visible = false;
			this->TheCheeseMisc1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TheCheeseMisc1_CheckedChanged);
			// 
			// SeekhKebabMisc2
			// 
			this->SeekhKebabMisc2->AutoSize = true;
			this->SeekhKebabMisc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SeekhKebabMisc2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SeekhKebabMisc2->Location = System::Drawing::Point(246, 543);
			this->SeekhKebabMisc2->Name = L"SeekhKebabMisc2";
			this->SeekhKebabMisc2->Size = System::Drawing::Size(52, 17);
			this->SeekhKebabMisc2->TabIndex = 35;
			this->SeekhKebabMisc2->Text = L"Beef";
			this->SeekhKebabMisc2->UseVisualStyleBackColor = true;
			this->SeekhKebabMisc2->Visible = false;
			this->SeekhKebabMisc2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SeekhKebabMisc2_CheckedChanged);
			// 
			// SeekhKebabMisc1
			// 
			this->SeekhKebabMisc1->AutoSize = true;
			this->SeekhKebabMisc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SeekhKebabMisc1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SeekhKebabMisc1->Location = System::Drawing::Point(153, 543);
			this->SeekhKebabMisc1->Name = L"SeekhKebabMisc1";
			this->SeekhKebabMisc1->Size = System::Drawing::Size(56, 17);
			this->SeekhKebabMisc1->TabIndex = 34;
			this->SeekhKebabMisc1->Text = L"Lamb";
			this->SeekhKebabMisc1->UseVisualStyleBackColor = true;
			this->SeekhKebabMisc1->Visible = false;
			this->SeekhKebabMisc1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SeekhKebabMisc1_CheckedChanged);
			// 
			// BBQBuzzMisc2
			// 
			this->BBQBuzzMisc2->AutoSize = true;
			this->BBQBuzzMisc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BBQBuzzMisc2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->BBQBuzzMisc2->Location = System::Drawing::Point(780, 515);
			this->BBQBuzzMisc2->Name = L"BBQBuzzMisc2";
			this->BBQBuzzMisc2->Size = System::Drawing::Size(103, 17);
			this->BBQBuzzMisc2->TabIndex = 33;
			this->BBQBuzzMisc2->Text = L"Ranch Sauce";
			this->BBQBuzzMisc2->UseVisualStyleBackColor = true;
			this->BBQBuzzMisc2->Visible = false;
			this->BBQBuzzMisc2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BBQBuzzMisc2_CheckedChanged);
			// 
			// BBQBuzzMisc1
			// 
			this->BBQBuzzMisc1->AutoSize = true;
			this->BBQBuzzMisc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BBQBuzzMisc1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->BBQBuzzMisc1->Location = System::Drawing::Point(672, 515);
			this->BBQBuzzMisc1->Name = L"BBQBuzzMisc1";
			this->BBQBuzzMisc1->Size = System::Drawing::Size(89, 17);
			this->BBQBuzzMisc1->TabIndex = 32;
			this->BBQBuzzMisc1->Text = L"BBQ sauce";
			this->BBQBuzzMisc1->UseVisualStyleBackColor = true;
			this->BBQBuzzMisc1->Visible = false;
			this->BBQBuzzMisc1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BBQBuzzMisc1_CheckedChanged);
			// 
			// ChilliDelightMisc2
			// 
			this->ChilliDelightMisc2->AutoSize = true;
			this->ChilliDelightMisc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChilliDelightMisc2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ChilliDelightMisc2->Location = System::Drawing::Point(780, 255);
			this->ChilliDelightMisc2->Name = L"ChilliDelightMisc2";
			this->ChilliDelightMisc2->Size = System::Drawing::Size(91, 17);
			this->ChilliDelightMisc2->TabIndex = 31;
			this->ChilliDelightMisc2->Text = L"Green Chilli";
			this->ChilliDelightMisc2->UseVisualStyleBackColor = true;
			this->ChilliDelightMisc2->Visible = false;
			this->ChilliDelightMisc2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChilliDelightMisc2_CheckedChanged);
			// 
			// ChilliDelightMisc1
			// 
			this->ChilliDelightMisc1->AutoSize = true;
			this->ChilliDelightMisc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChilliDelightMisc1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ChilliDelightMisc1->Location = System::Drawing::Point(672, 255);
			this->ChilliDelightMisc1->Name = L"ChilliDelightMisc1";
			this->ChilliDelightMisc1->Size = System::Drawing::Size(84, 17);
			this->ChilliDelightMisc1->TabIndex = 30;
			this->ChilliDelightMisc1->Text = L"Red Chilli ";
			this->ChilliDelightMisc1->UseVisualStyleBackColor = true;
			this->ChilliDelightMisc1->Visible = false;
			this->ChilliDelightMisc1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChilliDelightMisc1_CheckedChanged);
			// 
			// FajitaMisc2
			// 
			this->FajitaMisc2->AutoSize = true;
			this->FajitaMisc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FajitaMisc2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FajitaMisc2->Location = System::Drawing::Point(506, 255);
			this->FajitaMisc2->Name = L"FajitaMisc2";
			this->FajitaMisc2->Size = System::Drawing::Size(118, 17);
			this->FajitaMisc2->TabIndex = 29;
			this->FajitaMisc2->Text = L"Traditional Style";
			this->FajitaMisc2->UseVisualStyleBackColor = true;
			this->FajitaMisc2->Visible = false;
			this->FajitaMisc2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::FajitaMisc2_CheckedChanged);
			// 
			// FajitaMisc1
			// 
			this->FajitaMisc1->AutoSize = true;
			this->FajitaMisc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FajitaMisc1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FajitaMisc1->Location = System::Drawing::Point(395, 255);
			this->FajitaMisc1->Name = L"FajitaMisc1";
			this->FajitaMisc1->Size = System::Drawing::Size(105, 17);
			this->FajitaMisc1->TabIndex = 28;
			this->FajitaMisc1->Text = L"Mexican Style";
			this->FajitaMisc1->UseVisualStyleBackColor = true;
			this->FajitaMisc1->Visible = false;
			this->FajitaMisc1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::FajitaMisc1_CheckedChanged);
			// 
			// TikkaMisc2
			// 
			this->TikkaMisc2->AutoSize = true;
			this->TikkaMisc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TikkaMisc2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TikkaMisc2->Location = System::Drawing::Point(246, 244);
			this->TikkaMisc2->Name = L"TikkaMisc2";
			this->TikkaMisc2->Size = System::Drawing::Size(52, 17);
			this->TikkaMisc2->TabIndex = 27;
			this->TikkaMisc2->Text = L"Beef";
			this->TikkaMisc2->UseVisualStyleBackColor = true;
			this->TikkaMisc2->Visible = false;
			this->TikkaMisc2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TikkaMisc2_CheckedChanged);
			// 
			// TikkaMisc1
			// 
			this->TikkaMisc1->AutoSize = true;
			this->TikkaMisc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TikkaMisc1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TikkaMisc1->Location = System::Drawing::Point(153, 244);
			this->TikkaMisc1->Name = L"TikkaMisc1";
			this->TikkaMisc1->Size = System::Drawing::Size(72, 17);
			this->TikkaMisc1->TabIndex = 26;
			this->TikkaMisc1->Text = L"Chicken";
			this->TikkaMisc1->UseVisualStyleBackColor = true;
			this->TikkaMisc1->UseWaitCursor = true;
			this->TikkaMisc1->Visible = false;
			this->TikkaMisc1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TikkaMisc1_CheckedChanged);
			// 
			// BbqBuzzCheckbox
			// 
			this->BbqBuzzCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BbqBuzzCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->BbqBuzzCheckbox->Location = System::Drawing::Point(664, 426);
			this->BbqBuzzCheckbox->Name = L"BbqBuzzCheckbox";
			this->BbqBuzzCheckbox->Size = System::Drawing::Size(224, 91);
			this->BbqBuzzCheckbox->TabIndex = 25;
			this->BbqBuzzCheckbox->Text = L"\"BBQ Buzz\"\r\n\"Smoked chicken, capsicum, onions and black olives, sweet and smoky B"
				L"BQ sauce. Contains gluten in significant amounts\"\r\n";
			this->BbqBuzzCheckbox->UseVisualStyleBackColor = true;
			this->BbqBuzzCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BbqBuzzCheckbox_CheckedChanged);
			// 
			// ChilliDelightCheckbox
			// 
			this->ChilliDelightCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChilliDelightCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ChilliDelightCheckbox->Location = System::Drawing::Point(664, 166);
			this->ChilliDelightCheckbox->Name = L"ChilliDelightCheckbox";
			this->ChilliDelightCheckbox->Size = System::Drawing::Size(224, 91);
			this->ChilliDelightCheckbox->TabIndex = 24;
			this->ChilliDelightCheckbox->Text = L"\"Chilli Delight\"\r\n\"Fire up your taste buds with spicy chicken chunks, onions, oli"
				L"ves, jalapenos and hot peri sauce. Gluten free.\"\r\n";
			this->ChilliDelightCheckbox->UseVisualStyleBackColor = true;
			this->ChilliDelightCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChilliDelightCheckbox_CheckedChanged);
			this->ChilliDelightCheckbox->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::ChilliDelightCheckbox_CheckStateChanged);
			// 
			// FajitaCheckbox
			// 
			this->FajitaCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FajitaCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FajitaCheckbox->Location = System::Drawing::Point(395, 166);
			this->FajitaCheckbox->Name = L"FajitaCheckbox";
			this->FajitaCheckbox->Size = System::Drawing::Size(212, 84);
			this->FajitaCheckbox->TabIndex = 23;
			this->FajitaCheckbox->Text = L"\"Fajita\"\r\n\"Contains an epic blend of cheese with authentic fresh chicken meat. Co"
				L"ntains traces of gluten\"\r\n";
			this->FajitaCheckbox->UseVisualStyleBackColor = true;
			this->FajitaCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::FajitaCheckbox_CheckedChanged);
			// 
			// TikkaCheckbox
			// 
			this->TikkaCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TikkaCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TikkaCheckbox->Location = System::Drawing::Point(138, 166);
			this->TikkaCheckbox->Name = L"TikkaCheckbox";
			this->TikkaCheckbox->Size = System::Drawing::Size(220, 73);
			this->TikkaCheckbox->TabIndex = 22;
			this->TikkaCheckbox->Text = L"\"Tikka\"\r\n\"A specially developed recipe  topped with spicy  tikka boti & onions. G"
				L"luten Free.\"\r\n";
			this->TikkaCheckbox->UseVisualStyleBackColor = true;
			this->TikkaCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TikkaCheckbox_CheckedChanged);
			// 
			// SeekhKebabCheckbox
			// 
			this->SeekhKebabCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SeekhKebabCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SeekhKebabCheckbox->Location = System::Drawing::Point(136, 431);
			this->SeekhKebabCheckbox->Name = L"SeekhKebabCheckbox";
			this->SeekhKebabCheckbox->Size = System::Drawing::Size(220, 111);
			this->SeekhKebabCheckbox->TabIndex = 20;
			this->SeekhKebabCheckbox->Text = L"\"Seekh Kebab\"\r\n\"Topped with seekh kabab chunks on tantalizing blend of spicy chic"
				L"ken, capsicum, green pepper and cheese. Contains large amounts of gluten\"\r\n";
			this->SeekhKebabCheckbox->UseVisualStyleBackColor = true;
			this->SeekhKebabCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SeekhKebabCheckbox_CheckedChanged);
			// 
			// TheCheeseCheckbox
			// 
			this->TheCheeseCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TheCheeseCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TheCheeseCheckbox->Location = System::Drawing::Point(395, 431);
			this->TheCheeseCheckbox->Name = L"TheCheeseCheckbox";
			this->TheCheeseCheckbox->Size = System::Drawing::Size(225, 78);
			this->TheCheeseCheckbox->TabIndex = 19;
			this->TheCheeseCheckbox->Text = L"\"The Cheese\"\r\n\"Go back to where it all began with classic mozzarella cheese & tom"
				L"ato base. Gluten free\"\r\n";
			this->TheCheeseCheckbox->UseVisualStyleBackColor = true;
			this->TheCheeseCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TheCheeseCheckbox_CheckedChanged);
			// 
			// VeggieDelightPictureBox
			// 
			this->VeggieDelightPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"VeggieDelightPictureBox.Image")));
			this->VeggieDelightPictureBox->Location = System::Drawing::Point(937, 166);
			this->VeggieDelightPictureBox->Name = L"VeggieDelightPictureBox";
			this->VeggieDelightPictureBox->Size = System::Drawing::Size(216, 142);
			this->VeggieDelightPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->VeggieDelightPictureBox->TabIndex = 18;
			this->VeggieDelightPictureBox->TabStop = false;
			// 
			// VeggieDelightCheckBox
			// 
			this->VeggieDelightCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->VeggieDelightCheckBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->VeggieDelightCheckBox->Location = System::Drawing::Point(937, 317);
			this->VeggieDelightCheckBox->Name = L"VeggieDelightCheckBox";
			this->VeggieDelightCheckBox->Size = System::Drawing::Size(216, 93);
			this->VeggieDelightCheckBox->TabIndex = 17;
			this->VeggieDelightCheckBox->Text = L"\"The Veggie Delight\"\r\n\"A colorful medley of tomatoes, onions, mushrooms, black ol"
				L"ives, and green peppers. Gluten free\"\r\n";
			this->VeggieDelightCheckBox->UseVisualStyleBackColor = true;
			this->VeggieDelightCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::VeggieDelightCheckBox_CheckedChanged);
			// 
			// TheCheesePictureBox
			// 
			this->TheCheesePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TheCheesePictureBox.Image")));
			this->TheCheesePictureBox->Location = System::Drawing::Point(408, 280);
			this->TheCheesePictureBox->Name = L"TheCheesePictureBox";
			this->TheCheesePictureBox->Size = System::Drawing::Size(212, 145);
			this->TheCheesePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->TheCheesePictureBox->TabIndex = 10;
			this->TheCheesePictureBox->TabStop = false;
			// 
			// SeekhKebabPictureBox
			// 
			this->SeekhKebabPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SeekhKebabPictureBox.Image")));
			this->SeekhKebabPictureBox->Location = System::Drawing::Point(144, 280);
			this->SeekhKebabPictureBox->Name = L"SeekhKebabPictureBox";
			this->SeekhKebabPictureBox->Size = System::Drawing::Size(212, 145);
			this->SeekhKebabPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SeekhKebabPictureBox->TabIndex = 8;
			this->SeekhKebabPictureBox->TabStop = false;
			// 
			// BBQBuzzPictureBox
			// 
			this->BBQBuzzPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BBQBuzzPictureBox.Image")));
			this->BBQBuzzPictureBox->Location = System::Drawing::Point(672, 288);
			this->BBQBuzzPictureBox->Name = L"BBQBuzzPictureBox";
			this->BBQBuzzPictureBox->Size = System::Drawing::Size(216, 137);
			this->BBQBuzzPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->BBQBuzzPictureBox->TabIndex = 6;
			this->BBQBuzzPictureBox->TabStop = false;
			// 
			// ChilliDelightPictureBox
			// 
			this->ChilliDelightPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ChilliDelightPictureBox.Image")));
			this->ChilliDelightPictureBox->Location = System::Drawing::Point(672, 22);
			this->ChilliDelightPictureBox->Name = L"ChilliDelightPictureBox";
			this->ChilliDelightPictureBox->Size = System::Drawing::Size(216, 145);
			this->ChilliDelightPictureBox->TabIndex = 4;
			this->ChilliDelightPictureBox->TabStop = false;
			// 
			// FajitaPictureBox
			// 
			this->FajitaPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FajitaPictureBox.Image")));
			this->FajitaPictureBox->Location = System::Drawing::Point(408, 22);
			this->FajitaPictureBox->Name = L"FajitaPictureBox";
			this->FajitaPictureBox->Size = System::Drawing::Size(212, 145);
			this->FajitaPictureBox->TabIndex = 2;
			this->FajitaPictureBox->TabStop = false;
			// 
			// TikkaPictureBox1
			// 
			this->TikkaPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TikkaPictureBox1.Image")));
			this->TikkaPictureBox1->Location = System::Drawing::Point(144, 25);
			this->TikkaPictureBox1->Name = L"TikkaPictureBox1";
			this->TikkaPictureBox1->Size = System::Drawing::Size(212, 145);
			this->TikkaPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->TikkaPictureBox1->TabIndex = 1;
			this->TikkaPictureBox1->TabStop = false;
			// 
			// MovetoToping
			// 
			this->MovetoToping->Location = System::Drawing::Point(968, 515);
			this->MovetoToping->Name = L"MovetoToping";
			this->MovetoToping->Size = System::Drawing::Size(168, 56);
			this->MovetoToping->TabIndex = 14;
			this->MovetoToping->Text = L"GO TO TOPPING MENU";
			this->MovetoToping->UseVisualStyleBackColor = true;
			this->MovetoToping->Click += gcnew System::EventHandler(this, &MyForm::MovetoToping_Click);
			// 
			// ToppingSelect
			// 
			this->ToppingSelect->BackColor = System::Drawing::Color::Transparent;
			this->ToppingSelect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToppingSelect.BackgroundImage")));
			this->ToppingSelect->Controls->Add(this->ToppingPriceBox);
			this->ToppingSelect->Controls->Add(this->BacktoFlavors);
			this->ToppingSelect->Controls->Add(this->ProceedToCheckOutButton);
			this->ToppingSelect->Controls->Add(this->CheckBasilScattering);
			this->ToppingSelect->Controls->Add(this->SausageCheck);
			this->ToppingSelect->Controls->Add(this->CheckRedPepperFlakes1);
			this->ToppingSelect->Controls->Add(this->ToppingSausage);
			this->ToppingSelect->Controls->Add(this->ExtraLabel);
			this->ToppingSelect->Controls->Add(this->ChooseExtraBox);
			this->ToppingSelect->Controls->Add(this->CheckRedPepperFlakes);
			this->ToppingSelect->Controls->Add(this->Extra_CheezCheck);
			this->ToppingSelect->Controls->Add(this->ToppingExtra_Cheez);
			this->ToppingSelect->Controls->Add(this->MashroomCheck);
			this->ToppingSelect->Controls->Add(this->CheckCreamyGarlicSause);
			this->ToppingSelect->Controls->Add(this->checkBox2);
			this->ToppingSelect->Controls->Add(this->CheckCreamlized_Onion);
			this->ToppingSelect->Controls->Add(this->ToppingMashrooms);
			this->ToppingSelect->Controls->Add(this->pictureBox9);
			this->ToppingSelect->Controls->Add(this->PeppersLabel);
			this->ToppingSelect->Controls->Add(this->ChoosePeppersBox);
			this->ToppingSelect->Controls->Add(this->CheckClovesSpice);
			this->ToppingSelect->Controls->Add(this->BeefCheck);
			this->ToppingSelect->Controls->Add(this->ToppingBeef);
			this->ToppingSelect->Controls->Add(this->QuantityOfCheeseLabel);
			this->ToppingSelect->Controls->Add(this->ChooseQuantityOfCheezBox);
			this->ToppingSelect->Controls->Add(this->TypeLabel);
			this->ToppingSelect->Controls->Add(this->ChooseTypeBox);
			this->ToppingSelect->Controls->Add(this->PepperoniCheck);
			this->ToppingSelect->Controls->Add(this->ToppingPepperoni);
			this->ToppingSelect->Controls->Add(this->CheeseLabel);
			this->ToppingSelect->Controls->Add(this->ChooseCheeseBox);
			this->ToppingSelect->Controls->Add(this->CheckBBQ_Sause);
			this->ToppingSelect->Controls->Add(this->checkBox1);
			this->ToppingSelect->Controls->Add(this->ChickenCheck);
			this->ToppingSelect->Controls->Add(this->ToppingChicken);
			this->ToppingSelect->Controls->Add(this->ToppingHeading);
			this->ToppingSelect->Controls->Add(this->label1);
			this->ToppingSelect->Location = System::Drawing::Point(4, 22);
			this->ToppingSelect->Name = L"ToppingSelect";
			this->ToppingSelect->Size = System::Drawing::Size(1210, 576);
			this->ToppingSelect->TabIndex = 6;
			this->ToppingSelect->Text = L"ToppingSelect";
			this->ToppingSelect->Click += gcnew System::EventHandler(this, &MyForm::ToppingSelect_Click);
			// 
			// ToppingPriceBox
			// 
			this->ToppingPriceBox->Location = System::Drawing::Point(995, 339);
			this->ToppingPriceBox->Multiline = true;
			this->ToppingPriceBox->Name = L"ToppingPriceBox";
			this->ToppingPriceBox->Size = System::Drawing::Size(145, 80);
			this->ToppingPriceBox->TabIndex = 36;
			this->ToppingPriceBox->TextChanged += gcnew System::EventHandler(this, &MyForm::ToppingPriceBox_TextChanged);
			// 
			// BacktoFlavors
			// 
			this->BacktoFlavors->Location = System::Drawing::Point(1077, 21);
			this->BacktoFlavors->Name = L"BacktoFlavors";
			this->BacktoFlavors->Size = System::Drawing::Size(109, 58);
			this->BacktoFlavors->TabIndex = 35;
			this->BacktoFlavors->Text = L"Back";
			this->BacktoFlavors->UseVisualStyleBackColor = true;
			this->BacktoFlavors->Click += gcnew System::EventHandler(this, &MyForm::BacktoFlavors_Click);
			// 
			// ProceedToCheckOutButton
			// 
			this->ProceedToCheckOutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProceedToCheckOutButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ProceedToCheckOutButton->Location = System::Drawing::Point(1017, 485);
			this->ProceedToCheckOutButton->Name = L"ProceedToCheckOutButton";
			this->ProceedToCheckOutButton->Size = System::Drawing::Size(143, 64);
			this->ProceedToCheckOutButton->TabIndex = 34;
			this->ProceedToCheckOutButton->Text = L"PROCEED TO CHECKOUT";
			this->ProceedToCheckOutButton->UseVisualStyleBackColor = true;
			this->ProceedToCheckOutButton->Click += gcnew System::EventHandler(this, &MyForm::ProceedToCheckOutButton_Click);
			// 
			// CheckBasilScattering
			// 
			this->CheckBasilScattering->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CheckBasilScattering->Location = System::Drawing::Point(836, 534);
			this->CheckBasilScattering->Name = L"CheckBasilScattering";
			this->CheckBasilScattering->Size = System::Drawing::Size(121, 26);
			this->CheckBasilScattering->TabIndex = 33;
			this->CheckBasilScattering->Text = L"Add Basil Scattering";
			this->CheckBasilScattering->UseVisualStyleBackColor = true;
			this->CheckBasilScattering->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BasilScattering_CheckedChanged);
			// 
			// SausageCheck
			// 
			this->SausageCheck->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->SausageCheck->Location = System::Drawing::Point(723, 458);
			this->SausageCheck->Name = L"SausageCheck";
			this->SausageCheck->Size = System::Drawing::Size(234, 70);
			this->SausageCheck->TabIndex = 32;
			this->SausageCheck->Text = L"Some prefer mild, others spicy, and Southerners Conecuh, but sausage is consisten"
				L"tly a favorite pizza topping of Americans. This cast-iron pizza recipe gives you"
				L" another reason to love that skillet.";
			this->SausageCheck->UseVisualStyleBackColor = true;
			// 
			// CheckRedPepperFlakes1
			// 
			this->CheckRedPepperFlakes1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CheckRedPepperFlakes1->Location = System::Drawing::Point(725, 533);
			this->CheckRedPepperFlakes1->Name = L"CheckRedPepperFlakes1";
			this->CheckRedPepperFlakes1->Size = System::Drawing::Size(126, 32);
			this->CheckRedPepperFlakes1->TabIndex = 31;
			this->CheckRedPepperFlakes1->Text = L"Add Red_Pepper Flakes(Extra Charges)";
			this->CheckRedPepperFlakes1->UseVisualStyleBackColor = true;
			this->CheckRedPepperFlakes1->UseWaitCursor = true;
			this->CheckRedPepperFlakes1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RedPepperFlakes1_CheckedChanged);
			// 
			// ToppingSausage
			// 
			this->ToppingSausage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToppingSausage.Image")));
			this->ToppingSausage->Location = System::Drawing::Point(739, 306);
			this->ToppingSausage->Name = L"ToppingSausage";
			this->ToppingSausage->Size = System::Drawing::Size(169, 148);
			this->ToppingSausage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ToppingSausage->TabIndex = 30;
			this->ToppingSausage->TabStop = false;
			// 
			// ExtraLabel
			// 
			this->ExtraLabel->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->ExtraLabel->Location = System::Drawing::Point(583, 526);
			this->ExtraLabel->Name = L"ExtraLabel";
			this->ExtraLabel->Size = System::Drawing::Size(100, 23);
			this->ExtraLabel->TabIndex = 29;
			this->ExtraLabel->Text = L"Choose Extra";
			// 
			// ChooseExtraBox
			// 
			this->ChooseExtraBox->FormattingEnabled = true;
			this->ChooseExtraBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Macroni", L"Cheese(Extra Charges)" });
			this->ChooseExtraBox->Location = System::Drawing::Point(571, 548);
			this->ChooseExtraBox->Name = L"ChooseExtraBox";
			this->ChooseExtraBox->Size = System::Drawing::Size(121, 21);
			this->ChooseExtraBox->TabIndex = 28;
			this->ChooseExtraBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ChooseExtraBox_SelectedIndexChanged);
			// 
			// CheckRedPepperFlakes
			// 
			this->CheckRedPepperFlakes->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CheckRedPepperFlakes->Location = System::Drawing::Point(433, 529);
			this->CheckRedPepperFlakes->Name = L"CheckRedPepperFlakes";
			this->CheckRedPepperFlakes->Size = System::Drawing::Size(153, 32);
			this->CheckRedPepperFlakes->TabIndex = 27;
			this->CheckRedPepperFlakes->Text = L"Add Red_Pepper Flakes(Extra Charges)";
			this->CheckRedPepperFlakes->UseVisualStyleBackColor = true;
			this->CheckRedPepperFlakes->UseWaitCursor = true;
			this->CheckRedPepperFlakes->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RedPepperFlakes_CheckedChanged);
			// 
			// Extra_CheezCheck
			// 
			this->Extra_CheezCheck->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Extra_CheezCheck->Location = System::Drawing::Point(428, 452);
			this->Extra_CheezCheck->Name = L"Extra_CheezCheck";
			this->Extra_CheezCheck->Size = System::Drawing::Size(273, 75);
			this->Extra_CheezCheck->TabIndex = 26;
			this->Extra_CheezCheck->Text = resources->GetString(L"Extra_CheezCheck.Text");
			this->Extra_CheezCheck->UseVisualStyleBackColor = true;
			this->Extra_CheezCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Extra_CheezCheck_CheckedChanged);
			// 
			// ToppingExtra_Cheez
			// 
			this->ToppingExtra_Cheez->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToppingExtra_Cheez.Image")));
			this->ToppingExtra_Cheez->Location = System::Drawing::Point(448, 297);
			this->ToppingExtra_Cheez->Name = L"ToppingExtra_Cheez";
			this->ToppingExtra_Cheez->Size = System::Drawing::Size(179, 157);
			this->ToppingExtra_Cheez->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ToppingExtra_Cheez->TabIndex = 25;
			this->ToppingExtra_Cheez->TabStop = false;
			this->ToppingExtra_Cheez->Click += gcnew System::EventHandler(this, &MyForm::ToppingExtra_Cheez_Click);
			// 
			// MashroomCheck
			// 
			this->MashroomCheck->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->MashroomCheck->Location = System::Drawing::Point(137, 458);
			this->MashroomCheck->Name = L"MashroomCheck";
			this->MashroomCheck->Size = System::Drawing::Size(279, 62);
			this->MashroomCheck->TabIndex = 24;
			this->MashroomCheck->Text = resources->GetString(L"MashroomCheck.Text");
			this->MashroomCheck->UseVisualStyleBackColor = true;
			this->MashroomCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::MashroomCheck_CheckedChanged);
			// 
			// CheckCreamyGarlicSause
			// 
			this->CheckCreamyGarlicSause->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CheckCreamyGarlicSause->Location = System::Drawing::Point(281, 527);
			this->CheckCreamyGarlicSause->Name = L"CheckCreamyGarlicSause";
			this->CheckCreamyGarlicSause->Size = System::Drawing::Size(123, 37);
			this->CheckCreamyGarlicSause->TabIndex = 23;
			this->CheckCreamyGarlicSause->Text = L"Add Creamy Garlic Sause";
			this->CheckCreamyGarlicSause->UseVisualStyleBackColor = true;
			this->CheckCreamyGarlicSause->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckCreamyGarlicSause_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(0, 0);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 17);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// CheckCreamlized_Onion
			// 
			this->CheckCreamlized_Onion->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CheckCreamlized_Onion->Location = System::Drawing::Point(139, 528);
			this->CheckCreamlized_Onion->Name = L"CheckCreamlized_Onion";
			this->CheckCreamlized_Onion->Size = System::Drawing::Size(133, 30);
			this->CheckCreamlized_Onion->TabIndex = 21;
			this->CheckCreamlized_Onion->Text = L"Add Creamlized Onion(Extra Charges)";
			this->CheckCreamlized_Onion->UseVisualStyleBackColor = true;
			this->CheckCreamlized_Onion->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckCreamlized_Onion_CheckedChanged);
			// 
			// ToppingMashrooms
			// 
			this->ToppingMashrooms->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToppingMashrooms.Image")));
			this->ToppingMashrooms->Location = System::Drawing::Point(177, 301);
			this->ToppingMashrooms->Name = L"ToppingMashrooms";
			this->ToppingMashrooms->Size = System::Drawing::Size(179, 158);
			this->ToppingMashrooms->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ToppingMashrooms->TabIndex = 20;
			this->ToppingMashrooms->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 50);
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			// 
			// PeppersLabel
			// 
			this->PeppersLabel->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->PeppersLabel->Location = System::Drawing::Point(848, 257);
			this->PeppersLabel->Name = L"PeppersLabel";
			this->PeppersLabel->Size = System::Drawing::Size(100, 23);
			this->PeppersLabel->TabIndex = 18;
			this->PeppersLabel->Text = L"Choose Peppers";
			// 
			// ChoosePeppersBox
			// 
			this->ChoosePeppersBox->FormattingEnabled = true;
			this->ChoosePeppersBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Green", L"Red" });
			this->ChoosePeppersBox->Location = System::Drawing::Point(836, 280);
			this->ChoosePeppersBox->Name = L"ChoosePeppersBox";
			this->ChoosePeppersBox->Size = System::Drawing::Size(121, 21);
			this->ChoosePeppersBox->TabIndex = 17;
			this->ChoosePeppersBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ChoosePeppersBox_SelectedIndexChanged);
			// 
			// CheckClovesSpice
			// 
			this->CheckClovesSpice->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CheckClovesSpice->Location = System::Drawing::Point(703, 263);
			this->CheckClovesSpice->Name = L"CheckClovesSpice";
			this->CheckClovesSpice->Size = System::Drawing::Size(129, 40);
			this->CheckClovesSpice->TabIndex = 16;
			this->CheckClovesSpice->Text = L"Add Cloves Spice(Extra Charges)";
			this->CheckClovesSpice->UseVisualStyleBackColor = true;
			this->CheckClovesSpice->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckClovesSpice_CheckedChanged);
			// 
			// BeefCheck
			// 
			this->BeefCheck->BackColor = System::Drawing::Color::Transparent;
			this->BeefCheck->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->BeefCheck->Location = System::Drawing::Point(702, 182);
			this->BeefCheck->Name = L"BeefCheck";
			this->BeefCheck->Size = System::Drawing::Size(265, 83);
			this->BeefCheck->TabIndex = 15;
			this->BeefCheck->Text = resources->GetString(L"BeefCheck.Text");
			this->BeefCheck->UseVisualStyleBackColor = false;
			this->BeefCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BeefCheck_CheckedChanged);
			// 
			// ToppingBeef
			// 
			this->ToppingBeef->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToppingBeef.Image")));
			this->ToppingBeef->Location = System::Drawing::Point(735, 34);
			this->ToppingBeef->Name = L"ToppingBeef";
			this->ToppingBeef->Size = System::Drawing::Size(173, 147);
			this->ToppingBeef->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ToppingBeef->TabIndex = 14;
			this->ToppingBeef->TabStop = false;
			// 
			// QuantityOfCheeseLabel
			// 
			this->QuantityOfCheeseLabel->BackColor = System::Drawing::Color::Transparent;
			this->QuantityOfCheeseLabel->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->QuantityOfCheeseLabel->Location = System::Drawing::Point(544, 243);
			this->QuantityOfCheeseLabel->Name = L"QuantityOfCheeseLabel";
			this->QuantityOfCheeseLabel->Size = System::Drawing::Size(121, 29);
			this->QuantityOfCheeseLabel->TabIndex = 13;
			this->QuantityOfCheeseLabel->Text = L"Choose Quantity Of Mozarelle Cheese";
			// 
			// ChooseQuantityOfCheezBox
			// 
			this->ChooseQuantityOfCheezBox->FormattingEnabled = true;
			this->ChooseQuantityOfCheezBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Usual", L"More (Extra Charges)",
					L"Less (Less Charges)", L"Don\'t Include (Less Charges)"
			});
			this->ChooseQuantityOfCheezBox->Location = System::Drawing::Point(545, 273);
			this->ChooseQuantityOfCheezBox->Name = L"ChooseQuantityOfCheezBox";
			this->ChooseQuantityOfCheezBox->Size = System::Drawing::Size(96, 21);
			this->ChooseQuantityOfCheezBox->TabIndex = 12;
			this->ChooseQuantityOfCheezBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ChooseQuantityOfCheezBox_SelectedIndexChanged);
			// 
			// TypeLabel
			// 
			this->TypeLabel->BackColor = System::Drawing::Color::Transparent;
			this->TypeLabel->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->TypeLabel->Location = System::Drawing::Point(454, 246);
			this->TypeLabel->Name = L"TypeLabel";
			this->TypeLabel->Size = System::Drawing::Size(85, 15);
			this->TypeLabel->TabIndex = 11;
			this->TypeLabel->Text = L"Choose Type";
			// 
			// ChooseTypeBox
			// 
			this->ChooseTypeBox->FormattingEnabled = true;
			this->ChooseTypeBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Vegan", L"Non_Vegan" });
			this->ChooseTypeBox->Location = System::Drawing::Point(448, 271);
			this->ChooseTypeBox->Name = L"ChooseTypeBox";
			this->ChooseTypeBox->Size = System::Drawing::Size(90, 21);
			this->ChooseTypeBox->TabIndex = 10;
			this->ChooseTypeBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ChooseTypeBox_SelectedIndexChanged);
			// 
			// PepperoniCheck
			// 
			this->PepperoniCheck->BackColor = System::Drawing::Color::Transparent;
			this->PepperoniCheck->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->PepperoniCheck->Location = System::Drawing::Point(448, 185);
			this->PepperoniCheck->Name = L"PepperoniCheck";
			this->PepperoniCheck->Size = System::Drawing::Size(195, 56);
			this->PepperoniCheck->TabIndex = 9;
			this->PepperoniCheck->Text = L"Poll after poll, pepperoni always tops the list of America�s favorite pizza toppi"
				L"ngs. When it doubt, you can�t go wrong with a classic.";
			this->PepperoniCheck->UseVisualStyleBackColor = false;
			this->PepperoniCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::PepperoniCheck_CheckedChanged);
			// 
			// ToppingPepperoni
			// 
			this->ToppingPepperoni->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToppingPepperoni.Image")));
			this->ToppingPepperoni->Location = System::Drawing::Point(448, 35);
			this->ToppingPepperoni->Name = L"ToppingPepperoni";
			this->ToppingPepperoni->Size = System::Drawing::Size(184, 147);
			this->ToppingPepperoni->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ToppingPepperoni->TabIndex = 8;
			this->ToppingPepperoni->TabStop = false;
			// 
			// CheeseLabel
			// 
			this->CheeseLabel->BackColor = System::Drawing::Color::Transparent;
			this->CheeseLabel->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CheeseLabel->Location = System::Drawing::Point(310, 256);
			this->CheeseLabel->Name = L"CheeseLabel";
			this->CheeseLabel->Size = System::Drawing::Size(86, 23);
			this->CheeseLabel->TabIndex = 7;
			this->CheeseLabel->Text = L"Choose Cheese";
			// 
			// ChooseCheeseBox
			// 
			this->ChooseCheeseBox->FormattingEnabled = true;
			this->ChooseCheeseBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Shredded_Parmesan", L"Shredded_Cheddar" });
			this->ChooseCheeseBox->Location = System::Drawing::Point(308, 277);
			this->ChooseCheeseBox->Name = L"ChooseCheeseBox";
			this->ChooseCheeseBox->Size = System::Drawing::Size(84, 21);
			this->ChooseCheeseBox->TabIndex = 6;
			this->ChooseCheeseBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ChooseCheeseBox_SelectedIndexChanged);
			// 
			// CheckBBQ_Sause
			// 
			this->CheckBBQ_Sause->BackColor = System::Drawing::Color::Transparent;
			this->CheckBBQ_Sause->Cursor = System::Windows::Forms::Cursors::SizeNS;
			this->CheckBBQ_Sause->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CheckBBQ_Sause->Location = System::Drawing::Point(138, 264);
			this->CheckBBQ_Sause->Name = L"CheckBBQ_Sause";
			this->CheckBBQ_Sause->Size = System::Drawing::Size(165, 31);
			this->CheckBBQ_Sause->TabIndex = 5;
			this->CheckBBQ_Sause->Text = L"Add BBQ_SAUCE(Additional Charges)";
			this->CheckBBQ_Sause->UseVisualStyleBackColor = false;
			this->CheckBBQ_Sause->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBBQ_Sause_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(0, 0);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// ChickenCheck
			// 
			this->ChickenCheck->BackColor = System::Drawing::Color::Transparent;
			this->ChickenCheck->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ChickenCheck->Location = System::Drawing::Point(138, 180);
			this->ChickenCheck->Name = L"ChickenCheck";
			this->ChickenCheck->Size = System::Drawing::Size(233, 77);
			this->ChickenCheck->TabIndex = 3;
			this->ChickenCheck->Text = L"The winner winner of weeknight meals goes well on pizzas, too! BBQ chicken, buffa"
				L"lo chicken, and chicken bacon ranch are common pizza orders that contain this pr"
				L"otein.";
			this->ChickenCheck->UseVisualStyleBackColor = false;
			this->ChickenCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChickenCheck_CheckedChanged);
			// 
			// ToppingChicken
			// 
			this->ToppingChicken->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToppingChicken.Image")));
			this->ToppingChicken->Location = System::Drawing::Point(177, 32);
			this->ToppingChicken->Name = L"ToppingChicken";
			this->ToppingChicken->Size = System::Drawing::Size(179, 147);
			this->ToppingChicken->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ToppingChicken->TabIndex = 2;
			this->ToppingChicken->TabStop = false;
			this->ToppingChicken->Click += gcnew System::EventHandler(this, &MyForm::ToppingChicken_Click);
			// 
			// ToppingHeading
			// 
			this->ToppingHeading->Font = (gcnew System::Drawing::Font(L"Algerian", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ToppingHeading->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ToppingHeading->Location = System::Drawing::Point(988, 128);
			this->ToppingHeading->Name = L"ToppingHeading";
			this->ToppingHeading->Size = System::Drawing::Size(191, 95);
			this->ToppingHeading->TabIndex = 1;
			this->ToppingHeading->Text = L"Toppings MENU";
			this->ToppingHeading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ToppingHeading->Click += gcnew System::EventHandler(this, &MyForm::ToppingHeading_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// CheckoutPage
			// 
			this->CheckoutPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CheckoutPage.BackgroundImage")));
			this->CheckoutPage->Controls->Add(this->OrderNoCheckOutTextBox);
			this->CheckoutPage->Controls->Add(this->OrderNoCheckoutLabel);
			this->CheckoutPage->Controls->Add(this->TotalPriceCheckOutTextBox);
			this->CheckoutPage->Controls->Add(this->AddOnCheckOutTextBox);
			this->CheckoutPage->Controls->Add(this->textBox5);
			this->CheckoutPage->Controls->Add(this->CrustCheckOutTextBox);
			this->CheckoutPage->Controls->Add(this->FlavourCheckOutTextBox);
			this->CheckoutPage->Controls->Add(this->TotalPriceCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->AddonsCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->ToppingsCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->CrustCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->FlavourCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->OrderHeadingCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->CardNumberCheckOutTextBox);
			this->CheckoutPage->Controls->Add(this->CardNumberCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->CardCheckOutComboBox);
			this->CheckoutPage->Controls->Add(this->CardProviderCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->CashCheckBox);
			this->CheckoutPage->Controls->Add(this->CreditCardCheckBox);
			this->CheckoutPage->Controls->Add(this->PaymentModeCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->AddressCheckOutLabel);
			this->CheckoutPage->Controls->Add(this->AddressCheckOutTextBox);
			this->CheckoutPage->Controls->Add(this->PhoneNoTextBox);
			this->CheckoutPage->Controls->Add(this->PhoneCheckoutLabel);
			this->CheckoutPage->Controls->Add(this->NameCheckOutText);
			this->CheckoutPage->Controls->Add(this->NameLabelCheckout);
			this->CheckoutPage->Location = System::Drawing::Point(4, 22);
			this->CheckoutPage->Name = L"CheckoutPage";
			this->CheckoutPage->Size = System::Drawing::Size(1210, 576);
			this->CheckoutPage->TabIndex = 7;
			this->CheckoutPage->Text = L"CheckoutPage";
			this->CheckoutPage->UseVisualStyleBackColor = true;
			// 
			// OrderNoCheckOutTextBox
			// 
			this->OrderNoCheckOutTextBox->Location = System::Drawing::Point(280, 40);
			this->OrderNoCheckOutTextBox->Name = L"OrderNoCheckOutTextBox";
			this->OrderNoCheckOutTextBox->Size = System::Drawing::Size(200, 20);
			this->OrderNoCheckOutTextBox->TabIndex = 26;
			// 
			// OrderNoCheckoutLabel
			// 
			this->OrderNoCheckoutLabel->AutoSize = true;
			this->OrderNoCheckoutLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->OrderNoCheckoutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->OrderNoCheckoutLabel->Location = System::Drawing::Point(128, 32);
			this->OrderNoCheckoutLabel->Name = L"OrderNoCheckoutLabel";
			this->OrderNoCheckoutLabel->Size = System::Drawing::Size(154, 29);
			this->OrderNoCheckoutLabel->TabIndex = 25;
			this->OrderNoCheckoutLabel->Text = L"ORDER NO:";
			// 
			// TotalPriceCheckOutTextBox
			// 
			this->TotalPriceCheckOutTextBox->Location = System::Drawing::Point(728, 352);
			this->TotalPriceCheckOutTextBox->Name = L"TotalPriceCheckOutTextBox";
			this->TotalPriceCheckOutTextBox->Size = System::Drawing::Size(200, 20);
			this->TotalPriceCheckOutTextBox->TabIndex = 24;
			// 
			// AddOnCheckOutTextBox
			// 
			this->AddOnCheckOutTextBox->Location = System::Drawing::Point(728, 264);
			this->AddOnCheckOutTextBox->Multiline = true;
			this->AddOnCheckOutTextBox->Name = L"AddOnCheckOutTextBox";
			this->AddOnCheckOutTextBox->Size = System::Drawing::Size(304, 56);
			this->AddOnCheckOutTextBox->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(728, 192);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(304, 56);
			this->textBox5->TabIndex = 22;
			// 
			// CrustCheckOutTextBox
			// 
			this->CrustCheckOutTextBox->Location = System::Drawing::Point(728, 120);
			this->CrustCheckOutTextBox->Multiline = true;
			this->CrustCheckOutTextBox->Name = L"CrustCheckOutTextBox";
			this->CrustCheckOutTextBox->Size = System::Drawing::Size(304, 56);
			this->CrustCheckOutTextBox->TabIndex = 21;
			// 
			// FlavourCheckOutTextBox
			// 
			this->FlavourCheckOutTextBox->Location = System::Drawing::Point(728, 56);
			this->FlavourCheckOutTextBox->Multiline = true;
			this->FlavourCheckOutTextBox->Name = L"FlavourCheckOutTextBox";
			this->FlavourCheckOutTextBox->Size = System::Drawing::Size(304, 48);
			this->FlavourCheckOutTextBox->TabIndex = 20;
			// 
			// TotalPriceCheckOutLabel
			// 
			this->TotalPriceCheckOutLabel->AutoSize = true;
			this->TotalPriceCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TotalPriceCheckOutLabel->Location = System::Drawing::Point(640, 352);
			this->TotalPriceCheckOutLabel->Name = L"TotalPriceCheckOutLabel";
			this->TotalPriceCheckOutLabel->Size = System::Drawing::Size(83, 13);
			this->TotalPriceCheckOutLabel->TabIndex = 19;
			this->TotalPriceCheckOutLabel->Text = L"TOTAL PRICE :";
			// 
			// AddonsCheckOutLabel
			// 
			this->AddonsCheckOutLabel->AutoSize = true;
			this->AddonsCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddonsCheckOutLabel->Location = System::Drawing::Point(656, 280);
			this->AddonsCheckOutLabel->Name = L"AddonsCheckOutLabel";
			this->AddonsCheckOutLabel->Size = System::Drawing::Size(62, 13);
			this->AddonsCheckOutLabel->TabIndex = 18;
			this->AddonsCheckOutLabel->Text = L"ADDON(S):";
			// 
			// ToppingsCheckOutLabel
			// 
			this->ToppingsCheckOutLabel->AutoSize = true;
			this->ToppingsCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ToppingsCheckOutLabel->Location = System::Drawing::Point(648, 208);
			this->ToppingsCheckOutLabel->Name = L"ToppingsCheckOutLabel";
			this->ToppingsCheckOutLabel->Size = System::Drawing::Size(71, 13);
			this->ToppingsCheckOutLabel->TabIndex = 17;
			this->ToppingsCheckOutLabel->Text = L"TOPPING(S):";
			// 
			// CrustCheckOutLabel
			// 
			this->CrustCheckOutLabel->AutoSize = true;
			this->CrustCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CrustCheckOutLabel->Location = System::Drawing::Point(656, 136);
			this->CrustCheckOutLabel->Name = L"CrustCheckOutLabel";
			this->CrustCheckOutLabel->Size = System::Drawing::Size(60, 13);
			this->CrustCheckOutLabel->TabIndex = 16;
			this->CrustCheckOutLabel->Text = L"CRUST(S):";
			// 
			// FlavourCheckOutLabel
			// 
			this->FlavourCheckOutLabel->AutoSize = true;
			this->FlavourCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FlavourCheckOutLabel->Location = System::Drawing::Point(648, 72);
			this->FlavourCheckOutLabel->Name = L"FlavourCheckOutLabel";
			this->FlavourCheckOutLabel->Size = System::Drawing::Size(76, 13);
			this->FlavourCheckOutLabel->TabIndex = 15;
			this->FlavourCheckOutLabel->Text = L"FLAVOUR(S) :";
			// 
			// OrderHeadingCheckOutLabel
			// 
			this->OrderHeadingCheckOutLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->OrderHeadingCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->OrderHeadingCheckOutLabel->Location = System::Drawing::Point(736, 16);
			this->OrderHeadingCheckOutLabel->Name = L"OrderHeadingCheckOutLabel";
			this->OrderHeadingCheckOutLabel->Size = System::Drawing::Size(184, 40);
			this->OrderHeadingCheckOutLabel->TabIndex = 14;
			this->OrderHeadingCheckOutLabel->Text = L"YOUR ORDER";
			// 
			// CardNumberCheckOutTextBox
			// 
			this->CardNumberCheckOutTextBox->Location = System::Drawing::Point(232, 472);
			this->CardNumberCheckOutTextBox->Name = L"CardNumberCheckOutTextBox";
			this->CardNumberCheckOutTextBox->Size = System::Drawing::Size(184, 20);
			this->CardNumberCheckOutTextBox->TabIndex = 13;
			// 
			// CardNumberCheckOutLabel
			// 
			this->CardNumberCheckOutLabel->AutoSize = true;
			this->CardNumberCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CardNumberCheckOutLabel->Location = System::Drawing::Point(128, 464);
			this->CardNumberCheckOutLabel->Name = L"CardNumberCheckOutLabel";
			this->CardNumberCheckOutLabel->Size = System::Drawing::Size(102, 26);
			this->CardNumberCheckOutLabel->TabIndex = 12;
			this->CardNumberCheckOutLabel->Text = L"CARD NUMBER:\r\n(MUST BE 9-DIGIT)";
			// 
			// CardCheckOutComboBox
			// 
			this->CardCheckOutComboBox->FormattingEnabled = true;
			this->CardCheckOutComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"MasterCard", L"Visa", L"UnionPay",
					L"PayPak"
			});
			this->CardCheckOutComboBox->Location = System::Drawing::Point(256, 416);
			this->CardCheckOutComboBox->Name = L"CardCheckOutComboBox";
			this->CardCheckOutComboBox->Size = System::Drawing::Size(121, 21);
			this->CardCheckOutComboBox->TabIndex = 11;
			// 
			// CardProviderCheckOutLabel
			// 
			this->CardProviderCheckOutLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->CardProviderCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CardProviderCheckOutLabel->Location = System::Drawing::Point(128, 416);
			this->CardProviderCheckOutLabel->Name = L"CardProviderCheckOutLabel";
			this->CardProviderCheckOutLabel->Size = System::Drawing::Size(144, 48);
			this->CardProviderCheckOutLabel->TabIndex = 10;
			this->CardProviderCheckOutLabel->Text = L"CARD PROVIDER:";
			// 
			// CashCheckBox
			// 
			this->CashCheckBox->AutoSize = true;
			this->CashCheckBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CashCheckBox->Location = System::Drawing::Point(272, 376);
			this->CashCheckBox->Name = L"CashCheckBox";
			this->CashCheckBox->Size = System::Drawing::Size(55, 17);
			this->CashCheckBox->TabIndex = 9;
			this->CashCheckBox->Text = L"CASH";
			this->CashCheckBox->UseVisualStyleBackColor = true;
			// 
			// CreditCardCheckBox
			// 
			this->CreditCardCheckBox->AutoSize = true;
			this->CreditCardCheckBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CreditCardCheckBox->Location = System::Drawing::Point(144, 376);
			this->CreditCardCheckBox->Name = L"CreditCardCheckBox";
			this->CreditCardCheckBox->Size = System::Drawing::Size(99, 17);
			this->CreditCardCheckBox->TabIndex = 8;
			this->CreditCardCheckBox->Text = L"CREDIT CARD";
			this->CreditCardCheckBox->UseVisualStyleBackColor = true;
			// 
			// PaymentModeCheckOutLabel
			// 
			this->PaymentModeCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->PaymentModeCheckOutLabel->Location = System::Drawing::Point(152, 336);
			this->PaymentModeCheckOutLabel->Name = L"PaymentModeCheckOutLabel";
			this->PaymentModeCheckOutLabel->Size = System::Drawing::Size(176, 23);
			this->PaymentModeCheckOutLabel->TabIndex = 7;
			this->PaymentModeCheckOutLabel->Text = L"CHOOSE A MODE OF PAYMENT";
			// 
			// AddressCheckOutLabel
			// 
			this->AddressCheckOutLabel->AutoSize = true;
			this->AddressCheckOutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddressCheckOutLabel->Location = System::Drawing::Point(128, 224);
			this->AddressCheckOutLabel->Name = L"AddressCheckOutLabel";
			this->AddressCheckOutLabel->Size = System::Drawing::Size(62, 13);
			this->AddressCheckOutLabel->TabIndex = 5;
			this->AddressCheckOutLabel->Text = L"ADDRESS:";
			// 
			// AddressCheckOutTextBox
			// 
			this->AddressCheckOutTextBox->Location = System::Drawing::Point(208, 216);
			this->AddressCheckOutTextBox->Multiline = true;
			this->AddressCheckOutTextBox->Name = L"AddressCheckOutTextBox";
			this->AddressCheckOutTextBox->Size = System::Drawing::Size(200, 96);
			this->AddressCheckOutTextBox->TabIndex = 4;
			// 
			// PhoneNoTextBox
			// 
			this->PhoneNoTextBox->Location = System::Drawing::Point(208, 168);
			this->PhoneNoTextBox->Name = L"PhoneNoTextBox";
			this->PhoneNoTextBox->Size = System::Drawing::Size(200, 20);
			this->PhoneNoTextBox->TabIndex = 3;
			// 
			// PhoneCheckoutLabel
			// 
			this->PhoneCheckoutLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->PhoneCheckoutLabel->Location = System::Drawing::Point(128, 168);
			this->PhoneCheckoutLabel->Name = L"PhoneCheckoutLabel";
			this->PhoneCheckoutLabel->Size = System::Drawing::Size(80, 23);
			this->PhoneCheckoutLabel->TabIndex = 2;
			this->PhoneCheckoutLabel->Text = L"PHONE NO:";
			// 
			// NameCheckOutText
			// 
			this->NameCheckOutText->Location = System::Drawing::Point(208, 112);
			this->NameCheckOutText->Name = L"NameCheckOutText";
			this->NameCheckOutText->Size = System::Drawing::Size(200, 20);
			this->NameCheckOutText->TabIndex = 1;
			// 
			// NameLabelCheckout
			// 
			this->NameLabelCheckout->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->NameLabelCheckout->Location = System::Drawing::Point(144, 112);
			this->NameLabelCheckout->Name = L"NameLabelCheckout";
			this->NameLabelCheckout->Size = System::Drawing::Size(56, 23);
			this->NameLabelCheckout->TabIndex = 0;
			this->NameLabelCheckout->Text = L"NAME:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1084, 570);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1100, 609);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1100, 609);
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"SEYMOUR";
			this->tabControl1->ResumeLayout(false);
			this->MainMenu->ResumeLayout(false);
			this->UserLogin->ResumeLayout(false);
			this->UserLogin->PerformLayout();
			this->SignUpPage->ResumeLayout(false);
			this->SignUpPage->PerformLayout();
			this->PreMade->ResumeLayout(false);
			this->PreMade->PerformLayout();
			this->CrustSelect->ResumeLayout(false);
			this->CrustSelect->PerformLayout();
			this->FlavourSelect->ResumeLayout(false);
			this->FlavourSelect->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VeggieDelightPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TheCheesePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SeekhKebabPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BBQBuzzPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChilliDelightPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FajitaPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TikkaPictureBox1))->EndInit();
			this->ToppingSelect->ResumeLayout(false);
			this->ToppingSelect->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingSausage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingExtra_Cheez))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingMashrooms))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingBeef))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingPepperoni))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToppingChicken))->EndInit();
			this->CheckoutPage->ResumeLayout(false);
			this->CheckoutPage->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: 
	System::Void customer_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void VeggieDelightCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void TheCheeseCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void SeekhKebabCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void TikkaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void FajitaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void ChilliDelightCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void BbqBuzzCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void Login_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void Signup_Click(System::Object^ sender, System::EventArgs^ e); 
	System::Void TikkaMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void TikkaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void FajitaMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void FajitaMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void ChilliDelightMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void ChilliDelightMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void BBQBuzzMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void BBQBuzzMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void SeekhKebabMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e); 
	System::Void SeekhKebabMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void TheCheeseMisc1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void TheCheeseMisc2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void TheCheeseMisc3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void ChilliDelightCheckbox_CheckStateChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void staff_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void signup2_Click(System::Object^ sender, System::EventArgs^ e); 
	System::Void codcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void cardcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void usernameavailability_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void backtologinbutton_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void CheckBBQ_Sause_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {};
private: System::Void RedPepperFlakes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void ToppingHeading_Click(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void ToppingChicken_Click(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void ToppingSelect_Click(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void ToppingExtra_Cheez_Click(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void ChickenCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void ChooseCheeseBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   System::Void PepperoniCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void ChooseTypeBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void ChooseQuantityOfCheezBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void BeefCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void CheckClovesSpice_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void ChoosePeppersBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void MashroomCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void CheckCreamlized_Onion_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void CheckCreamyGarlicSause_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void ChooseExtraBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void Extra_CheezCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void RedPepperFlakes1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void BasilScattering_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	System::Void CrustSelect_Enter(System::Object^ sender, System::EventArgs^ e);
//	System::Void Flavopricebox2_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void toflavormenu_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void GuesetOrderButton_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void ToppingPriceBox_TextChanged(System::Object^ sender, System::EventArgs^ e){
	}
	System::Void MoveToCheckout_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void SausageCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void italiancheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void neapolitancheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void newyorkcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void stlouischeckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void deepdishcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void focaciacheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void siciliancheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void stuffedcheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void MovetoToping_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void ProceedToCheckOutButton_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void BacktoFlavors_Click(System::Object^ sender, System::EventArgs^ e)
	{
		tabControl1->SelectedTab = FlavourSelect;
	}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
