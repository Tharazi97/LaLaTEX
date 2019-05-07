#pragma once

namespace LaLaTex {

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
	private: System::Windows::Forms::RichTextBox^  textBox1;
	private: array<CheckBox ^> ^ Punkt = gcnew array<CheckBox ^>(400);
	private: array<PictureBox ^> ^ Obrazek = gcnew array<PictureBox ^>(13);
	private: array<CheckBox ^> ^ Znak = gcnew array<CheckBox ^>(6);
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::PictureBox^  podglad;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->podglad = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->Obrazek[12] = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Obrazek[12]))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(650, 450);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(410, 150);
			this->textBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Both;
			this->textBox1->TabIndex = 401;
			this->textBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::textBox1_DoubleClick);
			this->textBox1->Text = "\\begin{circuitikz} \\draw \r\n;\r\n\\end{circuitikz}";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(835, 405);
			this->label2->Name = L"label1";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->Text = L"Szukasz czegoœ?";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabel1->Location = System::Drawing::Point(925, 405);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(331, 13);
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"WejdŸ tutaj!";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// podglad
			// 
			this->podglad->Location = System::Drawing::Point(0, 0);
			this->podglad->Name = L"podglad";
			this->podglad->Size = System::Drawing::Size(700, 700);
			this->podglad->TabIndex = 12;
			this->podglad->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(650, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->Text = L"Wyeksportuj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(650, 350);
			this->button2->Name = L"button1";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->Text = L"Cofnij";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Enabled = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(750, 350);
			this->button3->Name = L"button1";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->Text = L"Nowy";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(750, 400);
			this->button4->Name = L"button1";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->Text = L"Zapisz";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(650, 300);
			this->button5->Name = L"button1";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->Text = L"Wczytaj";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(750, 300);
			this->button6->Name = L"button1";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->Text = L"Ostatni";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			//
			// Punkty
			//
			int a = 0;
			for (int i = 0; i <= 19; i++)
			{
				for (int j = 0; j <= 19; j++)
				{
					this->Punkt[a] = (gcnew System::Windows::Forms::CheckBox());
					this->Punkt[a]->AutoSize = true;
					this->Punkt[a]->Location = System::Drawing::Point(30 * j + 25, 30 * i + 25);
					this->Punkt[a]->Name = L"punkt";
					this->Punkt[a]->Size = System::Drawing::Size(15, 15);
					this->Punkt[a]->TabIndex = a;
					this->Punkt[a]->UseVisualStyleBackColor = true;
					this->Punkt[a]->Tag = a;
					this->Punkt[a]->Click += gcnew System::EventHandler(this, &MyForm::Punkt_Click);
					a++;
				};
			};
			//
			// Znaki
			//
			a = 0;
			for (int i = 0; i <= 5; i++)
			{
				
				this->Znak[a] = (gcnew System::Windows::Forms::CheckBox());
				this->Znak[a]->AutoSize = true;
				this->Znak[a]->Location = System::Drawing::Point(950, 35 * i + 25);
				this->Znak[a]->Name = L"znak";
				this->Znak[a]->Size = System::Drawing::Size(15, 14);
				this->Znak[a]->TabIndex = a+418;
				this->Znak[a]->UseVisualStyleBackColor = true;
				a++;
			};
			this->Znak[0]->Text = "-";
			this->Znak[0]->Checked = true;
			this->Znak[0]->Enabled = false;
			this->Znak[0]->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Znak0_CheckedChanged);
			this->Znak[1]->Text = "*-";
			this->Znak[1]->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Znak1_CheckedChanged);
			this->Znak[2]->Text = "-*";
			this->Znak[2]->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Znak2_CheckedChanged);
			this->Znak[3]->Text = "*-*";
			this->Znak[3]->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Znak3_CheckedChanged);
			this->Znak[4]->Text = "opis u góry";
			this->Znak[4]->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Znak4_CheckedChanged);
			this->Znak[5]->Text = "opis na dole";
			this->Znak[5]->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Znak5_CheckedChanged);
			//
			// Obrazki
			//
			a = 0;
			for (int i = 0; i <= 5; i++)
			{
				for (int j = 0; j <= 1; j++)
				{
					this->Obrazek[a] = (gcnew System::Windows::Forms::PictureBox());
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Obrazek[a]))->BeginInit();
					this->Obrazek[a]->Location = System::Drawing::Point(1100 + j*100 , 12 + i* 100);
					this->Obrazek[a]->Name = L"Obrazek";
					this->Obrazek[a]->Size = System::Drawing::Size(75, 75);
					this->Obrazek[a]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					this->Obrazek[a]->TabIndex = a + 402;
					this->Obrazek[a]->TabStop = false;
					a++;
				};
			};
			this->Obrazek[0]->Load("img/rezystor2.png");
			this->Obrazek[0]->Tag= L"to[european resistor";
			this->Obrazek[0]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek0_Click);
			this->Obrazek[1]->Load("img/zrodlo2.png");
			this->Obrazek[1]->Tag = L"to[american current source";
			this->Obrazek[1]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek1_Click);
			this->Obrazek[2]->Load("img/kondensator2.png");
			this->Obrazek[2]->Tag = L"to[eC";
			this->Obrazek[2]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek2_Click);
			this->Obrazek[3]->Load("img/cewka2.png");
			this->Obrazek[3]->Tag = L"to[L";
			this->Obrazek[3]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek3_Click);
			this->Obrazek[4]->Load("img/dioda2.png");
			this->Obrazek[4]->Tag = L"to[Do";
			this->Obrazek[4]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek4_Click);
			this->Obrazek[5]->Load("img/led2.png");
			this->Obrazek[5]->Tag = L"to[leDo";
			this->Obrazek[5]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek5_Click);
			this->Obrazek[6]->Load("img/woltomierz2.png");
			this->Obrazek[6]->Tag = L"to[voltmeter";
			this->Obrazek[6]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek6_Click);
			this->Obrazek[7]->Load("img/amperomierz2.png");
			this->Obrazek[7]->Tag = L"to[ammeter";
			this->Obrazek[7]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek7_Click);
			this->Obrazek[8]->Load("img/ground2.png");
			this->Obrazek[8]->Tag = L"node[ground]{}";
			this->Obrazek[8]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek8_Click);
			this->Obrazek[9]->Load("img/bateria2.png");
			this->Obrazek[9]->Tag = L"to[american voltage source";
			this->Obrazek[9]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek9_Click);
			this->Obrazek[10]->Load("img/zmienny2.png");
			this->Obrazek[10]->Tag = L"to[sinusoidal voltage source";
			this->Obrazek[10]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek10_Click);
			this->Obrazek[11]->Load("img/short2.png");
			this->Obrazek[11]->Tag = L"to[short";
			this->Obrazek[11]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek11_Click);

			// 
			// Obrazek[12]
			// 
			this->Obrazek[12]->Location = System::Drawing::Point(1100, 612);
			this->Obrazek[12]->Name = L"Obrazek[12]";
			this->Obrazek[12]->Size = System::Drawing::Size(75, 75);
			this->Obrazek[12]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Obrazek[12]->TabIndex = 415;
			this->Obrazek[12]->TabStop = false;
			this->Obrazek[12]->Load("img/cos2.png");
			this->Obrazek[12]->Click += gcnew System::EventHandler(this, &MyForm::Obrazek12_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1200, 625);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 416;
			this->label1->Text = L"W³asny element:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1200, 650);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 30);
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->TabIndex = 417;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(850, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 20);
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->TabIndex = 424;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(850, 200);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(80, 20);
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox4->TabIndex = 425;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Latex files (*.tex)|*.tex|Text files (*.txt)|*.txt|All files (*.*)|*.*";
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
			this->saveFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog2_FileOk);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1200, 650);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->podglad);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->Obrazek[12]);
			this->Controls->Add(this->label1);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			for (int a = 0; a <= 399; a++)
			{
				this->Controls->Add(this->Punkt[a]);
			};
			for (int a = 0; a <= 5; a++)
			{
				this->Controls->Add(this->Znak[a]);
			};
			for (int a = 0; a <= 11; a++)
			{
				this->Controls->Add(this->Obrazek[a]);
			};
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			for (int a = 0; a <= 11; a++)
			{
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Obrazek[a]))->EndInit();
			};
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Obrazek[12]))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ element="to[short]";
		String^ linia="";
		String^ adres = "";
		bool lp = true;
		int* x = new int[3];
		int* miejscex = new int[3];
		int* miejscey = new int[3];
		int pos1x, pos2x, pos1y, pos2y;
		String^ poz1x;
		String^ poz2x;
		String^ poz1y;
		String^ poz2y;
		String^ kropka="";
		String^ opis="";
		int z = 0;
		String^ nazwapliku = "";
		Bitmap^ bmp;
		bool dwa = false;

