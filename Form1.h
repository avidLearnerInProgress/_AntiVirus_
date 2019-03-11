#pragma once

#define BUFSIZE 1024    
#define MD5LEN  16

using namespace std;

int FLAG=0;
char file_name[200],setpath[100];
char ret[35];
int totalfiles=0;
int vcount=0;
fstream temp;fstream hdb;fstream fcheck;fstream hashdb;//fstream qtemp;

namespace ANTI_virus {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  HomePanel;
	protected: 

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  SSButton;

	private: System::Windows::Forms::Panel^  SSPanel;
	private: System::Windows::Forms::TextBox^  TBDir;



	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::Panel^  StatusPanel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Panel^  QPanel;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->HomePanel = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SSButton = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->QPanel = (gcnew System::Windows::Forms::Panel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SSPanel = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->TBDir = (gcnew System::Windows::Forms::TextBox());
			this->StatusPanel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->HomePanel->SuspendLayout();
			this->QPanel->SuspendLayout();
			this->SSPanel->SuspendLayout();
			this->StatusPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkOrange;
			this->button1->Location = System::Drawing::Point(4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(339, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ANTI-Virus";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// HomePanel
			// 
			this->HomePanel->Controls->Add(this->button5);
			this->HomePanel->Controls->Add(this->button4);
			this->HomePanel->Controls->Add(this->button3);
			this->HomePanel->Controls->Add(this->SSButton);
			this->HomePanel->Controls->Add(this->button6);
			this->HomePanel->Location = System::Drawing::Point(12, 89);
			this->HomePanel->Name = L"HomePanel";
			this->HomePanel->Size = System::Drawing::Size(574, 257);
			this->HomePanel->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkOrange;
			this->button5->Location = System::Drawing::Point(14, 130);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 92);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Virus Vault";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkOrange;
			this->button4->Location = System::Drawing::Point(378, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(176, 92);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Fix ShortCut";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkOrange;
			this->button3->Location = System::Drawing::Point(196, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(176, 92);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Deep Scan";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// SSButton
			// 
			this->SSButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SSButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SSButton->ForeColor = System::Drawing::Color::DarkOrange;
			this->SSButton->Location = System::Drawing::Point(14, 32);
			this->SSButton->Name = L"SSButton";
			this->SSButton->Size = System::Drawing::Size(176, 92);
			this->SSButton->TabIndex = 0;
			this->SSButton->Text = L"Quick Scan";
			this->SSButton->UseVisualStyleBackColor = true;
			this->SSButton->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DarkOrange;
			this->button6->Location = System::Drawing::Point(196, 130);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(176, 92);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Update Database";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// QPanel
			// 
			this->QPanel->AutoScroll = true;
			this->QPanel->Controls->Add(this->richTextBox2);
			this->QPanel->Controls->Add(this->button11);
			this->QPanel->Location = System::Drawing::Point(15, 83);
			this->QPanel->Name = L"QPanel";
			this->QPanel->Size = System::Drawing::Size(574, 260);
			this->QPanel->TabIndex = 6;
			this->QPanel->Visible = false;
			this->QPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::QPanel_Paint);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(14, 53);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(540, 189);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(14, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(540, 23);
			this->button11->TabIndex = 0;
			this->button11->Text = L"Delete The Files";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// SSPanel
			// 
			this->SSPanel->Controls->Add(this->button8);
			this->SSPanel->Controls->Add(this->button7);
			this->SSPanel->Controls->Add(this->TBDir);
			this->SSPanel->Location = System::Drawing::Point(18, 80);
			this->SSPanel->Name = L"SSPanel";
			this->SSPanel->Size = System::Drawing::Size(574, 266);
			this->SSPanel->TabIndex = 5;
			this->SSPanel->Visible = false;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::DarkOrange;
			this->button8->Location = System::Drawing::Point(188, 150);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(196, 70);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Start Scan";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::DarkOrange;
			this->button7->Location = System::Drawing::Point(188, 35);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(196, 68);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Browse Directory To Scan";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// TBDir
			// 
			this->TBDir->BackColor = System::Drawing::Color::White;
			this->TBDir->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->TBDir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TBDir->Location = System::Drawing::Point(14, 116);
			this->TBDir->Name = L"TBDir";
			this->TBDir->Size = System::Drawing::Size(546, 22);
			this->TBDir->TabIndex = 2;
			// 
			// StatusPanel1
			// 
			this->StatusPanel1->Controls->Add(this->label2);
			this->StatusPanel1->Controls->Add(this->label1);
			this->StatusPanel1->Controls->Add(this->button2);
			this->StatusPanel1->Controls->Add(this->richTextBox1);
			this->StatusPanel1->Controls->Add(this->progressBar1);
			this->StatusPanel1->Location = System::Drawing::Point(12, 86);
			this->StatusPanel1->Name = L"StatusPanel1";
			this->StatusPanel1->Size = System::Drawing::Size(580, 266);
			this->StatusPanel1->TabIndex = 3;
			this->StatusPanel1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Coral;
			this->label2->Location = System::Drawing::Point(521, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Coral;
			this->label1->Location = System::Drawing::Point(364, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Number Of Virus Found :";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkOrange;
			this->button2->Location = System::Drawing::Point(25, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 29);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Scan Status";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Info;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->HideSelection = false;
			this->richTextBox1->Location = System::Drawing::Point(25, 68);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(546, 173);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::White;
			this->progressBar1->Location = System::Drawing::Point(25, 39);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(546, 23);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Wide Latin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->button9->Location = System::Drawing::Point(455, 5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(53, 31);
			this->button9->TabIndex = 2;
			this->button9->Text = L"-";
			this->button9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(530, 5);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(53, 31);
			this->button10->TabIndex = 3;
			this->button10->Text = L"X";
			this->button10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)), 
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ClientSize = System::Drawing::Size(609, 371);
			this->Controls->Add(this->StatusPanel1);
			this->Controls->Add(this->SSPanel);
			this->Controls->Add(this->QPanel);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->HomePanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ANTIvirus";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->HomePanel->ResumeLayout(false);
			this->QPanel->ResumeLayout(false);
			this->SSPanel->ResumeLayout(false);
			this->SSPanel->PerformLayout();
			this->StatusPanel1->ResumeLayout(false);
			this->StatusPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 //HomePanel
			 //SSPanel
			 QPanel->Visible = FALSE;
			 //StatusPanel1
		 }

public: System::Void tc(String^ str)
			{
			 richTextBox1->AppendText(str);
			}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 SSPanel->Visible= TRUE ;
			 HomePanel->Visible = FALSE ;
			 FLAG = 1 ;
		 }

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(FLAG==5) 
			 { 
				if(openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
				{ 
					TBDir->Text=openFileDialog1->FileName;
				}
			 }
			 else if(FLAG==3)
			 {
				System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
				 if ( result == Windows::Forms::DialogResult::OK )
					 TBDir->Text = folderBrowserDialog1->SelectedPath;
			 }
			 else
			 {
			 System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
			 if ( result == Windows::Forms::DialogResult::OK )
			  {
				char comm[300];
				String^ systemdirpath;
				
				TBDir->Text = folderBrowserDialog1->SelectedPath;
				systemdirpath = TBDir->Text;
				
				msclr::interop::marshal_context oMC;
				const char* dirpath = oMC.marshal_as<const char*>(systemdirpath);
				
				strcpy(comm,"dir ");
				strcat(comm,dirpath);
				strcat(comm," /b /s >tmp");
				system(comm);
				//ShellExecute(0,"open","cmd.exe","system(dir c:\)", 0, SW_SHOW);
				//String^ s_comm = msclr::interop::marshal_as<String^>(comm);
			  }
			 }
		 }

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(FLAG==1)
			 {
			 StatusPanel1 -> Visible = TRUE;
			 SSPanel->Visible=FALSE;
			 QS();
			 }
			 else if (FLAG==2)
			 {
			 StatusPanel1 -> Visible = TRUE;
			 SSPanel->Visible=FALSE;
			 DS();
			 }
			 else if(FLAG == 3)
			 {
				if(TBDir->Text->Length > 3)
				{
					MessageBox::Show(" Please Enter a Valid Drive ", " Error in Drive Letter ");
				}
				else if (TBDir->Text->Length == 3)
				{
					msclr::interop::marshal_context oMC;
					const char* drive = oMC.marshal_as<const char*>(TBDir->Text);
					StatusPanel1 -> Visible = TRUE;
					SSPanel->Visible=FALSE;
					ShellExecute(0,"open","PDScan.bat",drive, 0, SW_SHOW);
					//FlashScan(drive);
				}
			 }
			 else if (FLAG==5)
			 {
			  int u = update();
			  if(u==1)	
			  {
			  MessageBox::Show("  Signature Generated  ","Message", MessageBoxButtons::OK);
			  }
			  else
			  {	 
			  MessageBox::Show(" Cannot Access File ..!\n Retry Again Later..? ","",MessageBoxButtons::OK ); // DialogResult	
			  }
			 }
	}

void QS() {
			 label2->Text = vcount.ToString();
			 int response=0;
			 char ch;
			 
			 temp.open("tmp",ios::in);
				
			 tc("\n Scanning Started...");

			 while(temp.eof()==0)
					{ 
						temp.get(ch);
					    if(ch == '\n')
						totalfiles++;
					}
				
				temp.close();
				temp.open("tmp",ios::in);
				totalfiles=100/totalfiles;
			 
			while(temp.eof()==0)
				{
					this->progressBar1->Increment(totalfiles);
					
					temp.getline(file_name,200);					//
					if(strlen(file_name)>2)
					{
						String^ s_fname = msclr::interop::marshal_as<String^>(file_name);//
						tc("\n Scanning : " + s_fname);
						response = scan_exe(file_name);
					}
					/* Deleting the file */
					if(response == 1)
					{	
						 vcount++ ;
						 tc("\n A Virus Has been detected ");
						 //Moving File To Quarantine
						 //system("path C:\\Windows\\System32");
						 strcpy_s(setpath,"move /y \"");
						 strcat_s(setpath,file_name);
						 strcat_s(setpath,"\" quarantine\\ ");
						 //strcat_s(setpath,">NULL");
						 system(setpath);
						 tc("\n The File has been moved to quarantine ");
						 label2->Text = vcount.ToString();
					}
					response=0;
				}
		temp.close();
		this->progressBar1->Increment(10);
		tc("\n Scanning Complete ");
		}

int scan_exe(const char* file_name)
{
	fstream filedb,filev;
	filedb.open("db.txt",ios::in|ios::binary);
	//filev.open(file_name,ios::in|ios::binary);
	char f;
	while(!filedb.eof())
	{
	  char vsign[80];										//filedb.getline((char *)vsign,10);
	  filedb.getline(vsign,80,13);
	  filedb.get(f);
	  
	  int vslen=strlen(vsign);
	  
	  if(strlen(vsign)<=0) return 0;						//No Signature found to scan
	  
	  String^ s_vsign = msclr::interop::marshal_as<String^>(vsign);
	  tc("\n Scanning for "+s_vsign);

	  filev.open(file_name,ios::in|ios::binary);
	  
	  char line[80];										//unsigned char* line;
	  char c; 

	  streampos end;
	  filev.seekg(0,ios::end);
	  end = filev.tellg();
	  //tc("\nSize of file is : "+end);		Unable To Print..!!
	  
	  if(end<0) return 0;									//if(end==-1)
	  
	  filev.seekg(0,ios::beg);
	  
	  for(unsigned long i=0;i<end;i++)
	  { //cout<<"\nComparing Started\n";
	   {//Exception case for More than 1 occurences of LINE FEED.
		 filev.get(c);
		 if(c==10)
		 {
		  do {i++;filev.get(c);if(filev.eof()!=0) break;} while(c==10);
		  i--;
		 }
		 filev.seekg(-1,ios::cur);							//To recompensate file.get(c) statement in while loop.
	   }
	   
	   filev.get(line,2);									//line stores (Length-1) characters int it.. At[0]= 1st byte At[1]= NULL ByDefault.
		
	   if(line[0]==0) continue;
	   else	filev.seekg(-1,ios::cur);

	   filev.get(line,vslen+1); 							//define the length of signature to scan in place of 10;

	   filev.get(c);

	   if(c==10);
	   else filev.seekg(-vslen,ios::cur);					//set the number to length of sinature -1;
	   
	   if(!strcmp(vsign,line))								//Comparing The Virus Signature
	   {
		tc("\n Signature Matched ");
		filev.close();
		//filedb.close();
		return 1;
	   }
	  }      												//Closing the Normal File.
	  filev.close();
	}	//Closing the DataBase File.
	//filev.close();
	filedb.close();
	return 0;
}

void DS()
{
		marshal_context^ context= gcnew marshal_context();
		label2->Text = vcount.ToString();
		//int d;
		String^ d;
		const char* fh;
		char vh[35],ch;
		
		temp.open("tmp",ios::in);
		tc("\n Scanning Started...");

			 while(temp.eof()==0)
					{ 
						temp.get(ch);
					    if(ch == '\n')
						totalfiles++;
					}
				
				temp.close();
				temp.open("tmp",ios::in);
				totalfiles=100/totalfiles;

		while(temp.eof()==0)
		{
			this->progressBar1->Increment(totalfiles);
			temp.getline(file_name,200);
			if (strlen(file_name)>1)
			{
				fcheck.open(file_name,ios::in);
				if(fcheck.good())
				{	
					fcheck.close();
					String^ s_fname = msclr::interop::marshal_as<String^>(file_name);//
					tc("\n Scanning : " + s_fname);
					
					d= MD5Hash(file_name);
					fh= context->marshal_as<const char*>(d);
				
					hdb.open("hashes.txt",ios::in);
					while(hdb.eof()==0)
					 {
						hdb.getline(vh,33);
						if (strlen(vh)>1)
						{
						 //tc("\n Scanning for Signature : " + vh);
						 int m = strcmp(vh,fh);
						 if(m==0) 
							{ 
								tc("\n A Virus has been Detected..!");
								vcount++;
								//system("path C:\\Windows\\System32");
								strcpy_s(setpath,"move /y \"");
								strcat_s(setpath,file_name);
								strcat_s(setpath,"\" quarantine\\ ");
								strcat_s(setpath," > NUL");
								system(setpath);
								label2->Text = vcount.ToString();
								tc(" It has been moved to quarantine ");
							}
						 else
							{
								tc("\n The file is safe ");
							}
						}
					 }
				}
			hdb.close();
		    }
			else
				tc("\n No File Found ");
		}
		this->progressBar1->Increment(10);
		tc("\n Scanning Complete ");
		temp.close();
}

String^ MD5Hash(LPCSTR filename)
{
    DWORD dwStatus = 0;
    BOOL bResult = FALSE;
    HCRYPTPROV hProv = 0;
    HCRYPTHASH hHash = 0;
    HANDLE hFile = NULL;
    BYTE rgbFile[BUFSIZE];
    DWORD cbRead = 0;
    BYTE rgbHash[MD5LEN];
    DWORD cbHash = 0;
    CHAR rgbDigits[] = "0123456789abcdef";
    //LPCWSTR filename="C:\\a.txt";
    DWORD i ;
	// Logic to check usage goes here.
	int j =0;
	
	hFile = CreateFile(filename,
        GENERIC_READ,
        FILE_SHARE_READ,
        NULL,
        OPEN_EXISTING,
        FILE_FLAG_SEQUENTIAL_SCAN,
        NULL);

    if (INVALID_HANDLE_VALUE == hFile)
    {
        dwStatus = GetLastError();
        //printf("\nError opening file %s\nError: %d\n", filename,dwStatus); 
		//tc("\n Error opening file %s\nError: %d\n "+filename+dwStatus);
//        return dwStatus;
    }
    // Get handle to the crypto provider
    if (!CryptAcquireContext(&hProv,
        NULL,
        NULL,
        PROV_RSA_FULL,
        CRYPT_VERIFYCONTEXT))
    {
        dwStatus = GetLastError();
        //printf("\nCryptAcquireContext failed: %d\n", dwStatus); 
		tc("\n CryptAcquireContext failed: %d \n"+dwStatus);
        CloseHandle(hFile);
//        return dwStatus;
    }
    if (!CryptCreateHash(hProv, CALG_MD5, 0, 0, &hHash))
    {
        dwStatus = GetLastError();
        //printf("\nCryptAcquireContext failed: %d\n", dwStatus); 
		tc("\nCryptAcquireContext failed: %d\n"+dwStatus);
        CloseHandle(hFile);
        CryptReleaseContext(hProv, 0);
//        return dwStatus;
    }
    while (bResult = ReadFile(hFile, rgbFile, BUFSIZE, 
        &cbRead, NULL))
    {
        if (0 == cbRead)
        {
            break;
        }

        if (!CryptHashData(hHash, rgbFile, cbRead, 0))
        {
            dwStatus = GetLastError();
            //printf("\nCryptHashData failed: %d\n", dwStatus); 
			tc("\nCryptHashData failed: %d\n"+dwStatus);
            CryptReleaseContext(hProv, 0);
            CryptDestroyHash(hHash);
            CloseHandle(hFile);
//            return dwStatus;
        }
    }

    if (!bResult)
    {
        dwStatus = GetLastError();
        //printf("\nReadFile failed: %d\n", dwStatus); 
		tc("\nReadFile failed: %d\n" + dwStatus);
        CryptReleaseContext(hProv, 0);
        CryptDestroyHash(hHash);
        CloseHandle(hFile);
//        return dwStatus;
    }
    cbHash = MD5LEN;
    if (CryptGetHashParam(hHash, HP_HASHVAL, rgbHash, &cbHash, 0))
    {
        printf("MD5 hash of file %s is: ", filename);
        for ( i = 0; i < cbHash; i++)
        {
            //printf("%c%c", rgbDigits[rgbHash[i] >> 4],rgbDigits[rgbHash[i] & 0xf]);
			ret[j]=rgbDigits[rgbHash[i] >> 4];
			//printf("%c",ret[j]);
			ret[++j]=rgbDigits[rgbHash[i] & 0xf];
			//printf("%c",ret[j]);
			j++;
		}
		ret[j]='\0';
		//printf("\n");		for(j=0;j<32;j++)	printf("%c",ret[j]);
		//_getch();
        //printf("\n");	
    }
    else
    {
        dwStatus = GetLastError();
        //printf("\nCryptGetHashParam failed: %d\n", dwStatus); 
		tc("\nCryptGetHashParam failed: %d\n"+dwStatus);
    }
    CryptDestroyHash(hHash);
    CryptReleaseContext(hProv, 0);
    CloseHandle(hFile);
	String^ s_ret= msclr::interop::marshal_as<String^>(ret);
	return s_ret;
}

int update()
{
	const char* hash;
	marshal_context^ context= gcnew marshal_context();
	String^ systemdirpath;
	//TBDir -> Text = ;				To Be Coded
	systemdirpath = TBDir->Text;
	msclr::interop::marshal_context oMC;
	const char* dirpath = oMC.marshal_as<const char*>(systemdirpath);
	String^ d= MD5Hash(dirpath);
	hash = context->marshal_as<const char*>(d);

	//h = MD5Hash(dirpath);
	//hash=(char*)h;
		if(strlen(hash) > 30)		//TO Be Edited...
		{
		hashdb.open("hashes.txt",ios::app);
		hashdb.write(hash,strlen(hash));
		hashdb.put('\n');
		hashdb.close();
		return 1;
		}
		else return 0;
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 FLAG=2;
			 SSPanel->Visible= TRUE ;
			 HomePanel->Visible = FALSE ;
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->WindowState = FormWindowState::Minimized;		 
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 FLAG = 5;
			 SSPanel->Visible = TRUE;
			 HomePanel->Visible = FALSE;
			 button7->Text = "Browse Malware Program File";
			 button8->Text = "Generate Signature";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 FLAG=4;
			 QPanel->Visible = TRUE ;
			 HomePanel->Visible = FALSE ;
			 system("dir quarantine /b /s > list");
			 
			 temp.open("list",ios::in);
			 int qn = 1;int l=40;
			 while(temp.eof()==0)
			 {
			  temp.getline(file_name,200);					//
			  if(strlen(file_name)>2)
			   {
				String^ s_fname = msclr::interop::marshal_as<String^>(file_name);
				
				richTextBox2->AppendText(s_fname);
				richTextBox2->AppendText("\n");
				/*
				System::Windows::Forms::Button^ btn = gcnew System::Windows::Forms::Button();
				btn->Name = "b" + qn.ToString();
				//btn->Size = System::Drawing::Size(1000,20);
				btn->Text = "Delete";
				this->QPanel->Controls->Add(btn);
				btn->Location = System::Drawing::Point(14,l);

				System::Windows::Forms::Label^ lbl= gcnew System::Windows::Forms::Label();
				lbl->Name = "l" + qn.ToString();
				lbl->Size = System::Drawing::Size(1000,20);
				lbl->Text = s_fname;
				this->QPanel->Controls->Add(lbl);
				lbl->Location = System::Drawing::Point(14+100,l+5);
				l = l+20;
				*/
			   }
			 }
			 temp.close();
		 }
private: System::Void QPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 FLAG = 3;
			 SSPanel->Visible = TRUE;
			 HomePanel->Visible = FALSE ;
			 button7->Text = "Browse External Storage Drive";
			 //button8->Text = "Generate Signature";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 HomePanel->Visible = TRUE ;
			 SSPanel->Visible = FALSE ;
			 QPanel->Visible = FALSE;
			 StatusPanel1->Visible = FALSE ;
			 progressBar1->Value = 0 ;
			 TBDir->Text = "" ;
			 richTextBox1->Text = "" ;
			 richTextBox2->Text = "" ;
			 FLAG = 0;
			 vcount=0;
			 totalfiles=0;
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Are You Sure You Want To delete the files..? ","",MessageBoxButtons::YesNo)==System::Windows::Forms::DialogResult::Yes)
			 {
				 system("del /q quarantine\\*.* ");
				 MessageBox::Show("Files Deleted Successfully","",MessageBoxButtons::OK);
				 richTextBox2->Text = "";
			 }
		 }
};
}