#pragma once

namespace Arkanoid {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ball;
	protected:

	protected:
	private: System::Windows::Forms::Timer^ timer;

	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ platform;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ points_label;
	private: System::Windows::Forms::Label^ lifes_label;
	private: System::Windows::Forms::Label^ pt_val_label;
	private: System::Windows::Forms::Label^ Lf_val_label;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox25;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->ball = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->platform = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->points_label = (gcnew System::Windows::Forms::Label());
			this->lifes_label = (gcnew System::Windows::Forms::Label());
			this->pt_val_label = (gcnew System::Windows::Forms::Label());
			this->Lf_val_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->SuspendLayout();
			// 
			// ball
			// 
			this->ball->BackColor = System::Drawing::Color::Transparent;
			this->ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ball.Image")));
			this->ball->Location = System::Drawing::Point(628, 634);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(27, 27);
			this->ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->ball->TabIndex = 0;
			this->ball->TabStop = false;
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 20;
			this->timer->Tick += gcnew System::EventHandler(this, &Game::Timer_Tick);
			// 
			// logo
			// 
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(444, 107);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(400, 80);
			this->logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->logo->TabIndex = 4;
			this->logo->TabStop = false;
			this->logo->Visible = false;
			// 
			// button1
			// 
			this->button1->CausesValidation = false;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(565, 387);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 50);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->Text = L"Spróbuj ponownie";
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Game::Button1_Click);
			// 
			// button2
			// 
			this->button2->CausesValidation = false;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(565, 507);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 50);
			this->button2->TabIndex = 0;
			this->button2->TabStop = false;
			this->button2->Text = L"WyjdŸ";
			this->button2->UseMnemonic = false;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Game::Button2_Click);
			// 
			// platform
			// 
			this->platform->BackColor = System::Drawing::SystemColors::Desktop;
			this->platform->Location = System::Drawing::Point(565, 660);
			this->platform->Name = L"platform";
			this->platform->Size = System::Drawing::Size(150, 20);
			this->platform->TabIndex = 5;
			this->platform->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1280, 45);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// points_label
			// 
			this->points_label->AutoSize = true;
			this->points_label->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->points_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->points_label->ForeColor = System::Drawing::Color::White;
			this->points_label->Location = System::Drawing::Point(37, 13);
			this->points_label->Name = L"points_label";
			this->points_label->Size = System::Drawing::Size(73, 19);
			this->points_label->TabIndex = 7;
			this->points_label->Text = L"Punkty: ";
			// 
			// lifes_label
			// 
			this->lifes_label->AutoSize = true;
			this->lifes_label->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->lifes_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lifes_label->ForeColor = System::Drawing::Color::White;
			this->lifes_label->Location = System::Drawing::Point(1109, 13);
			this->lifes_label->Name = L"lifes_label";
			this->lifes_label->Size = System::Drawing::Size(59, 19);
			this->lifes_label->TabIndex = 8;
			this->lifes_label->Text = L"¯ycia: ";
			// 
			// pt_val_label
			// 
			this->pt_val_label->AutoSize = true;
			this->pt_val_label->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pt_val_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pt_val_label->ForeColor = System::Drawing::Color::White;
			this->pt_val_label->Location = System::Drawing::Point(105, 13);
			this->pt_val_label->Name = L"pt_val_label";
			this->pt_val_label->Size = System::Drawing::Size(18, 19);
			this->pt_val_label->TabIndex = 9;
			this->pt_val_label->Text = L"0";
			// 
			// Lf_val_label
			// 
			this->Lf_val_label->AutoSize = true;
			this->Lf_val_label->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Lf_val_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Lf_val_label->ForeColor = System::Drawing::Color::White;
			this->Lf_val_label->Location = System::Drawing::Point(1163, 13);
			this->Lf_val_label->Name = L"Lf_val_label";
			this->Lf_val_label->Size = System::Drawing::Size(18, 19);
			this->Lf_val_label->TabIndex = 10;
			this->Lf_val_label->Text = L"3";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox2->Location = System::Drawing::Point(102, 69);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox4->Location = System::Drawing::Point(102, 270);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 50);
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox5->Location = System::Drawing::Point(102, 203);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 50);
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox6->Location = System::Drawing::Point(102, 136);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 50);
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox10->Location = System::Drawing::Point(290, 136);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(100, 50);
			this->pictureBox10->TabIndex = 23;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox11->Location = System::Drawing::Point(290, 203);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(100, 50);
			this->pictureBox11->TabIndex = 22;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"";
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox12->Location = System::Drawing::Point(290, 270);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(100, 50);
			this->pictureBox12->TabIndex = 21;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"";
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox13->Location = System::Drawing::Point(290, 69);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(100, 50);
			this->pictureBox13->TabIndex = 20;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox3->Location = System::Drawing::Point(467, 136);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 50);
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox7->Location = System::Drawing::Point(467, 203);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 50);
			this->pictureBox7->TabIndex = 26;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox8->Location = System::Drawing::Point(467, 270);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 50);
			this->pictureBox8->TabIndex = 25;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox9->Location = System::Drawing::Point(467, 69);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 50);
			this->pictureBox9->TabIndex = 24;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"";
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox14->Location = System::Drawing::Point(648, 136);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(100, 50);
			this->pictureBox14->TabIndex = 31;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox15->Location = System::Drawing::Point(648, 203);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(100, 50);
			this->pictureBox15->TabIndex = 30;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"";
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox16->Location = System::Drawing::Point(648, 270);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(100, 50);
			this->pictureBox16->TabIndex = 29;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"";
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox17->Location = System::Drawing::Point(648, 69);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(100, 50);
			this->pictureBox17->TabIndex = 28;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"";
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox18->Location = System::Drawing::Point(833, 136);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(100, 50);
			this->pictureBox18->TabIndex = 35;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"";
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox19->Location = System::Drawing::Point(833, 203);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(100, 50);
			this->pictureBox19->TabIndex = 34;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"";
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox20->Location = System::Drawing::Point(833, 270);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(100, 50);
			this->pictureBox20->TabIndex = 33;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"";
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox21->Location = System::Drawing::Point(833, 69);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(100, 50);
			this->pictureBox21->TabIndex = 32;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox22->Location = System::Drawing::Point(1021, 136);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(100, 50);
			this->pictureBox22->TabIndex = 39;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"";
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox23->Location = System::Drawing::Point(1021, 203);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(100, 50);
			this->pictureBox23->TabIndex = 38;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"";
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox24->Location = System::Drawing::Point(1021, 270);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(100, 50);
			this->pictureBox24->TabIndex = 37;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"";
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox25->Location = System::Drawing::Point(1021, 69);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(100, 50);
			this->pictureBox25->TabIndex = 36;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->logo);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Lf_val_label);
			this->Controls->Add(this->pt_val_label);
			this->Controls->Add(this->lifes_label);
			this->Controls->Add(this->points_label);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->platform);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ball);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->Text = L"Arkanoid";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Game::Game_FormClosing);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		// zmienne potrzebne w poni¿szych funkcjach
		int x, y, count_space = 0, lifes = 3, points = 0, count_bricks = 24;
		char direction;
		
