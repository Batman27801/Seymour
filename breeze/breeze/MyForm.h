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
		focacia* a2 = new focacia;
		newyork* a1 = new newyork;
		crust* p;
		int total_no_of_pizzas;
		pizza *Pizza=new pizza;
		flavour *ptr;
		Order *order = new Order;
		account* test = new account;


	private: System::Windows::Forms::TabPage^ CrustSelect;
	public:




	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Label^ subtitle;

	private: System::Windows::Forms::Label^ title;


	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::TabPage^ UserLogin;
	private: System::Windows::Forms::Label^ UserHeading;


	private: System::Windows::Forms::TabPage^ FlavourSelect;



	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::PictureBox^ pictureBox5;


	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ MoveToCrustSelect;







	private: System::Windows::Forms::Button^ customer;
	private: System::Windows::Forms::Button^ staff;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
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
private: System::Windows::Forms::TextBox^ pricebox2;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Label^ Crustheading;
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
			this->CrustSelect = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Crustheading = (gcnew System::Windows::Forms::Label());
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
			this->FlavourSelect = (gcnew System::Windows::Forms::TabPage());
			this->backtocrustbutton = (gcnew System::Windows::Forms::Button());
			this->pricebox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->VeggieDelightCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->MoveToCrustSelect = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->MainMenu->SuspendLayout();
			this->CrustSelect->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->UserLogin->SuspendLayout();
			this->SignUpPage->SuspendLayout();
			this->FlavourSelect->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->MainMenu);
			this->tabControl1->Controls->Add(this->CrustSelect);
			this->tabControl1->Controls->Add(this->UserLogin);
			this->tabControl1->Controls->Add(this->SignUpPage);
			this->tabControl1->Controls->Add(this->UserPage);
			this->tabControl1->Controls->Add(this->FlavourSelect);
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
			// CrustSelect
			// 
			this->CrustSelect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CrustSelect.BackgroundImage")));
			this->CrustSelect->Controls->Add(this->pictureBox8);
			this->CrustSelect->Controls->Add(this->Crustheading);
			this->CrustSelect->Location = System::Drawing::Point(4, 22);
			this->CrustSelect->Name = L"CrustSelect";
			this->CrustSelect->Size = System::Drawing::Size(1210, 576);
			this->CrustSelect->TabIndex = 1;
			this->CrustSelect->Text = L"Crust select";
			this->CrustSelect->UseVisualStyleBackColor = true;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(165, 120);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 50);
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// Crustheading
			// 
			this->Crustheading->AutoSize = true;
			this->Crustheading->Font = (gcnew System::Drawing::Font(L"Algerian", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Crustheading->ForeColor = System::Drawing::Color::White;
			this->Crustheading->Location = System::Drawing::Point(542, 31);
			this->Crustheading->Name = L"Crustheading";
			this->Crustheading->Size = System::Drawing::Size(241, 41);
			this->Crustheading->TabIndex = 0;
			this->Crustheading->Text = L"CRUST MENU";
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
			// FlavourSelect
			// 
			this->FlavourSelect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FlavourSelect.BackgroundImage")));
			this->FlavourSelect->Controls->Add(this->backtocrustbutton);
			this->FlavourSelect->Controls->Add(this->pricebox2);
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
			this->FlavourSelect->Controls->Add(this->pictureBox7);
			this->FlavourSelect->Controls->Add(this->VeggieDelightCheckBox);
			this->FlavourSelect->Controls->Add(this->MoveToCrustSelect);
			this->FlavourSelect->Controls->Add(this->pictureBox6);
			this->FlavourSelect->Controls->Add(this->pictureBox5);
			this->FlavourSelect->Controls->Add(this->pictureBox4);
			this->FlavourSelect->Controls->Add(this->pictureBox3);
			this->FlavourSelect->Controls->Add(this->pictureBox2);
			this->FlavourSelect->Controls->Add(this->pictureBox1);
			this->FlavourSelect->Location = System::Drawing::Point(4, 22);
			this->FlavourSelect->Name = L"FlavourSelect";
			this->FlavourSelect->Size = System::Drawing::Size(1210, 576);
			this->FlavourSelect->TabIndex = 3;
			this->FlavourSelect->Text = L"FlavourSelect";
			this->FlavourSelect->UseVisualStyleBackColor = true;
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
			// pricebox2
			// 
			this->pricebox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pricebox2->Location = System::Drawing::Point(984, 441);
			this->pricebox2->Multiline = true;
			this->pricebox2->Name = L"pricebox2";
			this->pricebox2->ReadOnly = true;
			this->pricebox2->Size = System::Drawing::Size(137, 53);
			this->pricebox2->TabIndex = 40;
			this->pricebox2->Text = L"Current Total = RS 1200\r\n";
			this->pricebox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(937, 166);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(216, 142);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox7->TabIndex = 18;
			this->pictureBox7->TabStop = false;
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
			// MoveToCrustSelect
			// 
			this->MoveToCrustSelect->Location = System::Drawing::Point(968, 515);
			this->MoveToCrustSelect->Name = L"MoveToCrustSelect";
			this->MoveToCrustSelect->Size = System::Drawing::Size(168, 56);
			this->MoveToCrustSelect->TabIndex = 14;
			this->MoveToCrustSelect->Text = L"GO TO TOPPING MENU";
			this->MoveToCrustSelect->UseVisualStyleBackColor = true;
			this->MoveToCrustSelect->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(408, 280);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(212, 145);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(144, 280);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(212, 145);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(672, 288);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(216, 137);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(672, 22);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(216, 145);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(408, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(212, 145);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(144, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(212, 145);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
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
			this->CrustSelect->ResumeLayout(false);
			this->CrustSelect->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->UserLogin->ResumeLayout(false);
			this->UserLogin->PerformLayout();
			this->SignUpPage->ResumeLayout(false);
			this->SignUpPage->PerformLayout();
			this->FlavourSelect->ResumeLayout(false);
			this->FlavourSelect->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: 
	System::Void customer_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
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
};
}