private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	System::Diagnostics::Process::Start("http://texdoc.net/texmf-dist/doc/latex/circuitikz/circuitikzmanual.pdf");
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	bmp = gcnew Bitmap(podglad->Width, podglad->Height);
	podglad->DrawToBitmap(bmp, podglad->ClientRectangle);
	podglad->SendToBack();
	podglad->Image = bmp;
	try
	{
		textBox1->SaveFile("zapis.txt");
		podglad->Image->Save("zapis.bmp");
	}
	catch (...)
	{

	}
}
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	textBox1->SaveFile("zapis3.txt");
	textBox1->Text = "\\documentclass[polish,polish,a4paper]{article}\r\n\\usepackage[utf8]{inputenc}\r\n\\usepackage[english]{babel}\r\n\\usepackage{circuitikz}\r\n\\begin{document}\r\n\\begin{circuitikz} \\draw \r\n" + textBox1->Text + "\r\n\\end{document}";
	textBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
	textBox1->LoadFile("zapis3.txt");
	nazwapliku = saveFileDialog1->FileName;
	this->Text = nazwapliku;
}
private: System::Void saveFileDialog2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	textBox1->SaveFile(saveFileDialog2->FileName, RichTextBoxStreamType::PlainText);
	nazwapliku = saveFileDialog2->FileName;
	podglad->Image->Save(nazwapliku+".bmp");
	this->Text = nazwapliku;
}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	textBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
	nazwapliku = openFileDialog1->FileName;
	this->Text = nazwapliku;
	try
	{
		Image^ newImage = Image::FromFile(nazwapliku+".bmp");
		Graphics::FromImage(bmp)->DrawImage(newImage, 0, 0);
		podglad->Image = bmp;
		delete newImage;
	}
	catch (...)
	{
		MessageBox::Show("Zapis nie istnieje!", "Uwaga!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->ShowDialog();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	button2->Enabled = false;
	try
	{
		Image^ newImage = Image::FromFile("zapis.bmp");
		Graphics::FromImage(bmp)->DrawImage(newImage, 0, 0);
		podglad->Image = bmp;
		delete newImage;
		textBox1->LoadFile("zapis.txt");
	}
	catch (...)
	{
		MessageBox::Show("Zapis nie istnieje!", "Uwaga!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox^ messageBox1;
	System::Windows::Forms::DialogResult result;
	if (textBox1->Text != "")
	{
		result = (messageBox1->Show("Czy zapisaæ?", "Uwaga!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1));
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			saveFileDialog2->ShowDialog();

			try
			{
				textBox1->SaveFile("zapis2.txt");
				podglad->Image->Save("zapis2.bmp");
			}
			catch (...)
			{

			}
			try
			{
				textBox1->SaveFile("zapis2.txt");
				podglad->Image->Save("zapis2.bmp");
			}
			catch (...)
			{

			}
			textBox1->Text = "\\documentclass[polish,polish,a4paper]{article}\r\n\\usepackage[utf8]{inputenc}\r\n\\usepackage[english]{babel}\r\n\\usepackage{circuitikz}\r\n\\begin{document}\r\n\\begin{circuitikz} \\draw \r\n;\r\n\\end{circuitikz}\r\n\\end{document}";
			Graphics::FromImage(bmp)->Clear(Color::Transparent);
			podglad->Image = bmp;
			try
			{
				textBox1->SaveFile("zapis.txt");
				podglad->Image->Save("zapis.bmp");
			}
			catch (...)
			{

			}
		}
		if (result == System::Windows::Forms::DialogResult::No)
		{
			try
			{
				textBox1->SaveFile("zapis2.txt");
				podglad->Image->Save("zapis2.bmp");
			}
			catch (...)
			{

			}
			textBox1->Text = "\\begin{circuitikz} \\draw \r\n;\r\n\\end{circuitikz}";
			Graphics::FromImage(bmp)->Clear(Color::Transparent);
			podglad->Image = bmp;
			try
			{
				textBox1->SaveFile("zapis.txt");
				podglad->Image->Save("zapis.bmp");
			}
			catch (...)
			{

			}
		}
	}

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog2->ShowDialog();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		Image^ newImage = Image::FromFile("zapis2.bmp");
		Graphics::FromImage(bmp)->DrawImage(newImage, 0, 0);
		podglad->Image = bmp;
		delete newImage;
		textBox1->LoadFile("zapis2.txt");
	}
	catch (...)
	{
		MessageBox::Show("Zapis nie istnieje!", "Uwaga!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	MessageBox^ messageBox1;
	System::Windows::Forms::DialogResult result;
	if (textBox1->Text != "")
	{
		result = (messageBox1->Show("Czy zapisaæ przed zakoñczeniem?", "Uwaga!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1));
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			saveFileDialog2->ShowDialog();
		}
		if (result == System::Windows::Forms::DialogResult::Cancel)
		{
			e->Cancel = true;
		}
	}
	try
	{
		textBox1->SaveFile("zapis2.txt");
		podglad->Image->Save("zapis2.bmp");
	}
	catch (...)
	{

	}
}
private: System::Void textBox1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	textBox1->SelectAll();
}

	private: System::Void Obrazek0_Click(System::Object^  sender, System::EventArgs^  e) {
		element = "to[european resistor" + kropka + opis + "]";
		linia = "";
		adres = "img/rezystor.png";
		lp = true;
		Obrazek[0]->Enabled = false;
		Obrazek[0]->BackColor = System::Drawing::SystemColors::InactiveCaption;
		for (int a = 0; a<=12 ; a++)
		{
			if (a != 0)
			{
				Obrazek[a]->Enabled = true;
				Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
			};
		};
		for (int a = 0; a <= 399; a++)
		{
			Punkt[a]->Checked = false;
		}
	}
private: System::Void Obrazek1_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[american current source" + kropka + opis + "]";
	linia = "";
	adres = "img/zrodlo.png";
	lp = true;
	Obrazek[1]->Enabled = false;
	Obrazek[1]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 1)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	}
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek2_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[eC" + kropka + opis + "]";
	linia = "";
	adres = "img/kondensator.png";
	lp = true;
	Obrazek[2]->Enabled = false;
	Obrazek[2]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 2)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek3_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[L" + kropka + opis + "]";
	linia = "";
	adres = "img/cewka.png";
	lp = true;
	Obrazek[3]->Enabled = false;
	Obrazek[3]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 3)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek4_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[Do" + kropka + opis + "]";
	linia = "";
	adres = "img/dioda.png";
	lp = true;
	Obrazek[4]->Enabled = false;
	Obrazek[4]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 4)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek5_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[leDo" + kropka + opis + "]";
	linia = "";
	adres = "img/led.png";
	lp = true;
	Obrazek[5]->Enabled = false;
	Obrazek[5]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 5)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek6_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[voltmeter" + kropka + opis + "]";
	linia = "";
	adres = "img/woltomierz.png";
	lp = true;
	Obrazek[6]->Enabled = false;
	Obrazek[6]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 6)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek7_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[ammeter" + kropka + opis + "]";
	linia = "";
	adres = "img/amperomierz.png";
	lp = true;
	Obrazek[7]->Enabled = false;
	Obrazek[7]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 7)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek8_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "node[ground]{}";
	linia = "";
	adres = "img/ground.png";
	lp = true;
	Obrazek[8]->Enabled = false;
	Obrazek[8]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 8)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek9_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[american voltage source" + kropka + opis + "]";
	linia = "";
	adres = "img/bateria.png";
	lp = true;
	Obrazek[9]->Enabled = false;
	Obrazek[9]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 9)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek10_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[sinusoidal voltage source" + kropka + opis + "]";
	linia = "";
	adres = "img/zmienny.png";
	lp = true;
	Obrazek[10]->Enabled = false;
	Obrazek[10]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 10)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek11_Click(System::Object^  sender, System::EventArgs^  e) {
	element = "to[short" + kropka + opis + "]";
	linia = "";
	adres = "";
	lp = true;
	Obrazek[11]->Enabled = false;
	Obrazek[11]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 11)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void Obrazek12_Click(System::Object^  sender, System::EventArgs^  e) {
	element = textBox2->Text;
	linia = "";
	adres = "img/cos.png";
	lp = true;
	Obrazek[12]->Enabled = false;
	Obrazek[12]->BackColor = System::Drawing::SystemColors::InactiveCaption;
	for (int a = 0; a <= 12; a++)
	{
		if (a != 12)
		{
			Obrazek[a]->Enabled = true;
			Obrazek[a]->BackColor = System::Drawing::SystemColors::Control;
		};
	};
	for (int a = 0; a <= 399; a++)
	{
		Punkt[a]->Checked = false;
	}
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Obrazek[12]->Enabled == false)
	{
		element = textBox2->Text;
		for (int a = 0; a <= 399; a++)
		{
			Punkt[a]->Checked = false;
			lp = true;
		}
	}
}