#pragma endregion
	private: void collision_green(System::Windows::Forms::Control^ target)
	{
		if ((ball->Top + ball->Height > target->Top) && (ball->Top < target->Top + target->Height) &&
			(ball->Left + ball->Width > target->Left) && (ball->Left < target->Left + target->Width))
		{
			if ((ball->Right > target->Right) || (ball->Left < target->Left))
			{
				x = -x;
				target->BackColor = System::Drawing::Color::Gold;
			}
			else 
			{
				y = -y;
				target->BackColor = System::Drawing::Color::Gold;
			}
		}
	}
	private: void collision_gold(System::Windows::Forms::Control^ target)
	{
		if ((ball->Top + ball->Height > target->Top) && (ball->Top < target->Top + target->Height) &&
			(ball->Left + ball->Width > target->Left) && (ball->Left < target->Left + target->Width) && (target ->Visible == Enabled))
		{
			if ((ball->Right > target->Right) || (ball->Left < target->Left))
			{
				x = -x;
				target->Visible = false;
				points += 5;
				pt_val_label->Text = "" + points;
				count_bricks--;
			}
			else
			{
				y = -y;
				target->Visible = false;
				points += 5;
				pt_val_label->Text = "" + points;
				count_bricks--;
			}
		}
	}
	

	private: System::Void Game_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit(); //zamyka program przy wcisniêciu "zamknij" (x) na tym oknie
	}
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		// Rozpoznawanie obiektow po ich kolorze tla i wywolywanie odpowiednich funkcji 
		for each (Control ^ item in this->Controls)
		{
			if (item->BackColor == System::Drawing::Color::LimeGreen)
			{
				collision_green(item);
			}
			else if (item->BackColor == System::Drawing::Color::Gold)
			{
				collision_gold(item);
			}
		}
		// Nadanie predkosci pileczce
		ball->Left += x;
		ball->Top += y;
		//odbijanie od krawedzi bocznych
		if (ball->Left >= 1230 || ball->Left <=0 )
		{
			x = -x;
		}
		//odbijanie od krawedzi gornej
		if ((ball->Top - 45) < 0)
		{
			y = -y;
		}
		//sterowanie platforma w lewo / drugi if odpowiada za ruch w lewo z pilka 
		if (direction == 'L' && platform->Left > 0)
		{
			platform->Left -= 20;
			if (count_space == 0)
			{
				ball->Left -= 20;
			}
		}
		// sterowanie platforma w prawo / drugi if odpowiada za ruch w prawo z pilka
		if (direction == 'R' && platform->Left < 1120)
		{
			platform->Left += 20;
			if (count_space == 0)
			{
				ball->Left += 20;
			}
		}
		//Odbijanie pilki od platformy
		if (ball->Right > platform->Left  && ball->Left < platform->Right && ball->Bottom > platform ->Top)
		{
				y = -y;
		}
		else if (ball->Top > platform->Top) //gdy stracimy pilke
		{
			//wylaczamy timer, odejmujemy jedno zycie i 10 punktow, ukrywamy pilek
			timer->Enabled = false;
			lifes--;
			points -= 10;
			ball->Visible = false;
			// aktualizujemy wyswietlane wartosci
			Lf_val_label->Text = "" + lifes;
			pt_val_label->Text = "" + points;
			if (lifes > 0) //gdy mamy jeszcze jakies zycia
			{
				// wyswietlenie wiadomosci o stracie zycia
				MessageBox::Show("Straci³eœ ¿ycie", "Powiadomienie", MessageBoxButtons::OK, MessageBoxIcon::Information);
				//reset platformy oraz pilki
				platform->Left = 565;
				platform->Top = 660;
				ball->Left = 628;
				ball->Top = 634;
				//zwolnienie blokady
				count_space--;
				//wlaczenie timera oraz zatrzymanie pilki
				timer->Enabled = true;
				x = 0;
				y = 0;
				// pokazujemy pilke
				ball->Visible = true;
			}
			else
			{
				//Wiadomosc o przegranej
				MessageBox::Show("Przegra³eœ!", "Przegrana", MessageBoxButtons::OK, MessageBoxIcon::Information);
				//wlaczenie i pokazanie przyciskow oraz pokazanie logo
				button1->Enabled = true;
				button2->Enabled = true;
				logo->Visible = true;
				button1->Visible = true;
				button2->Visible = true;
			}
		}
		//Wygrana
		if (count_bricks <= 0)
		{
			// Zatrzymanie timera
			timer->Enabled = false;
			// Schowanie pilki
			ball->Visible = false;
			// Dodanie punktow za pozostale zycia
			points += lifes * 10;
			pt_val_label->Text = "" + points;
			//Wiadomosc o wygranej
			MessageBox::Show("Wygra³eœ!", "Wygrana", MessageBoxButtons::OK, MessageBoxIcon::Information);
			//wlaczenie i pokazanie przyciskow oraz pokazanie logo
			button1->Enabled = true;
			button2->Enabled = true;
			logo->Visible = true;
			button1->Visible = true;
			button2->Visible = true;
		}
	}
