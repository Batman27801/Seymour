#pragma once
#include "Header.h"

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
		Order* obj1 = new Order;


	private: System::Windows::Forms::TabPage^ CrustSelect;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ pricebox;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Label^ subtitle;

	private: System::Windows::Forms::Label^ title;


	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::TabPage^ UserLogin;
	private: System::Windows::Forms::Label^ UserHeading;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ FlavourSelect;
	private: System::Windows::Forms::TabPage^ TotalNumSelect;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ NoOfOrderTextBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::PictureBox^ pictureBox5;


	private: System::Windows::Forms::PictureBox^ pictureBox6;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TabPage^ SelectCrust;
	private: System::Windows::Forms::TextBox^ TESTING;


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








	private: System::Windows::Forms::CheckBox^ italian;
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
			this->pricebox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->italian = (gcnew System::Windows::Forms::CheckBox());
			this->UserLogin = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->UserHeading = (gcnew System::Windows::Forms::Label());
			this->TotalNumSelect = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NoOfOrderTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FlavourSelect = (gcnew System::Windows::Forms::TabPage());
			this->BbqBuzzCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->ChilliDelightCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->FajitaCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->TikkaCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->SeekhKebabCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->TheCheeseCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->VeggieDelightCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SelectCrust = (gcnew System::Windows::Forms::TabPage());
			this->TESTING = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->MainMenu->SuspendLayout();
			this->CrustSelect->SuspendLayout();
			this->UserLogin->SuspendLayout();
			this->TotalNumSelect->SuspendLayout();
			this->FlavourSelect->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SelectCrust->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->MainMenu);
			this->tabControl1->Controls->Add(this->CrustSelect);
			this->tabControl1->Controls->Add(this->UserLogin);
			this->tabControl1->Controls->Add(this->TotalNumSelect);
			this->tabControl1->Controls->Add(this->FlavourSelect);
			this->tabControl1->Controls->Add(this->SelectCrust);
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
			this->staff->Location = System::Drawing::Point(274, 344);
			this->staff->Name = L"staff";
			this->staff->Size = System::Drawing::Size(303, 174);
			this->staff->TabIndex = 11;
			this->staff->Text = L"Click Here to Access The Staff Portal\r\n--For Manager\r\n--For Chefs\r\n--For Delivery"
				L" Boys";
			this->staff->UseVisualStyleBackColor = false;
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
			this->info->Text = L"Project Developed by:\r\nMuhammad Ali\r\nFawad J.Fateh\r\nArunjai Kumar";
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
			this->subtitle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
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
			this->CrustSelect->Controls->Add(this->pricebox);
			this->CrustSelect->Controls->Add(this->label2);
			this->CrustSelect->Controls->Add(this->label1);
			this->CrustSelect->Controls->Add(this->checkBox2);
			this->CrustSelect->Controls->Add(this->italian);
			this->CrustSelect->Location = System::Drawing::Point(4, 22);
			this->CrustSelect->Name = L"CrustSelect";
			this->CrustSelect->Size = System::Drawing::Size(1210, 576);
			this->CrustSelect->TabIndex = 1;
			this->CrustSelect->Text = L"Crust select";
			this->CrustSelect->UseVisualStyleBackColor = true;
			// 
			// pricebox
			// 
			this->pricebox->Location = System::Drawing::Point(801, 310);
			this->pricebox->Name = L"pricebox";
			this->pricebox->ReadOnly = true;
			this->pricebox->Size = System::Drawing::Size(150, 20);
			this->pricebox->TabIndex = 3;
			this->pricebox->Text = L"Price =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(778, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"focacia";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(364, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"italian";
			// 
			// checkBox2
			// 
			this->checkBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox2.BackgroundImage")));
			this->checkBox2->CheckAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->checkBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox2.Image")));
			this->checkBox2->Location = System::Drawing::Point(750, 71);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox2->Size = System::Drawing::Size(100, 100);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// italian
			// 
			this->italian->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->italian->CheckAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->italian->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"italian.Image")));
			this->italian->Location = System::Drawing::Point(329, 71);
			this->italian->Name = L"italian";
			this->italian->Size = System::Drawing::Size(100, 100);
			this->italian->TabIndex = 0;
			this->italian->Text = L"italian";
			this->italian->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->italian->UseVisualStyleBackColor = true;
			this->italian->CheckedChanged += gcnew System::EventHandler(this, &MyForm::italian_CheckedChanged);
			// 
			// UserLogin
			// 
			this->UserLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserLogin.BackgroundImage")));
			this->UserLogin->Controls->Add(this->button1);
			this->UserLogin->Controls->Add(this->UserHeading);
			this->UserLogin->Location = System::Drawing::Point(4, 22);
			this->UserLogin->Name = L"UserLogin";
			this->UserLogin->Size = System::Drawing::Size(1210, 576);
			this->UserLogin->TabIndex = 2;
			this->UserLogin->Text = L"tabPage1";
			this->UserLogin->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(993, 493);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"PROCEED TO NO OF ORDER";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// UserHeading
			// 
			this->UserHeading->Font = (gcnew System::Drawing::Font(L"Algerian", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserHeading->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->UserHeading->Location = System::Drawing::Point(304, 19);
			this->UserHeading->Name = L"UserHeading";
			this->UserHeading->Size = System::Drawing::Size(664, 52);
			this->UserHeading->TabIndex = 0;
			this->UserHeading->Text = L"CUSTOMER PORTAL\r\n";
			this->UserHeading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TotalNumSelect
			// 
			this->TotalNumSelect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TotalNumSelect.BackgroundImage")));
			this->TotalNumSelect->Controls->Add(this->button2);
			this->TotalNumSelect->Controls->Add(this->label3);
			this->TotalNumSelect->Controls->Add(this->NoOfOrderTextBox);
			this->TotalNumSelect->Location = System::Drawing::Point(4, 22);
			this->TotalNumSelect->Name = L"TotalNumSelect";
			this->TotalNumSelect->Size = System::Drawing::Size(1210, 576);
			this->TotalNumSelect->TabIndex = 4;
			this->TotalNumSelect->Text = L"TotalNumSelect";
			this->TotalNumSelect->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(680, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CLICK HERE TO PROCEED TO FLAVOURS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(320, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 48);
			this->label3->TabIndex = 1;
			this->label3->Text = L"HOW MANY PIZZAS DO YOU WANT TO ORDER";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NoOfOrderTextBox
			// 
			this->NoOfOrderTextBox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->NoOfOrderTextBox->Location = System::Drawing::Point(528, 176);
			this->NoOfOrderTextBox->Multiline = true;
			this->NoOfOrderTextBox->Name = L"NoOfOrderTextBox";
			this->NoOfOrderTextBox->Size = System::Drawing::Size(208, 48);
			this->NoOfOrderTextBox->TabIndex = 0;
			this->NoOfOrderTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// FlavourSelect
			// 
			this->FlavourSelect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FlavourSelect.BackgroundImage")));
			this->FlavourSelect->Controls->Add(this->BbqBuzzCheckbox);
			this->FlavourSelect->Controls->Add(this->ChilliDelightCheckbox);
			this->FlavourSelect->Controls->Add(this->FajitaCheckbox);
			this->FlavourSelect->Controls->Add(this->TikkaCheckbox);
			this->FlavourSelect->Controls->Add(this->SeekhKebabCheckbox);
			this->FlavourSelect->Controls->Add(this->TheCheeseCheckbox);
			this->FlavourSelect->Controls->Add(this->pictureBox7);
			this->FlavourSelect->Controls->Add(this->VeggieDelightCheckBox);
			this->FlavourSelect->Controls->Add(this->button3);
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
			// BbqBuzzCheckbox
			// 
			this->BbqBuzzCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->BbqBuzzCheckbox->Location = System::Drawing::Point(968, 152);
			this->BbqBuzzCheckbox->Name = L"BbqBuzzCheckbox";
			this->BbqBuzzCheckbox->Size = System::Drawing::Size(232, 80);
			this->BbqBuzzCheckbox->TabIndex = 25;
			this->BbqBuzzCheckbox->Text = L"\"BBQ Buzz\"\r\n\"Smoked chicken, capsicum, onions and black olives, sweet and smoky B"
				L"BQ sauce. Contains gluten in significant amounts\"\r\nPrice = Rs 1100\r\n";
			this->BbqBuzzCheckbox->UseVisualStyleBackColor = true;
			this->BbqBuzzCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BbqBuzzCheckbox_CheckedChanged);
			// 
			// ChilliDelightCheckbox
			// 
			this->ChilliDelightCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ChilliDelightCheckbox->Location = System::Drawing::Point(664, 152);
			this->ChilliDelightCheckbox->Name = L"ChilliDelightCheckbox";
			this->ChilliDelightCheckbox->Size = System::Drawing::Size(256, 80);
			this->ChilliDelightCheckbox->TabIndex = 24;
			this->ChilliDelightCheckbox->Text = L"\"Chilli Delight\"\r\n\"Fire up your taste buds with spicy chicken chunks, onions, oli"
				L"ves, jalapenos and hot peri sauce. Gluten free.\"\r\nPrice = Rs 1100\r\n";
			this->ChilliDelightCheckbox->UseVisualStyleBackColor = true;
			this->ChilliDelightCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChilliDelightCheckbox_CheckedChanged);
			// 
			// FajitaCheckbox
			// 
			this->FajitaCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FajitaCheckbox->Location = System::Drawing::Point(408, 152);
			this->FajitaCheckbox->Name = L"FajitaCheckbox";
			this->FajitaCheckbox->Size = System::Drawing::Size(240, 72);
			this->FajitaCheckbox->TabIndex = 23;
			this->FajitaCheckbox->Text = L"\"Fajita\"\r\n\"Contains an epic blend of cheese with authentic fresh chicken meat.Con"
				L"tains traces of gluten\"\r\nPrice = Rs 1349.59\r\n";
			this->FajitaCheckbox->UseVisualStyleBackColor = true;
			this->FajitaCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::FajitaCheckbox_CheckedChanged);
			// 
			// TikkaCheckbox
			// 
			this->TikkaCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TikkaCheckbox->Location = System::Drawing::Point(136, 152);
			this->TikkaCheckbox->Name = L"TikkaCheckbox";
			this->TikkaCheckbox->Size = System::Drawing::Size(256, 64);
			this->TikkaCheckbox->TabIndex = 22;
			this->TikkaCheckbox->Text = L"\"Tikka\"\r\n\"A specially developed recipe  topped with spicy  tikka boti & onions. G"
				L"luten Free.\"\r\nPrice = Rs 1259.99\r\n";
			this->TikkaCheckbox->UseVisualStyleBackColor = true;
			this->TikkaCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TikkaCheckbox_CheckedChanged);
			// 
			// SeekhKebabCheckbox
			// 
			this->SeekhKebabCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SeekhKebabCheckbox->Location = System::Drawing::Point(144, 416);
			this->SeekhKebabCheckbox->Name = L"SeekhKebabCheckbox";
			this->SeekhKebabCheckbox->Size = System::Drawing::Size(232, 88);
			this->SeekhKebabCheckbox->TabIndex = 20;
			this->SeekhKebabCheckbox->Text = L"\"Seekh Kebab\"\r\n\"Topped with seekh kabab chunks on tantalizing blend of spicy chic"
				L"ken, onions capsicum, green pepper and cheese. Contains gluten in significant am"
				L"ounts\"\r\nPrice = Rs 1400\r\n";
			this->SeekhKebabCheckbox->UseVisualStyleBackColor = true;
			this->SeekhKebabCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SeekhKebabCheckbox_CheckedChanged);
			// 
			// TheCheeseCheckbox
			// 
			this->TheCheeseCheckbox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TheCheeseCheckbox->Location = System::Drawing::Point(456, 416);
			this->TheCheeseCheckbox->Name = L"TheCheeseCheckbox";
			this->TheCheeseCheckbox->Size = System::Drawing::Size(272, 56);
			this->TheCheeseCheckbox->TabIndex = 19;
			this->TheCheeseCheckbox->Text = L"\"The Cheese\"\r\n\"Go back to where it all began with classic mozzarella cheese & tom"
				L"ato base. Gluten free\"\r\nPrice=Rs 1400";
			this->TheCheeseCheckbox->UseVisualStyleBackColor = true;
			this->TheCheeseCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TheCheeseCheckbox_CheckedChanged);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(864, 280);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(248, 128);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox7->TabIndex = 18;
			this->pictureBox7->TabStop = false;
			// 
			// VeggieDelightCheckBox
			// 
			this->VeggieDelightCheckBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->VeggieDelightCheckBox->Location = System::Drawing::Point(856, 416);
			this->VeggieDelightCheckBox->Name = L"VeggieDelightCheckBox";
			this->VeggieDelightCheckBox->Size = System::Drawing::Size(264, 56);
			this->VeggieDelightCheckBox->TabIndex = 17;
			this->VeggieDelightCheckBox->Text = L"\"The Veggie Delight\"\r\n\"A colorful medley of tomatoes, onions, mushrooms, black ol"
				L"ives, and green peppers. Gluten free\"\r\nRs=1000";
			this->VeggieDelightCheckBox->UseVisualStyleBackColor = true;
			this->VeggieDelightCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::VeggieDelightCheckBox_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1024, 504);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 56);
			this->button3->TabIndex = 14;
			this->button3->Text = L"GO TO CRUST SELECT MENU";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(456, 280);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(264, 136);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(144, 280);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(232, 136);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(968, 40);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(224, 112);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(664, 40);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(256, 112);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(408, 40);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(240, 112);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(144, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(248, 112);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// SelectCrust
			// 
			this->SelectCrust->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SelectCrust.BackgroundImage")));
			this->SelectCrust->Controls->Add(this->TESTING);
			this->SelectCrust->Location = System::Drawing::Point(4, 22);
			this->SelectCrust->Name = L"SelectCrust";
			this->SelectCrust->Size = System::Drawing::Size(1210, 576);
			this->SelectCrust->TabIndex = 5;
			this->SelectCrust->Text = L"CrustSelect";
			this->SelectCrust->UseVisualStyleBackColor = true;
			// 
			// TESTING
			// 
			this->TESTING->Location = System::Drawing::Point(536, 136);
			this->TESTING->Multiline = true;
			this->TESTING->Name = L"TESTING";
			this->TESTING->Size = System::Drawing::Size(448, 152);
			this->TESTING->TabIndex = 0;
			this->TESTING->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->UserLogin->ResumeLayout(false);
			this->TotalNumSelect->ResumeLayout(false);
			this->TotalNumSelect->PerformLayout();
			this->FlavourSelect->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->SelectCrust->ResumeLayout(false);
			this->SelectCrust->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void customer_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = UserLogin;
}
private: System::Void customer_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = UserLogin;
}
private: System::Void italian_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedTab = TotalNumSelect;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	total_no_of_pizzas = Convert::ToInt32(NoOfOrderTextBox->Text);
	tabControl1->SelectedTab = FlavourSelect;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	TESTING->Text = System::Convert::ToString(obj1->ReturnBill());
	tabControl1->SelectedTab = SelectCrust;
}

private: System::Void VeggieDelightCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new veggie_delight;
	obj1->TakeOrder(ptr);
}
private: System::Void TheCheeseCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new The_cheese;
	obj1->TakeOrder(ptr);

}
private: System::Void SeekhKebabCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new seekh_kebab;
	obj1->TakeOrder(ptr);
}
private: System::Void TikkaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new tikka;
	obj1->TakeOrder(ptr);
}
private: System::Void FajitaCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new fajita;
	obj1->TakeOrder(ptr);
}
private: System::Void ChilliDelightCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new chilli_delight;
	obj1->TakeOrder(ptr);

}
private: System::Void BbqBuzzCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	flavour* ptr;
	ptr = new bbq_buzz;
	obj1->TakeOrder(ptr);
}
};
}