private: System::Void Punkt_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lp == true && Obrazek[8]->Enabled == true)
	{
		for (int a = 0; a <= 399; a++)
		{
			if (Punkt[a]->Checked == true)
			{
				x[0] = Punkt[a]->TabIndex;
				miejscex[0] = Punkt[a]->Location.X;
				miejscey[0] = Punkt[a]->Location.Y;
			}
		}
		lp = false;
		try
		{
			textBox1->SaveFile("zapis.txt");
			podglad->Image->Save("zapis.bmp");
		}
		catch (...)
		{

		}
	}
	else if (lp == false && Obrazek[8]->Enabled == true)
	{
		for (int a = 0; a <= 399; a++)
		{
			if (Punkt[a]->Checked == true && Punkt[a]->TabIndex!=x[0])
			{
				x[1] = Punkt[a]->TabIndex;
				miejscex[1] = Punkt[a]->Location.X;
				miejscey[1] = Punkt[a]->Location.Y;
				Punkt[a]->Checked = false;
				Punkt[x[0]]->Checked = false;
				dwa = true;
			}
		}
		if (dwa == false)
		{
			x[2] = x[1];
			x[1] = x[0];
			x[0] = x[2];
			miejscex[2] = miejscex[1];
			miejscey[2] = miejscey[1];
			miejscex[1] = miejscex[0];
			miejscey[1] = miejscey[0];
			miejscex[0] = miejscex[2];
			miejscey[0] = miejscey[2];
		}
		dwa = false;
		pos1x = x[0] % 20;
		if (pos1x % 2 > 0)
			{
				pos1x /= 2;
				poz1x = pos1x.ToString() + ".5";
			}
			else
			{
				pos1x /= 2;
				poz1x = pos1x.ToString();
			}
		pos1y = 19 - (x[0] / 20);
			if (pos1y % 2 > 0)
			{
				pos1y /= 2;
				poz1y = pos1y.ToString() + ".5";
			}
			else
			{
				pos1y /= 2;
				poz1y = pos1y.ToString();
			}
		pos2x = x[1] % 20;
			if (pos2x % 2 > 0)
			{
				pos2x /= 2;
				poz2x = pos2x.ToString() + ".5";
			}
			else
			{
				pos2x /= 2;
				poz2x = pos2x.ToString();
			}
		pos2y = 19 - (x[1] / 20);
			if (pos2y % 2 > 0)
			{
				pos2y /= 2;
				poz2y = pos2y.ToString() + ".5";
			}
			else
			{
				pos2y /= 2;
				poz2y = pos2y.ToString();
			}
			
		linia = "(" + poz1x + "," + poz1y + ")" + element + "(" + poz2x + "," + poz2y + ")" + "\r\n";
		textBox1->Text = textBox1->Text->Insert(textBox1->Text->Length-18, linia);
		linia = "";
		lp = true;
		//podglad
		Pen^ blackPen = gcnew Pen(Color::Black, 1.0f);
		Point point1 = Point(miejscex[0] + 6, miejscey[0] + 7);
		Point point2 = Point(miejscex[1] + 6, miejscey[1] + 7);
		Graphics::FromImage(bmp)->DrawLine(blackPen, point1, point2);
		if (adres != "")
		{
			Image^ newImage = Image::FromFile(adres);
			Graphics::FromImage(bmp)->DrawImage(newImage, ((miejscex[1] - 50 + miejscex[0]) / 2) - 18, ((miejscey[1] - 50 + miejscey[0]) / 2) - 16, 100, 100);
		}
		if (Znak[1]->Checked == true)
		{
			Image^ newImage = Image::FromFile("img/kropka.png");
			Graphics::FromImage(bmp)->DrawImage(newImage, miejscex[0] - 5, miejscey[0] - 5, 25, 25);
		}
		if (Znak[2]->Checked == true)
		{
			Image^ newImage = Image::FromFile("img/kropka.png");
			Graphics::FromImage(bmp)->DrawImage(newImage, miejscex[1] - 5, miejscey[1] - 5, 25, 25);
		}
		if (Znak[3]->Checked == true)
		{
			Image^ newImage = Image::FromFile("img/kropka.png");
			Graphics::FromImage(bmp)->DrawImage(newImage, miejscex[0] - 5, miejscey[0] - 5, 25, 25);
			Graphics::FromImage(bmp)->DrawImage(newImage, miejscex[1] - 5, miejscey[1] - 5, 25, 25);
		}
		podglad->Image = bmp;
		button2->Enabled = true;
	}
	else
	{
		for (int a = 0; a <= 399; a++)
		{
			if (Punkt[a]->Checked == true)
			{
				x[0] = Punkt[a]->TabIndex;
				Punkt[a]->Checked = false;
				miejscex[0] = Punkt[a]->Location.X;
				miejscey[0] = Punkt[a]->Location.Y;
			}
		}
		pos1x = x[0] % 20;
		if (pos1x % 2 > 0)
		{
			pos1x /= 2;
			poz1x = pos1x.ToString() + ".5";
		}
		else
		{
			pos1x /= 2;
			poz1x = pos1x.ToString();
		}
		pos1y = 19 - (x[0] / 20);
		if (pos1y % 2 > 0)
		{
			pos1y /= 2;
			poz1y = pos1y.ToString() + ".5";
		}
		else
		{
			pos1y /= 2;
			poz1y = pos1y.ToString();
		}
		try
		{
			textBox1->SaveFile("zapis.txt");
			podglad->Image->Save("zapis.bmp");
		}
		catch (...)
		{

		}
		linia = "(" + poz1x + "," + poz1y + ")" + element + "\r\n";
		textBox1->Text = textBox1->Text->Insert(textBox1->Text->Length - 18, linia);
		linia = "";
		Image^ newImage = Image::FromFile(adres);
		Graphics::FromImage(bmp)->DrawImage(newImage, miejscex[0] - 43, miejscey[0] - 40, 100, 100);
		podglad->Image = bmp;
		button2->Enabled = true;
	}
}
private: System::Void Znak0_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Znak[0]->Checked == true)
	{
		kropka = "";
		for (int a = 0; a <= 12; a++)
		{
			if (Obrazek[a]->Enabled == false)
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
		Znak[0]->Enabled = false;
		Znak[1]->Checked = false;
		Znak[1]->Enabled = true;
		Znak[2]->Checked = false;
		Znak[2]->Enabled = true;
		Znak[3]->Checked = false;
		Znak[3]->Enabled = true;
	}
}
private: System::Void Znak1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Znak[1]->Checked == true)
	{
		kropka = ",*-";
		for (int a = 0; a <= 12; a++)
		{
			if ((Obrazek[a]->Enabled == false) && (a!=8))
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
		Znak[0]->Enabled = true;
		Znak[0]->Checked = false;
		Znak[1]->Enabled = false;
		Znak[2]->Checked = false;
		Znak[2]->Enabled = true;
		Znak[3]->Checked = false;
		Znak[3]->Enabled = true;
	}	
}
private: System::Void Znak2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Znak[2]->Checked == true)
	{
		kropka = ",-*";
		for (int a = 0; a <= 12; a++)
		{
			if ((Obrazek[a]->Enabled == false) && (a != 8))
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
		Znak[0]->Enabled = true;
		Znak[0]->Checked = false;
		Znak[1]->Enabled = true;
		Znak[1]->Checked = false;
		Znak[2]->Enabled = false;
		Znak[3]->Checked = false;
		Znak[3]->Enabled = true;
	}
}
private: System::Void Znak3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Znak[3]->Checked == true)
	{
		kropka = ",*-*";
		for (int a = 0; a <= 12; a++)
		{
			if ((Obrazek[a]->Enabled == false) && (a != 8))
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
		Znak[0]->Enabled = true;
		Znak[0]->Checked = false;
		Znak[1]->Enabled = true;
		Znak[1]->Checked = false;
		Znak[2]->Enabled = true;
		Znak[2]->Checked = false;
		Znak[3]->Enabled = false;
	}
}
private: System::Void Znak4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Znak[4]->Checked == true)
	{
		opis = ",l="+textBox3->Text;
		for (int a = 0; a <= 12; a++)
		{
			if (Obrazek[a]->Enabled == false)
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
		Znak[5]->Checked = false;
	}
	else
	{
		opis = "";
		for (int a = 0; a <= 12; a++)
		{
			if (Obrazek[a]->Enabled == false)
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
	}
}
private: System::Void Znak5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Znak[5]->Checked == true)
	{
		opis = ",l_=" + textBox4->Text;
		for (int a = 0; a <= 12; a++)
		{
			if (Obrazek[a]->Enabled == false)
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
		Znak[4]->Checked = false;
	}
	else
	{
		opis = "";
		for (int a = 0; a <= 12; a++)
		{
			if (Obrazek[a]->Enabled == false)
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
	}
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Znak[4]->Checked == true)
	{
		opis = ",l=" + textBox3->Text;
		for (int a = 0; a <= 12; a++)
		{
			if (Obrazek[a]->Enabled == false)
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
	}
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Znak[5]->Checked == true)
	{
		opis = ",l_=" + textBox4->Text;
		for (int a = 0; a <= 12; a++)
		{
			if (Obrazek[a]->Enabled == false)
			{
				element = Obrazek[a]->Tag + kropka + opis + "]";
			}
		}
	}
}
};
}
