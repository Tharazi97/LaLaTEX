#pragma once

namespace LaLaTex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for tabele
	/// </summary>
	public ref class tabele : public System::Windows::Forms::Form
	{
	public:
		tabele(void)
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
		~tabele()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(82, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(82, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"kolumny";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(183, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"wiersze";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(86, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"TABELAIZACJA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &tabele::button1_Click);
			// 
			// tabele
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->AutoScroll = true;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"tabele";
			this->Text = L"tabele";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int kolumny, wiersze ,ilosc;
		array<TextBox ^, 2> ^ komorka = gcnew array<TextBox ^, 2>(10, 20);
		int a = 0;
		System::Windows::Forms::Button^  button2;
		System::Windows::Forms::Button^  button3;
		System::Windows::Forms::Button^  button4;
		System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		label1->Hide();
		label2->Hide();
		kolumny = Int16::Parse(textBox1->Text);
		wiersze = Int16::Parse(textBox2->Text);
		ilosc = kolumny*wiersze;
		textBox1->Hide();
		textBox2->Hide();
		button1->Hide();
		
		
		
		for (int i = 0; i < kolumny; i++)
		{
			for (int j = 0; j < wiersze; j++)
			{
				komorka[i, j] = (gcnew System::Windows::Forms::TextBox());
				komorka[i, j]->Location = System::Drawing::Point(30+i*140, 30+j*30);
				komorka[i, j]->Name = L"komorka";
				komorka[i, j]->Size = System::Drawing::Size(130, 25);
				komorka[i, j]->TabIndex = a;
				this->Controls->Add(komorka[i, j]);
				a++;
			}
		}
		
		// 
		// button2
		// 
		button2 = (gcnew System::Windows::Forms::Button());
		button2->Location = System::Drawing::Point(100, 100+wiersze*30);
		button2->Name = L"button2";
		button2->Size = System::Drawing::Size(75, 23);
		button2->Text = L"utw";
		button2->UseVisualStyleBackColor = true;
		button2->Click += gcnew System::EventHandler(this, &tabele::button2_Click);
		this->Controls->Add(button2);
		// 
		// button3
		// 
		button3 = (gcnew System::Windows::Forms::Button());
		button3->Location = System::Drawing::Point(50+kolumny*140, 50);
		button3->Name = L"button2";
		button3->Size = System::Drawing::Size(130, 23);
		button3->Text = L"nowa kolumna";
		button3->UseVisualStyleBackColor = true;
		button3->Click += gcnew System::EventHandler(this, &tabele::button3_Click);
		this->Controls->Add(button3);
		// 
		// button4
		// 
		button4 = (gcnew System::Windows::Forms::Button());
		button4->Location = System::Drawing::Point(100, 50+wiersze*30);
		button4->Name = L"button2";
		button4->Size = System::Drawing::Size(130, 23);
		button4->Text = L"nowy wiersz";
		button4->UseVisualStyleBackColor = true;
		button4->Click += gcnew System::EventHandler(this, &tabele::button4_Click);
		this->Controls->Add(button4);
		//
		// richTextBox1
		//
		richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
		richTextBox1->Location = System::Drawing::Point(50, 150 + wiersze * 30);
		richTextBox1->Multiline = true;
		richTextBox1->Name = L"richTextBox1";
		richTextBox1->Size = System::Drawing::Size(410, 150);
		richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Both;
		richTextBox1->Text = "\\begin{tabular}{} \\hline\r\n\\end{tabular}";
		this->Controls->Add(richTextBox1);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i; i < kolumny; i++)
		{
			for (int j; j < wiersze; j++)
			{

			}
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		kolumny++;
		button3->Location = System::Drawing::Point(50 + kolumny * 140, 50);
		for (int j = 0; j < wiersze; j++)
		{
			komorka[kolumny-1, j] = (gcnew System::Windows::Forms::TextBox());
			komorka[kolumny-1, j]->Location = System::Drawing::Point(30 + (kolumny-1) * 140, 30 + j * 30);
			komorka[kolumny-1, j]->Name = L"komorka";
			komorka[kolumny-1, j]->Size = System::Drawing::Size(130, 25);
			komorka[kolumny-1, j]->TabIndex = a;
			this->Controls->Add(komorka[kolumny-1, j]);
			a++;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		wiersze++;
		button4->Location = System::Drawing::Point(100, 50+wiersze*30);
		button2->Location = System::Drawing::Point(100, 100 + wiersze * 30);
		richTextBox1->Location = System::Drawing::Point(50, 150 + wiersze * 30);
		for (int i = 0; i < kolumny; i++)
		{
			komorka[i, wiersze - 1] = (gcnew System::Windows::Forms::TextBox());
			komorka[i, wiersze - 1]->Location = System::Drawing::Point(30 + i * 140, 30 + (wiersze - 1) * 30);
			komorka[i, wiersze - 1]->Name = L"komorka";
			komorka[i, wiersze - 1]->Size = System::Drawing::Size(130, 25);
			komorka[i, wiersze - 1]->TabIndex = a;
			this->Controls->Add(komorka[i, wiersze - 1]);
			a++;
		}
	}
};
}
