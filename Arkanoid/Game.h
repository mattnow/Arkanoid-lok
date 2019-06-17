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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->BeginInit();
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
			this->button1->Text = L"Spr�buj ponownie";
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
			this->button2->Text = L"Wyjd�";
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
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->platform);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->logo);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		// zmienne potrzebne w poni�szych funkcjach
		int x, y, count_space = 0, lifes = 3;
		char direction;
		
#pragma endregion
	private: System::Void Game_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit(); //zamyka program przy wcisni�ciu "zamknij" (x) na tym oknie
	}
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		ball->Left += x;
		ball->Top += y;
		//odbijanie od krawedzi bocznych
		if (ball->Left >= 1250 || ball->Left <=0 )
		{
			x = -x;
		}
		//odbijanie od krawedzi gornej
		if (ball->Top <= 0)
		{
			y = -y;
		}
		//sterowanie platforma w lewo / drugi if odpowiada za ruch w lewo z pilka 
		if (direction == 'L' && platform->Left > 0)
		{
			platform->Left -= 15;
			if (count_space == 0)
			{
				ball->Left -= 15;
			}
		}
		// sterowanie platforma w prawo / drugi if odpowiada za ruch w prawo z pilka
		if (direction == 'R' && platform->Left < 1120)
		{
			platform->Left += 15;
			if (count_space == 0)
			{
				ball->Left += 15;
			}
		}
		//Odbijanie pilki od platformy
		if (ball->Left > platform->Left  && ball->Left < platform->Right && ball->Top + ball->Height > platform ->Top && ball->Top < platform->Bottom)
		{
			y = -y;
		}
		else if (ball->Top >= Game::Height) //gdy gora pilka przekroczy dolna krawedz okna
		{
			//wylaczamy timer oraz odejmujemy jedno zycie
			timer->Enabled = false;
			lifes--;
			
			if (lifes > 0) //gdy mamy jeszcze jakies zycia
			{
				// wyswietlenie wiadomosci o stracie zycia
				MessageBox::Show("Straci�e� �ycie", "Powiadomienie", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
			}
			else
			{
				//wlaczenie i pokazanie przyciskow oraz pokazanie logo
				button1->Enabled = true;
				button2->Enabled = true;
				logo->Visible = true;
				button1->Visible = true;
				button2->Visible = true;
			}

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

		button1->Enabled = false; //wylaczanie przyciskow
		button2->Enabled = false; //wylaczanie przyciskow
		lifes = 3;

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
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
