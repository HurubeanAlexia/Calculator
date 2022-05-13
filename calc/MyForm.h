#pragma once

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::String;

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
	private: System::Windows::Forms::Button^ btnSpace;
	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnClearEntry;



	private: System::Windows::Forms::Button^ btnPlusMinus;

	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigit4;


	private: System::Windows::Forms::Button^ btnDigit8;
	private: System::Windows::Forms::Button^ btnDigit9;
	private: System::Windows::Forms::Button^ btnAdd;




	private: System::Windows::Forms::Button^ btnDigit5;
	private: System::Windows::Forms::Button^ btnSub;


	private: System::Windows::Forms::Button^ btnDigit2;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ btnMult;

	private: System::Windows::Forms::Button^ btnDigit1;

	private: System::Windows::Forms::Button^ btnDigit6;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btnDiv;


	private: System::Windows::Forms::Button^ btnEqual;
	private: System::Windows::Forms::Button^ btnDecimal;


	private: System::Windows::Forms::Button^ btnDigit0;

	private: System::Windows::Forms::Button^ btnDigit3;

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
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnClearEntry = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnDigit0 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnSpace->Location = System::Drawing::Point(12, 64);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(75, 62);
			this->btnSpace->TabIndex = 0;
			this->btnSpace->Text = L"";
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtDisplay->Location = System::Drawing::Point(8, 3);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(322, 55);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDisplay_TextChanged);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnClear->Location = System::Drawing::Point(93, 64);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 62);
			this->btnClear->TabIndex = 2;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnClearEntry
			// 
			this->btnClearEntry->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->btnClearEntry->Location = System::Drawing::Point(174, 64);
			this->btnClearEntry->Name = L"btnClearEntry";
			this->btnClearEntry->Size = System::Drawing::Size(75, 62);
			this->btnClearEntry->TabIndex = 3;
			this->btnClearEntry->Text = L"CE";
			this->btnClearEntry->UseVisualStyleBackColor = true;
			this->btnClearEntry->Click += gcnew System::EventHandler(this, &MyForm::btnClearEntry_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPlusMinus->Location = System::Drawing::Point(255, 64);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(75, 62);
			this->btnPlusMinus->TabIndex = 4;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MyForm::btnPlusMinus_Click);
			// 
			// btnDigit7
			// 
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit7->Location = System::Drawing::Point(12, 132);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(75, 62);
			this->btnDigit7->TabIndex = 0;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = true;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit4
			// 
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit4->Location = System::Drawing::Point(12, 200);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(75, 62);
			this->btnDigit4->TabIndex = 0;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = true;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit8->Location = System::Drawing::Point(93, 132);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(75, 62);
			this->btnDigit8->TabIndex = 2;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = true;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit9
			// 
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit9->Location = System::Drawing::Point(174, 132);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(75, 62);
			this->btnDigit9->TabIndex = 3;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = true;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAdd->Location = System::Drawing::Point(255, 132);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 62);
			this->btnAdd->TabIndex = 4;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit5
			// 
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit5->Location = System::Drawing::Point(93, 200);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(75, 62);
			this->btnDigit5->TabIndex = 2;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = true;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSub->Location = System::Drawing::Point(255, 200);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(75, 62);
			this->btnSub->TabIndex = 4;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit2
			// 
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit2->Location = System::Drawing::Point(93, 268);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(75, 62);
			this->btnDigit2->TabIndex = 2;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = true;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(174, 268);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 62);
			this->button13->TabIndex = 3;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMult
			// 
			this->btnMult->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMult->Location = System::Drawing::Point(255, 268);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(75, 62);
			this->btnMult->TabIndex = 4;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit1
			// 
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit1->Location = System::Drawing::Point(12, 268);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(75, 62);
			this->btnDigit1->TabIndex = 2;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = true;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit6
			// 
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit6->Location = System::Drawing::Point(174, 200);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(75, 62);
			this->btnDigit6->TabIndex = 3;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = true;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(0, 0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 5;
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDiv->Location = System::Drawing::Point(255, 336);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(75, 62);
			this->btnDiv->TabIndex = 4;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnEqual
			// 
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnEqual->Location = System::Drawing::Point(174, 336);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(75, 62);
			this->btnEqual->TabIndex = 4;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDecimal->Location = System::Drawing::Point(93, 336);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(75, 62);
			this->btnDecimal->TabIndex = 4;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_Click);
			// 
			// btnDigit0
			// 
			this->btnDigit0->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit0->Location = System::Drawing::Point(12, 336);
			this->btnDigit0->Name = L"btnDigit0";
			this->btnDigit0->Size = System::Drawing::Size(75, 62);
			this->btnDigit0->TabIndex = 4;
			this->btnDigit0->Text = L"0";
			this->btnDigit0->UseVisualStyleBackColor = true;
			this->btnDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDigit3->Location = System::Drawing::Point(174, 268);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(75, 62);
			this->btnDigit3->TabIndex = 3;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = true;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 469);
			this->Controls->Add(this->btnDigit0);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnClearEntry);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->btnSpace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	/*private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}*/
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0") {

		txtDisplay->Text = numbers->Text;

	}
	else {
		txtDisplay->Text = txtDisplay->Text + numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);

	txtDisplay->Text = "";
	operators = NumbersOp->Text;
}

private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}

private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(txtDisplay->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/") {
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*") {
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
}
	
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}

private: System::Void btnClearEntry_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}

private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-"))
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	else
		txtDisplay->Text = "-" + txtDisplay->Text;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
