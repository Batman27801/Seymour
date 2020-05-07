#pragma once
#include "flavours.h"
#include "newyork.h"
#include "focacia.h"
#include"Order.h"

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
		Order  *obj1 = new Order;
		

	private: System::Windows::Forms::TabPage^ CrustSelect;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ pricebox;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Label^ subtitle;

	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ customer;
	private: System::Windows::Forms::Label^ staff;
	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::TabPage^ UserLogin;
	private: System::Windows::Forms::Label^ UserHeading;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ FlavourSelect;
	private: System::Windows::Forms::TabPage^ TotalNumSelect;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ NoOfOrderTextBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ TikkaLabel;
	private: System::Windows::Forms::Button^ button2;








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
			this->info = (gcnew System::Windows::Forms::Label());
			this->staff = (gcnew System::Windows::Forms::Label());
			this->customer = (gcnew System::Windows::Forms::Label());
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TikkaLabel = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->MainMenu->SuspendLayout();
			this->CrustSelect->SuspendLayout();
			this->UserLogin->SuspendLayout();
			this->TotalNumSelect->SuspendLayout();
			this->FlavourSelect->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->MainMenu);
			this->tabControl1->Controls->Add(this->CrustSelect);
			this->tabControl1->Controls->Add(this->UserLogin);
			this->tabControl1->Controls->Add(this->TotalNumSelect);
			this->tabControl1->Controls->Add(this->FlavourSelect);
			this->tabControl1->Location = System::Drawing::Point(-130, -32);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1084, 506);
			this->tabControl1->TabIndex = 0;
			// 
			// MainMenu
			// 
			this->MainMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainMenu.BackgroundImage")));
			this->MainMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->MainMenu->Controls->Add(this->info);
			this->MainMenu->Controls->Add(this->staff);
			this->MainMenu->Controls->Add(this->customer);
			this->MainMenu->Controls->Add(this->splitter1);
			this->MainMenu->Controls->Add(this->subtitle);
			this->MainMenu->Controls->Add(this->title);
			this->MainMenu->Location = System::Drawing::Point(4, 22);
			this->MainMenu->Name = L"MainMenu";
			this->MainMenu->Padding = System::Windows::Forms::Padding(3);
			this->MainMenu->Size = System::Drawing::Size(1076, 480);
			this->MainMenu->TabIndex = 0;
			this->MainMenu->Text = L"MainMenu";
			this->MainMenu->UseVisualStyleBackColor = true;
			// 
			// info
			// 
			this->info->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->info->Location = System::Drawing::Point(126, 401);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(222, 54);
			this->info->TabIndex = 9;
			this->info->Text = L"Project Developed by:\r\nMuhammad Ali\r\nFawad J.Fateh\r\nArunjai Kumar";
			// 
			// staff
			// 
			this->staff->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->staff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->staff->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->staff->Location = System::Drawing::Point(612, 288);
			this->staff->Name = L"staff";
			this->staff->Size = System::Drawing::Size(264, 132);
			this->staff->TabIndex = 8;
			this->staff->Text = L"Click here to Acces the Staff Portal\r\n--For Chefs\r\n--For Delivery boys\r\n--For Man"
				L"ager";
			this->staff->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// customer
			// 
			this->customer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->customer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customer->ForeColor = System::Drawing::Color::White;
			this->customer->Location = System::Drawing::Point(508, 118);
			this->customer->Name = L"customer";
			this->customer->Size = System::Drawing::Size(261, 141);
			this->customer->TabIndex = 7;
			this->customer->Text = L"Click here to Acces the Customer Portal\r\n--You can order From Here\r\n--View Menu H"
				L"ere\r\n--Create Account Here";
			this->customer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->customer->Click += gcnew System::EventHandler(this, &MyForm::customer_Click);
			this->customer->DoubleClick += gcnew System::EventHandler(this, &MyForm::customer_DoubleClick);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(3, 3);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 474);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			// 
			// subtitle
			// 
			this->subtitle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitle->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->subtitle->Location = System::Drawing::Point(517, 58);
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
			this->title->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->title->Location = System::Drawing::Point(465, 9);
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
			this->CrustSelect->Size = System::Drawing::Size(1076, 480);
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
			this->italian->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::italian_CheckStateChanged);
			// 
			// UserLogin
			// 
			this->UserLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserLogin.BackgroundImage")));
			this->UserLogin->Controls->Add(this->button1);
			this->UserLogin->Controls->Add(this->UserHeading);
			this->UserLogin->Location = System::Drawing::Point(4, 22);
			this->UserLogin->Name = L"UserLogin";
			this->UserLogin->Size = System::Drawing::Size(1076, 480);
			this->UserLogin->TabIndex = 2;
			this->UserLogin->Text = L"tabPage1";
			this->UserLogin->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(728, 384);
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
			this->UserHeading->Location = System::Drawing::Point(197, 9);
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
			this->TotalNumSelect->Size = System::Drawing::Size(1076, 480);
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
			this->FlavourSelect->Controls->Add(this->pictureBox1);
			this->FlavourSelect->Controls->Add(this->TikkaLabel);
			this->FlavourSelect->Location = System::Drawing::Point(4, 22);
			this->FlavourSelect->Name = L"FlavourSelect";
			this->FlavourSelect->Size = System::Drawing::Size(1076, 480);
			this->FlavourSelect->TabIndex = 3;
			this->FlavourSelect->Text = L"FlavourSelect";
			this->FlavourSelect->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(144, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 112);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// TikkaLabel
			// 
			this->TikkaLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TikkaLabel->Location = System::Drawing::Point(144, 152);
			this->TikkaLabel->Name = L"TikkaLabel";
			this->TikkaLabel->Size = System::Drawing::Size(208, 48);
			this->TikkaLabel->TabIndex = 0;
			this->TikkaLabel->Text = L"\"A specially developed recipe  topped with spicy  tikka boti & onions. Gluten Fre"
				L"e.\"\r\nPrice = Rs 1259.99";
			this->TikkaLabel->Click += gcnew System::EventHandler(this, &MyForm::TikkaLabel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 464);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(847, 503);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"SEYMOUR";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->MainMenu->ResumeLayout(false);
			this->CrustSelect->ResumeLayout(false);
			this->CrustSelect->PerformLayout();
			this->UserLogin->ResumeLayout(false);
			this->TotalNumSelect->ResumeLayout(false);
			this->TotalNumSelect->PerformLayout();
			this->FlavourSelect->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
private: System::Void italian_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	p = a1;
	pricebox->Text = "Price = " + (p->get_price()).ToString();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

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
private: System::Void TikkaLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	tikka* ptr;
	ptr = new tikka;
	obj1->TakeOrder(ptr, 0);
}
};
}
