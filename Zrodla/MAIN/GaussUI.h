#pragma once

#include <Windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace Gauss {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GaussUI
	/// </summary>
	public ref class GaussUI : public System::Windows::Forms::Form
	{
	public:
		GaussUI(void)
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
		~GaussUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ListBox^  loadList;
	protected:

	private: System::Windows::Forms::Button^  loadButton;

	private: System::Windows::Forms::TextBox^  threadBox;
	private: System::Windows::Forms::Label^  threadLabel;
	private: System::Windows::Forms::TextBox^  loadPreviewBox;




	private: System::Windows::Forms::Button^  cButton;
	private: System::Windows::Forms::Button^  aButton;
	private: System::Windows::Forms::TextBox^  aTimeBox;
	private: System::Windows::Forms::TextBox^  cTimeBox;
	private: System::Windows::Forms::Label^  aTimeLabel;
	private: System::Windows::Forms::Label^  cTimeLabel;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary
		typedef void(__cdecl *hCFn)(std::string filename);
		typedef	void(__cdecl *hASMFn)();
		System::ComponentModel::Container ^components;
		System::Collections::Generic::List<String^> ^filepathList;
		System::Collections::Generic::List<String^> ^filenameList;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->loadList = (gcnew System::Windows::Forms::ListBox());
			this->loadButton = (gcnew System::Windows::Forms::Button());
			this->threadBox = (gcnew System::Windows::Forms::TextBox());
			this->threadLabel = (gcnew System::Windows::Forms::Label());
			this->loadPreviewBox = (gcnew System::Windows::Forms::TextBox());
			this->cButton = (gcnew System::Windows::Forms::Button());
			this->aButton = (gcnew System::Windows::Forms::Button());
			this->aTimeBox = (gcnew System::Windows::Forms::TextBox());
			this->cTimeBox = (gcnew System::Windows::Forms::TextBox());
			this->aTimeLabel = (gcnew System::Windows::Forms::Label());
			this->cTimeLabel = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(946, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// loadList
			// 
			this->loadList->FormattingEnabled = true;
			this->loadList->Location = System::Drawing::Point(12, 45);
			this->loadList->Name = L"loadList";
			this->loadList->Size = System::Drawing::Size(120, 355);
			this->loadList->TabIndex = 1;
			// 
			// loadButton
			// 
			this->loadButton->Location = System::Drawing::Point(138, 318);
			this->loadButton->Name = L"loadButton";
			this->loadButton->Size = System::Drawing::Size(96, 43);
			this->loadButton->TabIndex = 2;
			this->loadButton->Text = L"Load";
			this->loadButton->UseVisualStyleBackColor = true;
			this->loadButton->Click += gcnew System::EventHandler(this, &GaussUI::loadButton_Click);
			// 
			// threadBox
			// 
			this->threadBox->Location = System::Drawing::Point(138, 380);
			this->threadBox->Name = L"threadBox";
			this->threadBox->Size = System::Drawing::Size(96, 20);
			this->threadBox->TabIndex = 3;
			// 
			// threadLabel
			// 
			this->threadLabel->AutoSize = true;
			this->threadLabel->Location = System::Drawing::Point(138, 364);
			this->threadLabel->Name = L"threadLabel";
			this->threadLabel->Size = System::Drawing::Size(46, 13);
			this->threadLabel->TabIndex = 4;
			this->threadLabel->Text = L"Threads";
			// 
			// loadPreviewBox
			// 
			this->loadPreviewBox->BackColor = System::Drawing::SystemColors::Window;
			this->loadPreviewBox->Location = System::Drawing::Point(138, 45);
			this->loadPreviewBox->Multiline = true;
			this->loadPreviewBox->Name = L"loadPreviewBox";
			this->loadPreviewBox->ReadOnly = true;
			this->loadPreviewBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->loadPreviewBox->Size = System::Drawing::Size(282, 267);
			this->loadPreviewBox->TabIndex = 5;
			// 
			// cButton
			// 
			this->cButton->Location = System::Drawing::Point(821, 435);
			this->cButton->Name = L"cButton";
			this->cButton->Size = System::Drawing::Size(113, 50);
			this->cButton->TabIndex = 6;
			this->cButton->Text = L"C++ DLL";
			this->cButton->UseVisualStyleBackColor = true;
			this->cButton->Click += gcnew System::EventHandler(this, &GaussUI::cButton_Click);
			// 
			// aButton
			// 
			this->aButton->Location = System::Drawing::Point(821, 379);
			this->aButton->Name = L"aButton";
			this->aButton->Size = System::Drawing::Size(113, 50);
			this->aButton->TabIndex = 7;
			this->aButton->Text = L"ASM DLL";
			this->aButton->UseVisualStyleBackColor = true;
			this->aButton->Click += gcnew System::EventHandler(this, &GaussUI::aButton_Click);
			// 
			// aTimeBox
			// 
			this->aTimeBox->Location = System::Drawing::Point(715, 409);
			this->aTimeBox->Name = L"aTimeBox";
			this->aTimeBox->ReadOnly = true;
			this->aTimeBox->Size = System::Drawing::Size(100, 20);
			this->aTimeBox->TabIndex = 8;
			// 
			// cTimeBox
			// 
			this->cTimeBox->Location = System::Drawing::Point(715, 465);
			this->cTimeBox->Name = L"cTimeBox";
			this->cTimeBox->ReadOnly = true;
			this->cTimeBox->Size = System::Drawing::Size(100, 20);
			this->cTimeBox->TabIndex = 9;
			// 
			// aTimeLabel
			// 
			this->aTimeLabel->AutoSize = true;
			this->aTimeLabel->Location = System::Drawing::Point(712, 393);
			this->aTimeLabel->Name = L"aTimeLabel";
			this->aTimeLabel->Size = System::Drawing::Size(106, 13);
			this->aTimeLabel->TabIndex = 10;
			this->aTimeLabel->Text = L"ASM Execution Time";
			// 
			// cTimeLabel
			// 
			this->cTimeLabel->AutoSize = true;
			this->cTimeLabel->Location = System::Drawing::Point(712, 449);
			this->cTimeLabel->Name = L"cTimeLabel";
			this->cTimeLabel->Size = System::Drawing::Size(98, 13);
			this->cTimeLabel->TabIndex = 11;
			this->cTimeLabel->Text = L"C++ Execution time";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Multiselect = true;
			// 
			// GaussUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 504);
			this->Controls->Add(this->cTimeLabel);
			this->Controls->Add(this->aTimeLabel);
			this->Controls->Add(this->cTimeBox);
			this->Controls->Add(this->aTimeBox);
			this->Controls->Add(this->aButton);
			this->Controls->Add(this->cButton);
			this->Controls->Add(this->loadPreviewBox);
			this->Controls->Add(this->threadLabel);
			this->Controls->Add(this->threadBox);
			this->Controls->Add(this->loadButton);
			this->Controls->Add(this->loadList);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"GaussUI";
			this->Text = L"GaussUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Wczytywanie wskazanych plikow na listy
	private: System::Void loadButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			loadList->Items->Clear();
			this->filenameList = gcnew System::Collections::Generic::List<String^>;
			this->filepathList = gcnew System::Collections::Generic::List<String^>;
			for (int i = 0; i < openFileDialog1->FileNames->Length ;i++)
			{
				
				filepathList->Add(openFileDialog1->FileNames[i]->ToString());
				filenameList->Add(openFileDialog1->SafeFileNames[i]->ToString());
				loadList->Items->Add(openFileDialog1->SafeFileNames[i]);
			}
		}
	}
	private: System::Void cButton_Click(System::Object^  sender, System::EventArgs^  e) {

		HINSTANCE hCDll = LoadLibrary("C++ Gauss Dll.dll");
		if (!hCDll) //DOROBIC JAK NIE MA
		{

		}
		else
		{
			//std::string filename = msclr::interop::marshal_as<std::string>(loadList->Items[0]->ToString());
			hCFn cFunction = (hCFn)GetProcAddress(hCDll, "gaussMain");
			if (!cFunction) // TU TEZ DOROBIC
			{

			}
			else
			{
				//Dodac wielowatkowosc. Prawodpodobnie threadpool tylko ogarnac przekazywanie argumentow
				//Zabezpieczyc wywolywanie pustej listy
				cFunction(msclr::interop::marshal_as<std::string>(filepathList[0])); //Konwertowac gdzies indziej
				FreeLibrary(hCDll);
			}

		}

	}
	private: System::Void aButton_Click(System::Object^  sender, System::EventArgs^  e) {

		HINSTANCE hAsmDll = LoadLibrary("ASM Gauss Dll.dll");
		if (!hAsmDll) // TU TEZ DOROBIC
		{

		}
		else
		{
			hASMFn aFunction = (hASMFn)GetProcAddress(hAsmDll, "GaussMain");
			if (!aFunction) // TU TEZ
			{

			}
			else
			{
				aFunction();
				FreeLibrary(hAsmDll);
			}
		}

	}
};
}
