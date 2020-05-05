#pragma once
#include "flavours.h"
#include "newyork.h"
#include "focacia.h"

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
	private: System::Windows::Forms::TabPage^ CrustSelect;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ pricebox;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Customer;
	private: System::Windows::Forms::Button^ Management;










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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Customer = (gcnew System::Windows::Forms::Button());
			this->Management = (gcnew System::Windows::Forms::Button());
			this->CrustSelect = (gcnew System::Windows::Forms::TabPage());
			this->pricebox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->italian = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1->SuspendLayout();
			this->MainMenu->SuspendLayout();
			this->CrustSelect->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->MainMenu);
			this->tabControl1->Controls->Add(this->CrustSelect);
			this->tabControl1->Location = System::Drawing::Point(-240, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1136, 392);
			this->tabControl1->TabIndex = 0;
			// 
			// MainMenu
			// 
			this->MainMenu->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MainMenu->Controls->Add(this->textBox1);
			this->MainMenu->Controls->Add(this->Customer);
			this->MainMenu->Controls->Add(this->Management);
			this->MainMenu->Location = System::Drawing::Point(4, 22);
			this->MainMenu->Name = L"MainMenu";
			this->MainMenu->Padding = System::Windows::Forms::Padding(3);
			this->MainMenu->Size = System::Drawing::Size(1128, 366);
			this->MainMenu->TabIndex = 0;
			this->MainMenu->Text = L"MainMenu";
			this->MainMenu->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(352, 72);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(480, 72);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"WELCOME TO SEYMOUR";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Customer
			// 
			this->Customer->Location = System::Drawing::Point(672, 168);
			this->Customer->Name = L"Customer";
			this->Customer->Size = System::Drawing::Size(216, 64);
			this->Customer->TabIndex = 1;
			this->Customer->Text = L"Customer";
			this->Customer->UseVisualStyleBackColor = true;
			this->Customer->Click += gcnew System::EventHandler(this, &MyForm::Customer_Click);
			// 
			// Management
			// 
			this->Management->Location = System::Drawing::Point(272, 168);
			this->Management->Name = L"Management";
			this->Management->Size = System::Drawing::Size(192, 64);
			this->Management->TabIndex = 0;
			this->Management->Text = L"Management";
			this->Management->UseVisualStyleBackColor = true;
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
			this->CrustSelect->Size = System::Drawing::Size(1128, 366);
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
			this->italian->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::italian_CheckStateChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 364);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->MainMenu->ResumeLayout(false);
			this->MainMenu->PerformLayout();
			this->CrustSelect->ResumeLayout(false);
			this->CrustSelect->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void Customer_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = CrustSelect;
	}
	
	
private: System::Void italian_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	p = a1;
	pricebox->Text = "Price = " + (p->get_price()).ToString();
}
};
}