private: System::Void Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		// zdarzenie przy przytrzymaniu przycisku w lewo
		if (e->KeyCode == Keys::Left)
		{
			direction = 'L';
		}
		// zdarzenie przy przytrzymaniu przycisku w prawo
		if (e->KeyCode == Keys::Right)
		{
			direction = 'R'; 
		}
		//wyzwalanie pilki klawiszem spacji
		if (e->KeyCode == Keys::Space && count_space == 0)
		{
			// w zalezosci od ilosci zyc zmienia sie kierunek wyzwalania pilki
			if (lifes % 2 == 0)
			{
				x = 10;
				y = -10;
			}
			else
			{
				x = -10;
				y = -10;
			}
			count_space++;
		}
	}
private: System::Void Game_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		direction = 'X'; // gdy klawisze nie sa wcisniete przypisuje dowolna wartosc char, zeby zatrzymac platforme
	}

private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {

		button1->Enabled = false; //wylaczanie przyciskow koncowych
		button2->Enabled = false; //wylaczanie przyciskow koncowych
		// reset zyc oraz punktow do wartosci poczatkowych
		lifes = 3;
		points = 0;
		// zresetowanie wyswietlania
		Lf_val_label->Text = "" + lifes;
		pt_val_label->Text = "" + points;
		logo->Visible = false; //ukrywanie logo
		button1->Visible = false; // ukrywanie przyciskow
		button2->Visible = false; // ukrywanie przyciskow
		// resetowanie platformy oraz pilki
		platform->Left = 565;
		platform->Top = 660;
		ball->Left = 628;
		ball->Top = 634;
		//zwalnianie blokady
		count_space--;
		// wlaczenie timera oraz zatrzymanie pilki
		timer->Enabled = true;
		x = 0;
		y = 0;
		// reset ilosci klockow
		count_bricks = 24;
		// ponowne pokazanie klockow
		for each (Control ^ item in this->Controls)
		{
			if (item->BackColor == System::Drawing::Color::Gold)
			{
				item->BackColor = System::Drawing::Color::LimeGreen;
				item->Visible = true;
			}
		}
		// ponowne pokazanie pilki
		ball->Visible = Enabled;
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
