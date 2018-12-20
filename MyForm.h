#pragma once
#include <cmath>

namespace NumMetLaba04 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			GraphPane^ pane1 = zedGraphControl1->GraphPane;
			pane1->XAxis->Title->Text = "Ось x";
			pane1->YAxis->Title->Text = "Ось u,v";
			pane1->Title->Text = "график точного и численного решения";

			GraphPane^ pane2 = zedGraphControl2->GraphPane;
			pane2->XAxis->Title->Text = "Ось x";
			pane2->YAxis->Title->Text = "Ось u,v";
			pane2->Title->Text = "график точного и численного решения";

			GraphPane^ pane3 = zedGraphControl3->GraphPane;
			pane3->XAxis->Title->Text = "Ось x";
			pane3->YAxis->Title->Text = "Ось v, v2";
			pane3->Title->Text = "график численного и более точного численного решения";

			GraphPane^ pane4 = zedGraphControl4->GraphPane;
			pane4->XAxis->Title->Text = "Ось x";
			pane4->YAxis->Title->Text = "погрешность";
			pane4->Title->Text = "погрешность от Х";

			GraphPane^ pane5 = zedGraphControl5->GraphPane;
			pane5->XAxis->Title->Text = "Ось x";
			pane5->YAxis->Title->Text = "погрешность";
			pane5->Title->Text = "погрешность от Х";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	protected:
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1_n;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2_n;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3_n;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView3;





	private: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: ZedGraph::ZedGraphControl^  zedGraphControl4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: ZedGraph::ZedGraphControl^  zedGraphControl5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1_n = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2_n = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3_n = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(7, 7);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(457, 653);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1347, 696);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1_n);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1339, 667);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Test 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1063, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"MAX_GP";
			// 
			// textBox1_n
			// 
			this->textBox1_n->Location = System::Drawing::Point(1143, 342);
			this->textBox1_n->Name = L"textBox1_n";
			this->textBox1_n->Size = System::Drawing::Size(80, 22);
			this->textBox1_n->TabIndex = 4;
			this->textBox1_n->Text = L"6";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1104, 342);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"n = ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1111, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 81);
			this->button1->TabIndex = 2;
			this->button1->Text = L"plot";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(471, 7);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(585, 654);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"j";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 40;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Xi";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 60;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ui";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 140;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Vi";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 140;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"|Ui - Vi|";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 140;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->zedGraphControl4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->textBox2_n);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1339, 667);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Test 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1092, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"x";
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(28, 325);
			this->zedGraphControl4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(395, 317);
			this->zedGraphControl4->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1083, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"MAX_GP";
			// 
			// textBox2_n
			// 
			this->textBox2_n->Location = System::Drawing::Point(1151, 182);
			this->textBox2_n->Name = L"textBox2_n";
			this->textBox2_n->Size = System::Drawing::Size(83, 22);
			this->textBox2_n->TabIndex = 10;
			this->textBox2_n->Text = L"6";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1112, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"n = ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1132, 432);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 81);
			this->button2->TabIndex = 8;
			this->button2->Text = L"plot";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column6,
					this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView2->Location = System::Drawing::Point(430, 14);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(647, 628);
			this->dataGridView2->TabIndex = 7;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"j";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 40;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Xi";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 60;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Ui";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 140;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Vi";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 140;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"|Ui - Vi|";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 140;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(28, 14);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(395, 317);
			this->zedGraphControl2->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1083, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(187, 51);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Максимальное отклонение\r\n\r\n достигается в точке:";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->zedGraphControl5);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->textBox3_n);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->zedGraphControl3);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1339, 667);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Main task";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1075, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 17);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Xk = ";
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->Location = System::Drawing::Point(7, 349);
			this->zedGraphControl5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(395, 311);
			this->zedGraphControl5->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1072, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"MAX_LP";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox3_n
			// 
			this->textBox3_n->Location = System::Drawing::Point(1151, 182);
			this->textBox3_n->Name = L"textBox3_n";
			this->textBox3_n->Size = System::Drawing::Size(86, 22);
			this->textBox3_n->TabIndex = 10;
			this->textBox3_n->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1112, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"n = ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1132, 432);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(124, 81);
			this->button3->TabIndex = 8;
			this->button3->Text = L"plot";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column11,
					this->Column12, this->Column13, this->Column14, this->Column15
			});
			this->dataGridView3->Location = System::Drawing::Point(409, 14);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(647, 646);
			this->dataGridView3->TabIndex = 7;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"j";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 40;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Xi";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 60;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Vi";
			this->Column13->Name = L"Column13";
			this->Column13->Width = 140;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"V2i";
			this->Column14->Name = L"Column14";
			this->Column14->Width = 140;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"|V2i - Vi|";
			this->Column15->Name = L"Column15";
			this->Column15->Width = 140;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(7, 14);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(395, 327);
			this->zedGraphControl3->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1072, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(248, 102);
			this->label9->TabIndex = 13;
			this->label9->Text = L"При пересчете значений\r\n с половинным шагом\r\n максимальная разность\r\n приближенны"
				L"х решений составила:\r\n\r\nи соответствует узлу:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1365, 717);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		double func_a(double x, double ksi, double h) // k , test 2
		{
			if (x <= ksi)
				return ksi + 1.0;
			else if (x - h >= ksi)
				return 1.0;
			else
				return h / ((ksi - (x - h)) / (ksi + 1.0) + (x - ksi));
		}

		double func_d(double x, double ksi, double h) // q, test 2
		{
			if (x + h / 2.0 <= ksi)
				return ksi * ksi + 1.0;
			else if (x - h / 2.0 >= ksi)
				return 2.0 * ksi;
			else
				return ((ksi - (x - h / 2.0)) * (ksi * ksi + 1.0) + (x + h / 2.0 - ksi) * (2.0 * ksi)) / h;
		}

		double func_f(double x, double ksi, double h) // f, test 2
		{
			if (x + h / 2.0 <= ksi)
				return 1.0;
			else if (x - h / 2.0 >= ksi)
				return ksi * ksi - 1.0;
			else
				return ((ksi - (x - h / 2)) + (x + h / 2 - ksi)*(ksi*ksi - 1.0)) / h;
		}

		double func_a_mt(double x, double ksi, double h) // k , main task
		{
			if (x <= ksi)
				return x - h/2 + 1.0;
			else if (x - h >= ksi)
				return 1.0;
			else
				return h / ((ksi - (x - h)) / ((x - h + ksi)/2 + 1.0) + (x - ksi));
		}

		double func_d_mt(double x, double ksi, double h) // q, main task
		{
			if (x + h / 2.0 <= ksi)
				return x*x + 1.0;
			else if (x - h / 2.0 >= ksi)
				return 2.0 * x;
			else
				return ((ksi - (x - h / 2.0)) * ((x+h/2-ksi) * (x+h/2-ksi)/4 + 1.0) + (x + h / 2.0 - ksi) * (2.0 * (x + h / 2 + ksi)/2)) / h;
		}

		double func_f_mt(double x, double ksi, double h) // f, main task
		{
			if (x + h / 2.0 <= ksi)
				return 1.0;
			else if (x - h / 2.0 >= ksi)
				return x*x - 1.0;
			else
				return ((ksi - (x - h / 2)) + (x + h / 2 - ksi)*(((x + h / 2 + ksi) / 2)*((x + h / 2 + ksi) / 2) - 1.0)) / h;
		}

		double myabs(double a)
		{
			if (a > 0) return a;
			else  return -a;
		}

		double CalcPsi_test1(double x)
		{
			return (6.0 * x * x - 10.0 * x - 22);
		}


		double* running_method(double *D_1, double *D_2, double *D_3, double *B, int n, double M1, double M2)
		{
			double *V = new double[n + 1];
			double *alfa = new double[n + 1];
			double *beta = new double[n + 1];
			alfa[1] = 0;
			beta[1] = M1;
			V[0] = M1;
			V[n] = M2;

			for (int i = 2; i < n + 1; i++)
			{
				alfa[i] = -D_3[i - 1] / (D_2[i - 1] + alfa[i - 1] * D_1[i - 1]);
				beta[i] = (B[i - 1] - beta[i - 1] * D_1[i - 1]) / (D_2[i - 1] + alfa[i - 1] * D_1[i - 1]);
			}

			for (int i = n - 1; i > 0; i--)
			{
				V[i] = alfa[i + 1] * V[i + 1] + beta[i + 1];
			}
			return V;
		}

		double U_test1(double x) // accurate decision for test 1
		{
			return (-3.0*x*x + 5.0*x - 1.0);
		}

		double U_test2(double x, double ksi) // accurate decision for test 2
		{
			double c1 = 0.29603284941522756135,
				c2 = -0.19603284941522744478,
				c3 = 1.2583238549506143844,
				c4 = 1.1002849690422937812,
				res = 0;

			if (x <= ksi)
				res = c1 * exp(x * sqrt((ksi*ksi + 1) / (ksi + 1))) +
				c2 * exp(-x * sqrt((ksi*ksi + 1) / (ksi + 1))) +
				1 / (ksi*ksi + 1);
			else
				res = c3 * exp(x * sqrt(2 * ksi)) +
				c4 * exp(-x * sqrt(2 * ksi)) +
				(ksi*ksi - 1) / (2 * ksi);

			return res;
		}


	//////////////////////////////////////////// TEST TASK 1 /////////////////////////////////////////////
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			dataGridView1->Rows->Clear();

			GraphPane^ panel1 = zedGraphControl1->GraphPane;
			panel1->CurveList->Clear();
			PointPairList^ point_list_numeric = gcnew ZedGraph::PointPairList();
			PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
			

			int n = Convert::ToInt32(textBox1_n->Text);
			double K = 4,
				Q = 2,
				h = 1.0 / static_cast<double>(n),
				M1 = -1,
				M2 = 1,
				x_curr = 0,
				x_next = x_curr + h,
				GP = 0,
				MAX_GP = 0;

			double *D_1 = nullptr;
			double *D_2 = nullptr;
			double *D_3 = nullptr;
			double *B = nullptr;
			double *V = nullptr;

			D_1 = new double[n + 1];
			D_2 = new double[n + 1];
			D_3 = new double[n + 1];
			B = new double[n + 1];

			D_1[0] = D_1[n] = 0;
			D_2[0] = D_2[n] = 1;
			D_3[0] = D_3[n] = 0;
			B[0] = M1;
			B[n] = M2;

			x_curr = h;

			for (int i = 1; i < n; i++)
			{
				D_1[i] = K / (h*h);
				D_2[i] = -((2 * K) / (h*h) + Q);
				D_3[i] = K / (h*h);
				B[i] = CalcPsi_test1(x_curr);
				x_curr += h;
			}

			V = running_method(D_1, D_2, D_3, B, n, M1, M2);

			point_list_accurate->Add(0, M1);
			point_list_numeric->Add(0, M1);

			x_curr = h;

			for (int i = 0; i < n + 1; i++)
			{

				x_curr = i * h;

				GP = U_test1(x_curr) - V[i];
				if (fabs(GP) > MAX_GP) MAX_GP = GP;

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x_curr;
				dataGridView1->Rows[i]->Cells[2]->Value = U_test1(x_curr);
				dataGridView1->Rows[i]->Cells[3]->Value = V[i];
				dataGridView1->Rows[i]->Cells[4]->Value = U_test1(x_curr) - V[i];

				point_list_accurate->Add(x_curr, U_test1(x_curr));
				point_list_numeric->Add(x_curr, V[i]);
			}
			point_list_accurate->Add(1, M2);
			point_list_numeric->Add(1, M2);

			LineItem^ Curve1 = panel1->AddCurve("numeric trajectory", point_list_numeric, Color::Red, SymbolType::VDash);
			LineItem^ Curve2 = panel1->AddCurve("accurate trajectory", point_list_accurate, Color::Black, SymbolType::XCross);

			label2->Text = "Max GP = " + Convert::ToString(MAX_GP);

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();


		} // end button 1 click

	//////////////////////////////////////////////// TEST TASK 2 //////////////////////////////////////////
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			dataGridView2->Rows->Clear();

			GraphPane^ panel1 = zedGraphControl2->GraphPane;
			panel1->CurveList->Clear();
			GraphPane^ panel2 = zedGraphControl4->GraphPane;
			panel2->CurveList->Clear();
			PointPairList^ point_list_numeric = gcnew ZedGraph::PointPairList();
			PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
			PointPairList^ point_list_GP = gcnew ZedGraph::PointPairList();

			int n = Convert::ToInt32(textBox2_n->Text);

			double h = 1.0 / static_cast<double>(n),
				M1 = 1,
				M2 = 2,
				x_curr = 0,
				x_next = 0,
				GP = 0,
				ksi = 1.0 / 3.0,
				MAX_GP = -1,
				X_max_GP = 0;

			double *D_1 = nullptr; // lower diagonal
			double *D_2 = nullptr; // middle diagonal
			double *D_3 = nullptr; // upper diagonal
			double *B = nullptr; // free members
			double *V = nullptr; // unknowns members

			D_1 = new double[n + 1];
			D_2 = new double[n + 1];
			D_3 = new double[n + 1];
			B = new double[n + 1];

			// auxiliary values three diagonal:
			D_1[0] = D_1[n] = 0;
			D_2[0] = D_2[n] = 1;
			D_3[0] = D_3[n] = 0;

			// auxiliary values  vector of free members:
			B[0] = M1;
			B[n] = M2;

			// filling coefs
			for (int i = 1; i < n; i++)
			{
				x_curr = i * h;
				x_next = (i + 1) * h;
				D_1[i] = func_a(x_curr, ksi, h) / (h*h);
				D_2[i] = -(func_a(x_next, ksi, h) / (h*h) +
					func_a(x_curr, ksi, h) / (h*h) + func_d(x_curr, ksi, h));
				D_3[i] = func_a(x_next, ksi, h) / (h*h);
				B[i] = -func_f(x_curr, ksi, h);
			}


			V = running_method(D_1, D_2, D_3, B, n, M1, M2);


			point_list_accurate->Add(0, M1);
			point_list_numeric->Add(0, M1);

			x_curr = h;

			for (int i = 0; i < n + 1; i++)
			{

				x_curr = i * h;

				GP = fabs(U_test2(x_curr, ksi) - V[i]);
				if (GP > MAX_GP) {
					MAX_GP = GP;
					X_max_GP = x_curr;
				}
				point_list_GP->Add(x_curr, GP);

				dataGridView2->Rows->Add();
				dataGridView2->Rows[i]->Cells[0]->Value = i;
				dataGridView2->Rows[i]->Cells[1]->Value = x_curr;
				dataGridView2->Rows[i]->Cells[2]->Value = U_test2(x_curr, ksi);
				dataGridView2->Rows[i]->Cells[3]->Value = V[i];
				dataGridView2->Rows[i]->Cells[4]->Value = GP;

				point_list_accurate->Add(x_curr, U_test2(x_curr, ksi));
				point_list_numeric->Add(x_curr, V[i]);
			}
			point_list_accurate->Add(1, M2);
			point_list_numeric->Add(1, M2);

			LineItem^ Curve1 = panel1->AddCurve("numeric trajectory", point_list_numeric, Color::Red, SymbolType::VDash);
			LineItem^ Curve2 = panel1->AddCurve("accurate trajectory", point_list_accurate, Color::Black, SymbolType::XCross);
			LineItem^ Curve3 = panel2->AddCurve("Global error", point_list_GP, Color::Black, SymbolType::XCross);

			label3->Text = "Max GP = " + Convert::ToString(MAX_GP);
			label8->Text = "Xk = " + Convert::ToString(X_max_GP);

			zedGraphControl2->AxisChange();
			zedGraphControl2->Invalidate();

			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();


		} // end button 2 click




	////////////////////////////////////////// MAIN TASK ////////////////////////////////////////////////////////
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


		dataGridView3->Rows->Clear();

		GraphPane^ panel1 = zedGraphControl3->GraphPane;
		panel1->CurveList->Clear();

		GraphPane^ panel2 = zedGraphControl5->GraphPane;
		panel2->CurveList->Clear();

		PointPairList^ point_list_numeric = gcnew ZedGraph::PointPairList();
		PointPairList^ point_list_num_double_accur = gcnew ZedGraph::PointPairList();
		PointPairList^ point_list_LP = gcnew ZedGraph::PointPairList();

		int n = Convert::ToInt32(textBox3_n->Text);

		double h = 1.0 / static_cast<double>(n),
			M1 = 1,
			M2 = 2,
			x_curr = 0,
			x_next = 0,
			LP = 0,
			ksi = 1.0 / 3.0,
			MAX_LP = -1,
			X_max_LP = 0;

		double *D_1 = nullptr; // lower diagonal
		double *D_2 = nullptr; // middle diagonal
		double *D_3 = nullptr; // upper diagonal
		double *B = nullptr;  // free members
		double *V_num = nullptr; // unknowns members
		double *V_double_num = nullptr;

		D_1 = new double[2*n + 1];
		D_2 = new double[2*n + 1];
		D_3 = new double[2*n + 1];
		B = new double[2*n + 1];

		// auxiliary values three diagonal:
		D_1[0] = D_1[n] = 0;
		D_2[0] = D_2[n] = 1;
		D_3[0] = D_3[n] = 0;

		// auxiliary values  vector of free members:
		B[0] = M1;
		B[n] = M2;

		// filling coeffs 1
		for (int i = 1; i < n; i++)
		{
			x_curr = i * h;
			x_next = (i + 1) * h;
			D_1[i] = func_a_mt(x_curr, ksi, h) / (h*h);
			D_2[i] = -(func_a_mt(x_next, ksi, h) / (h*h) +
				func_a_mt(x_curr, ksi, h) / (h*h) + func_d_mt(x_curr, ksi, h));
			D_3[i] = func_a_mt(x_next, ksi, h) / (h*h);
			B[i] = -func_f_mt(x_curr, ksi, h);
		}

		V_num = running_method(D_1, D_2, D_3, B, n, M1, M2);

		// make the grid smaller
		int n_new = 2*n;
		double h_new = 1.0 / static_cast<double>(n_new);

		// auxiliary values three diagonal:
		D_1[0] = D_1[n_new] = 0;
		D_2[0] = D_2[n_new] = 1;
		D_3[0] = D_3[n_new] = 0;

		// auxiliary values  vector of free members:
		B[0] = M1;
		B[n_new] = M2;

		// filling coeffs 2
		for (int i = 1; i < n_new; i++)
		{
			x_curr = i * h_new;
			x_next = (i + 1) * h_new;
			D_1[i] = func_a_mt(x_curr, ksi, h_new) / (h_new*h_new);
			D_2[i] = -(func_a_mt(x_next, ksi, h_new) / (h_new*h_new) +
				func_a_mt(x_curr, ksi, h_new) / (h_new*h_new) + func_d_mt(x_curr, ksi, h_new));
			D_3[i] = func_a_mt(x_next, ksi, h_new) / (h_new*h_new);
			B[i] = -func_f_mt(x_curr, ksi, h_new);
		}

		V_double_num = running_method(D_1, D_2, D_3, B, n_new, M1, M2);

		point_list_num_double_accur->Add(0, M1);
		point_list_numeric->Add(0, M1);

		x_curr = h;
		int j = 0;

		for (int i = 0; i < n + 1; i++)
		{

			x_curr = i * h;

			LP = fabs(V_double_num[j] - V_num[i]);
			if (LP > MAX_LP) {
				MAX_LP = LP;
				X_max_LP = i * h;
			}

			point_list_LP->Add(i*h, LP);

			dataGridView3->Rows->Add();
			dataGridView3->Rows[i]->Cells[0]->Value = i;
			dataGridView3->Rows[i]->Cells[1]->Value = x_curr;
			dataGridView3->Rows[i]->Cells[2]->Value = V_double_num[j];
			dataGridView3->Rows[i]->Cells[3]->Value = V_num[i];
			dataGridView3->Rows[i]->Cells[4]->Value = LP;

			point_list_num_double_accur->Add(x_curr, V_double_num[j]);
			point_list_numeric->Add(x_curr, V_num[i]);

			j += 2;
		}
		point_list_num_double_accur->Add(1, M2);
		point_list_numeric->Add(1, M2);

		LineItem^ Curve1 = panel1->AddCurve("numeric trajectory", point_list_numeric, Color::Red, SymbolType::VDash);
		LineItem^ Curve2 = panel1->AddCurve("accurate trajectory", point_list_num_double_accur, Color::Black, SymbolType::XCross);
		LineItem^ Curve3 = panel2->AddCurve("Local error", point_list_LP, Color::Black, SymbolType::XCross);

		label5->Text = "Max LP = " + Convert::ToString(MAX_LP);
		label10->Text = "Xk = " + Convert::ToString(X_max_LP);

		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();

		zedGraphControl5->AxisChange();
		zedGraphControl5->Invalidate();


	} // end button 3 click
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
