#pragma once
#include"flavours.h"
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
	private: System::Windows::Forms::TabPage^ PasswordScreen;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TabPage^ CustomerIntro;
	private: System::Windows::Forms::TextBox^ textBox5;






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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->MainMenu = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Customer = (gcnew System::Windows::Forms::Button());
			this->Management = (gcnew System::Windows::Forms::Button());
			this->PasswordScreen = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->CustomerIntro = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->MainMenu->SuspendLayout();
			this->PasswordScreen->SuspendLayout();
			this->CustomerIntro->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->MainMenu);
			this->tabControl1->Controls->Add(this->PasswordScreen);
			this->tabControl1->Controls->Add(this->CustomerIntro);
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
			// PasswordScreen
			// 
			this->PasswordScreen->Controls->Add(this->button1);
			this->PasswordScreen->Controls->Add(this->textBox4);
			this->PasswordScreen->Controls->Add(this->textBox3);
			this->PasswordScreen->Controls->Add(this->label2);
			this->PasswordScreen->Controls->Add(this->label1);
			this->PasswordScreen->Controls->Add(this->textBox2);
			this->PasswordScreen->Location = System::Drawing::Point(4, 22);
			this->PasswordScreen->Name = L"PasswordScreen";
			this->PasswordScreen->Padding = System::Windows::Forms::Padding(3);
			this->PasswordScreen->Size = System::Drawing::Size(1128, 366);
			this->PasswordScreen->TabIndex = 1;
			this->PasswordScreen->Text = L"MainMenu";
			this->PasswordScreen->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(464, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 40);
			this->button1->TabIndex = 5;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(456, 200);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(248, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(456, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(248, 20);
			this->textBox3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(344, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PASSWORD:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(344, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"USER NAME:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(376, 48);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(400, 48);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"LOGIN HERE PLEASE";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CustomerIntro
			// 
			this->CustomerIntro->Controls->Add(this->textBox5);
			this->CustomerIntro->Location = System::Drawing::Point(4, 22);
			this->CustomerIntro->Name = L"CustomerIntro";
			this->CustomerIntro->Size = System::Drawing::Size(1128, 366);
			this->CustomerIntro->TabIndex = 2;
			this->CustomerIntro->Text = L"tabPage1";
			this->CustomerIntro->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(392, 48);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(344, 112);
			this->textBox5->TabIndex = 0;
			this->textBox5->Text = L"WELCOME TO SEYMOUR;";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 324);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->MainMenu->ResumeLayout(false);
			this->MainMenu->PerformLayout();
			this->PasswordScreen->ResumeLayout(false);
			this->PasswordScreen->PerformLayout();
			this->CustomerIntro->ResumeLayout(false);
			this->CustomerIntro->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void Customer_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = PasswordScreen;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text == "istinja")
		{
			String^ name;
			name = textBox3->Text;
			tabControl1->SelectedTab = CustomerIntro;
			textBox5->AppendText(name);
		}
		else
		{
			MessageBox::Show("Incorrect password, please try again");
		}
	}
	
};
}
