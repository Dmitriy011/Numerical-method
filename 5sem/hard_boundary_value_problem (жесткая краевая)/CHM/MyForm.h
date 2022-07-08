#pragma once

#include "MyForm.h"
#include <Windows.h>
#include <stdio.h>
#include <string>

#include <vector>
#include <cmath>

struct Matrix
{
public:
	Matrix(size_t _count_row, size_t _count_column, double** _matrix, std::vector<double>& _lambda)
	{
		count_row = _count_row;
		count_column = _count_column;
		matrix = _matrix;
		lambda = _lambda;
	}

	size_t count_row;
	size_t count_column;
	double** matrix;
	std::vector<double> lambda;
	
};

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace CHM
{
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Button^ Выход;
		System::Windows::Forms::Button^ Вычислить;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private:	System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;










	private: System::Windows::Forms::Label^ Задача;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;









	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;









	private: System::Windows::Forms::CheckBox^ checkBox1;












	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Xn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ E1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ E2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ S1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ S2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ maxS1S2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LocErr;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ NResLabel;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;














































































	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			   System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			   System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   this->Выход = (gcnew System::Windows::Forms::Button());
			   this->Вычислить = (gcnew System::Windows::Forms::Button());
			   this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->N = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Xn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->hn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->U1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->U2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->v1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->v2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->E1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->E2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->S1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->S2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->maxS1S2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->LocErr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->Задача = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->label17 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->label39 = (gcnew System::Windows::Forms::Label());
			   this->label38 = (gcnew System::Windows::Forms::Label());
			   this->label36 = (gcnew System::Windows::Forms::Label());
			   this->label35 = (gcnew System::Windows::Forms::Label());
			   this->label37 = (gcnew System::Windows::Forms::Label());
			   this->label34 = (gcnew System::Windows::Forms::Label());
			   this->label33 = (gcnew System::Windows::Forms::Label());
			   this->label30 = (gcnew System::Windows::Forms::Label());
			   this->label29 = (gcnew System::Windows::Forms::Label());
			   this->label28 = (gcnew System::Windows::Forms::Label());
			   this->label27 = (gcnew System::Windows::Forms::Label());
			   this->label24 = (gcnew System::Windows::Forms::Label());
			   this->label23 = (gcnew System::Windows::Forms::Label());
			   this->label22 = (gcnew System::Windows::Forms::Label());
			   this->label21 = (gcnew System::Windows::Forms::Label());
			   this->label20 = (gcnew System::Windows::Forms::Label());
			   this->NResLabel = (gcnew System::Windows::Forms::Label());
			   this->label19 = (gcnew System::Windows::Forms::Label());
			   this->label18 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // Выход
			   // 
			   this->Выход->Location = System::Drawing::Point(12, 175);
			   this->Выход->Name = L"Выход";
			   this->Выход->Size = System::Drawing::Size(96, 40);
			   this->Выход->TabIndex = 0;
			   this->Выход->Text = L"Выход";
			   this->Выход->UseVisualStyleBackColor = true;
			   this->Выход->Click += gcnew System::EventHandler(this, &MyForm::Выход_Click);
			   // 
			   // Вычислить
			   // 
			   this->Вычислить->Location = System::Drawing::Point(12, 125);
			   this->Вычислить->Name = L"Вычислить";
			   this->Вычислить->Size = System::Drawing::Size(96, 33);
			   this->Вычислить->TabIndex = 1;
			   this->Вычислить->Text = L"Вычислить";
			   this->Вычислить->UseVisualStyleBackColor = true;
			   this->Вычислить->Click += gcnew System::EventHandler(this, &MyForm::Вычислить_Click);
			   // 
			   // chart1
			   // 
			   chartArea1->Name = L"ChartArea1";
			   this->chart1->ChartAreas->Add(chartArea1);
			   this->chart1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			   legend1->Name = L"Legend1";
			   this->chart1->Legends->Add(legend1);
			   this->chart1->Location = System::Drawing::Point(824, 6);
			   this->chart1->Margin = System::Windows::Forms::Padding(2);
			   this->chart1->Name = L"chart1";
			   this->chart1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   series1->BorderWidth = 3;
			   series1->ChartArea = L"ChartArea1";
			   series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			   series1->Legend = L"Legend1";
			   series1->MarkerSize = 20;
			   series1->Name = L"v1";
			   series2->BorderWidth = 3;
			   series2->ChartArea = L"ChartArea1";
			   series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			   series2->Legend = L"Legend1";
			   series2->MarkerSize = 20;
			   series2->Name = L"v2";
			   this->chart1->Series->Add(series1);
			   this->chart1->Series->Add(series2);
			   this->chart1->Size = System::Drawing::Size(451, 475);
			   this->chart1->TabIndex = 0;
			   this->chart1->Text = L"chart1";
			   this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				   this->N, this->Xn,
					   this->hn, this->U1, this->U2, this->v1, this->v2, this->E1, this->E2, this->S1, this->S2, this->maxS1S2, this->LocErr
			   });
			   this->dataGridView1->Location = System::Drawing::Point(15, 239);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->Size = System::Drawing::Size(786, 735);
			   this->dataGridView1->TabIndex = 5;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			   // 
			   // N
			   // 
			   this->N->HeaderText = L"n";
			   this->N->Name = L"N";
			   this->N->Width = 30;
			   // 
			   // Xn
			   // 
			   this->Xn->HeaderText = L"Xn";
			   this->Xn->Name = L"Xn";
			   this->Xn->Width = 40;
			   // 
			   // hn
			   // 
			   this->hn->HeaderText = L"hn-1";
			   this->hn->Name = L"hn";
			   this->hn->Width = 40;
			   // 
			   // U1
			   // 
			   this->U1->HeaderText = L"U1";
			   this->U1->Name = L"U1";
			   this->U1->Width = 80;
			   // 
			   // U2
			   // 
			   this->U2->HeaderText = L"U2";
			   this->U2->Name = L"U2";
			   this->U2->Width = 80;
			   // 
			   // v1
			   // 
			   this->v1->HeaderText = L"v1";
			   this->v1->Name = L"v1";
			   this->v1->Width = 80;
			   // 
			   // v2
			   // 
			   this->v2->HeaderText = L"v2";
			   this->v2->Name = L"v2";
			   this->v2->Width = 80;
			   // 
			   // E1
			   // 
			   this->E1->HeaderText = L"E1";
			   this->E1->Name = L"E1";
			   this->E1->Width = 80;
			   // 
			   // E2
			   // 
			   this->E2->HeaderText = L"E2";
			   this->E2->Name = L"E2";
			   this->E2->Width = 80;
			   // 
			   // S1
			   // 
			   this->S1->HeaderText = L"S1";
			   this->S1->Name = L"S1";
			   // 
			   // S2
			   // 
			   this->S2->HeaderText = L"S2";
			   this->S2->Name = L"S2";
			   // 
			   // maxS1S2
			   // 
			   this->maxS1S2->HeaderText = L"|| S ||";
			   this->maxS1S2->Name = L"maxS1S2";
			   // 
			   // LocErr
			   // 
			   this->LocErr->HeaderText = L"S*";
			   this->LocErr->Name = L"LocErr";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(12, 16);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(293, 88);
			   this->pictureBox1->TabIndex = 18;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(158, 138);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(138, 20);
			   this->textBox2->TabIndex = 6;
			   this->textBox2->Text = L"0,001";
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(155, 171);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(212, 13);
			   this->label3->TabIndex = 11;
			   this->label3->Text = L"Максимальное колличество итераций N";
			   this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(155, 125);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(119, 13);
			   this->label4->TabIndex = 12;
			   this->label4->Text = L"Начальный шаг h(0) = ";
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(1421, 26);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(452, 220);
			   this->pictureBox2->TabIndex = 20;
			   this->pictureBox2->TabStop = false;
			   this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(158, 187);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(138, 20);
			   this->textBox1->TabIndex = 21;
			   this->textBox1->Text = L"100";
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			   // 
			   // Задача
			   // 
			   this->Задача->AutoSize = true;
			   this->Задача->Location = System::Drawing::Point(12, 0);
			   this->Задача->Name = L"Задача";
			   this->Задача->Size = System::Drawing::Size(43, 13);
			   this->Задача->TabIndex = 40;
			   this->Задача->Text = L"Задача";
			   this->Задача->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(1418, 10);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(50, 13);
			   this->label1->TabIndex = 41;
			   this->label1->Text = L"Справка";
			   this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_3);
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(1263, 424);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(12, 13);
			   this->label9->TabIndex = 47;
			   this->label9->Text = L"x";
			   this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(821, 6);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(37, 13);
			   this->label10->TabIndex = 48;
			   this->label10->Text = L"v1, v2";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(1418, 287);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(187, 13);
			   this->label8->TabIndex = 53;
			   this->label8->Text = L"u1 - компонента 1 точного решения";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(1418, 300);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(187, 13);
			   this->label7->TabIndex = 52;
			   this->label7->Text = L"u2 - компонента 2 точного решения";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(1418, 266);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(227, 13);
			   this->label5->TabIndex = 51;
			   this->label5->Text = L"v2 - компонента 2 приближенного решения";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(1418, 253);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(227, 13);
			   this->label2->TabIndex = 50;
			   this->label2->Text = L"v1 - компонента 1 приближенного решения";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(821, 518);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(37, 13);
			   this->label11->TabIndex = 56;
			   this->label11->Text = L"u1, u2";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(1263, 983);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(12, 13);
			   this->label6->TabIndex = 55;
			   this->label6->Text = L"x";
			   // 
			   // chart2
			   // 
			   this->chart2->AntiAliasing = System::Windows::Forms::DataVisualization::Charting::AntiAliasingStyles::Text;
			   chartArea2->Name = L"ChartArea1";
			   this->chart2->ChartAreas->Add(chartArea2);
			   this->chart2->Cursor = System::Windows::Forms::Cursors::SizeAll;
			   legend2->Name = L"Legend1";
			   this->chart2->Legends->Add(legend2);
			   this->chart2->Location = System::Drawing::Point(824, 518);
			   this->chart2->Name = L"chart2";
			   this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			   series3->BorderWidth = 3;
			   series3->ChartArea = L"ChartArea1";
			   series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			   series3->Legend = L"Legend1";
			   series3->MarkerSize = 20;
			   series3->Name = L"u1";
			   series4->BorderWidth = 3;
			   series4->ChartArea = L"ChartArea1";
			   series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			   series4->Legend = L"Legend1";
			   series4->MarkerSize = 20;
			   series4->Name = L"u2";
			   this->chart2->Series->Add(series3);
			   this->chart2->Series->Add(series4);
			   this->chart2->Size = System::Drawing::Size(451, 511);
			   this->chart2->TabIndex = 54;
			   this->chart2->Text = L"chart2";
			   this->chart2->Click += gcnew System::EventHandler(this, &MyForm::chart2_Click_1);
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Location = System::Drawing::Point(394, 141);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(93, 17);
			   this->checkBox1->TabIndex = 57;
			   this->checkBox1->Text = L"Контроль ЛП";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(394, 187);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(131, 20);
			   this->textBox3->TabIndex = 58;
			   this->textBox3->Text = L"0,1";
			   this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(391, 171);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(113, 13);
			   this->label12->TabIndex = 59;
			   this->label12->Text = L"Eps верхняя граница";
			   this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(1419, 322);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(434, 13);
			   this->label13->TabIndex = 60;
			   this->label13->Text = L"Если вкл контроль ЛП - необходимо указать Eps (верхнюю границу для оценки  ||S||)"
				   L"";
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Location = System::Drawing::Point(1419, 339);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(145, 13);
			   this->label14->TabIndex = 61;
			   this->label14->Text = L"Eps нижн гр = Eps/2^(p+1), ";
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Location = System::Drawing::Point(1576, 339);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(142, 13);
			   this->label15->TabIndex = 62;
			   this->label15->Text = L"где p - порядок метода = 2";
			   // 
			   // label16
			   // 
			   this->label16->AutoSize = true;
			   this->label16->Location = System::Drawing::Point(1420, 362);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(348, 13);
			   this->label16->TabIndex = 63;
			   this->label16->Text = L"Максимальное колличество итерраций N  (с 0-ой точки по (N-1)-ую)";
			   this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			   // 
			   // label17
			   // 
			   this->label17->AutoSize = true;
			   this->label17->Location = System::Drawing::Point(1420, 384);
			   this->label17->Name = L"label17";
			   this->label17->Size = System::Drawing::Size(343, 13);
			   this->label17->TabIndex = 64;
			   this->label17->Text = L"Начальный шаг h(0) = h0: шаг, с которым получен х1 (х1 = х0 + h0) ";
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(1421, 528);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(460, 181);
			   this->pictureBox3->TabIndex = 106;
			   this->pictureBox3->TabStop = false;
			   // 
			   // label39
			   // 
			   this->label39->AutoSize = true;
			   this->label39->Location = System::Drawing::Point(1493, 579);
			   this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label39->Name = L"label39";
			   this->label39->Size = System::Drawing::Size(27, 13);
			   this->label39->TabIndex = 125;
			   this->label39->Text = L"*****";
			   // 
			   // label38
			   // 
			   this->label38->AutoSize = true;
			   this->label38->Location = System::Drawing::Point(1493, 566);
			   this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label38->Name = L"label38";
			   this->label38->Size = System::Drawing::Size(27, 13);
			   this->label38->TabIndex = 124;
			   this->label38->Text = L"*****";
			   // 
			   // label36
			   // 
			   this->label36->AutoSize = true;
			   this->label36->Location = System::Drawing::Point(1435, 579);
			   this->label36->Name = L"label36";
			   this->label36->Size = System::Drawing::Size(62, 13);
			   this->label36->TabIndex = 123;
			   this->label36->Text = L"v2_{N-1} = ";
			   // 
			   // label35
			   // 
			   this->label35->AutoSize = true;
			   this->label35->Location = System::Drawing::Point(1435, 566);
			   this->label35->Name = L"label35";
			   this->label35->Size = System::Drawing::Size(62, 13);
			   this->label35->TabIndex = 122;
			   this->label35->Text = L"v1_{N-1} = ";
			   // 
			   // label37
			   // 
			   this->label37->AutoSize = true;
			   this->label37->Location = System::Drawing::Point(1483, 553);
			   this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label37->Name = L"label37";
			   this->label37->Size = System::Drawing::Size(27, 13);
			   this->label37->TabIndex = 121;
			   this->label37->Text = L"*****";
			   // 
			   // label34
			   // 
			   this->label34->AutoSize = true;
			   this->label34->Location = System::Drawing::Point(1435, 553);
			   this->label34->Name = L"label34";
			   this->label34->Size = System::Drawing::Size(47, 13);
			   this->label34->TabIndex = 120;
			   this->label34->Text = L"x_N-1 = ";
			   // 
			   // label33
			   // 
			   this->label33->AutoSize = true;
			   this->label33->Location = System::Drawing::Point(1679, 679);
			   this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label33->Name = L"label33";
			   this->label33->Size = System::Drawing::Size(27, 13);
			   this->label33->TabIndex = 119;
			   this->label33->Text = L"*****";
			   // 
			   // label30
			   // 
			   this->label30->AutoSize = true;
			   this->label30->Location = System::Drawing::Point(1493, 679);
			   this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label30->Name = L"label30";
			   this->label30->Size = System::Drawing::Size(27, 13);
			   this->label30->TabIndex = 118;
			   this->label30->Text = L"*****";
			   // 
			   // label29
			   // 
			   this->label29->AutoSize = true;
			   this->label29->Location = System::Drawing::Point(1493, 656);
			   this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label29->Name = L"label29";
			   this->label29->Size = System::Drawing::Size(27, 13);
			   this->label29->TabIndex = 117;
			   this->label29->Text = L"*****";
			   // 
			   // label28
			   // 
			   this->label28->AutoSize = true;
			   this->label28->Location = System::Drawing::Point(1493, 634);
			   this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label28->Name = L"label28";
			   this->label28->Size = System::Drawing::Size(27, 13);
			   this->label28->TabIndex = 116;
			   this->label28->Text = L"*****";
			   // 
			   // label27
			   // 
			   this->label27->AutoSize = true;
			   this->label27->Location = System::Drawing::Point(1493, 610);
			   this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label27->Name = L"label27";
			   this->label27->Size = System::Drawing::Size(27, 13);
			   this->label27->TabIndex = 115;
			   this->label27->Text = L"*****";
			   // 
			   // label24
			   // 
			   this->label24->AutoSize = true;
			   this->label24->Location = System::Drawing::Point(1629, 679);
			   this->label24->Name = L"label24";
			   this->label24->Size = System::Drawing::Size(55, 13);
			   this->label24->TabIndex = 114;
			   this->label24->Text = L"max|E2| = ";
			   // 
			   // label23
			   // 
			   this->label23->AutoSize = true;
			   this->label23->Location = System::Drawing::Point(1440, 679);
			   this->label23->Name = L"label23";
			   this->label23->Size = System::Drawing::Size(55, 13);
			   this->label23->TabIndex = 113;
			   this->label23->Text = L"max|E1| = ";
			   // 
			   // label22
			   // 
			   this->label22->AutoSize = true;
			   this->label22->Location = System::Drawing::Point(1439, 656);
			   this->label22->Name = L"label22";
			   this->label22->Size = System::Drawing::Size(49, 13);
			   this->label22->TabIndex = 112;
			   this->label22->Text = L"min(hi) = ";
			   // 
			   // label21
			   // 
			   this->label21->AutoSize = true;
			   this->label21->Location = System::Drawing::Point(1439, 634);
			   this->label21->Name = L"label21";
			   this->label21->Size = System::Drawing::Size(52, 13);
			   this->label21->TabIndex = 111;
			   this->label21->Text = L"max(hi) = ";
			   // 
			   // label20
			   // 
			   this->label20->AutoSize = true;
			   this->label20->Location = System::Drawing::Point(1439, 610);
			   this->label20->Name = L"label20";
			   this->label20->Size = System::Drawing::Size(53, 13);
			   this->label20->TabIndex = 110;
			   this->label20->Text = L"max||S|| = ";
			   // 
			   // NResLabel
			   // 
			   this->NResLabel->AutoSize = true;
			   this->NResLabel->Location = System::Drawing::Point(1456, 540);
			   this->NResLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->NResLabel->Name = L"NResLabel";
			   this->NResLabel->Size = System::Drawing::Size(27, 13);
			   this->NResLabel->TabIndex = 109;
			   this->NResLabel->Text = L"*****";
			   // 
			   // label19
			   // 
			   this->label19->AutoSize = true;
			   this->label19->Location = System::Drawing::Point(1433, 540);
			   this->label19->Name = L"label19";
			   this->label19->Size = System::Drawing::Size(27, 13);
			   this->label19->TabIndex = 108;
			   this->label19->Text = L"N = ";
			   // 
			   // label18
			   // 
			   this->label18->AutoSize = true;
			   this->label18->Location = System::Drawing::Point(1420, 512);
			   this->label18->Name = L"label18";
			   this->label18->Size = System::Drawing::Size(34, 13);
			   this->label18->TabIndex = 107;
			   this->label18->Text = L"Итог:";
			   this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1904, 1041);
			   this->Controls->Add(this->label39);
			   this->Controls->Add(this->label38);
			   this->Controls->Add(this->label36);
			   this->Controls->Add(this->label35);
			   this->Controls->Add(this->label37);
			   this->Controls->Add(this->label34);
			   this->Controls->Add(this->label33);
			   this->Controls->Add(this->label30);
			   this->Controls->Add(this->label29);
			   this->Controls->Add(this->label28);
			   this->Controls->Add(this->label27);
			   this->Controls->Add(this->label24);
			   this->Controls->Add(this->label23);
			   this->Controls->Add(this->label22);
			   this->Controls->Add(this->label21);
			   this->Controls->Add(this->label20);
			   this->Controls->Add(this->NResLabel);
			   this->Controls->Add(this->label19);
			   this->Controls->Add(this->label18);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->label17);
			   this->Controls->Add(this->label16);
			   this->Controls->Add(this->label15);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->chart2);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->Задача);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->chart1);
			   this->Controls->Add(this->Вычислить);
			   this->Controls->Add(this->Выход);
			   this->Name = L"MyForm";
			   this->Text = L"Жесткая система ОДУ 3, Розанов Дмитрий, 381903_3";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: void Show()
	{
		dataGridView1->TopLeftHeaderCell->Value = "Таблица";
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e);
	private: System::Void Выход_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void first_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void задачаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Свободный горизонатльный полет точки массы m под действием первоначального толчка и силы сопротивления среды R описывается уравнением m du/dx=R; u(0)=u0, где R = -a1 * u + a3 * u^3, где a1, a3 - положительныепостоянные, u0 - начальная скорость точки, u(x) - скорость в момент времени х. Численно решая задачу Коши, установите общие закономерности зависимости скорости от времени. Сравните результаты (траектории) с вариантом 3. Параметры системы: m, a1, a3.  ", "Постановка задачи:");
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}

	private: System::Void Вычислить_Click(System::Object^ sender, System::EventArgs^ e)
	{
		size_t N = Convert::ToInt32(textBox1->Text); //N итерраций счета
		bool control_loc_err = checkBox1->Checked; //контроль ЛП

		dataGridView1->ColumnCount = 13; //колличество солбцов в таблице
		dataGridView1->RowCount = N + 1; //колличество столбцов в таблице
		dataGridView1->TopLeftHeaderCell->Value = "Данные";

		//очистить таблицу
		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = "";
			}
		}

		//для графика 1
		using namespace System::Windows::Forms::DataVisualization::Charting;
		Series^ series11 = chart1->Series[0];
		Series^ series12 = chart1->Series[1];
		series11->ChartType = SeriesChartType::Line;
		series12->ChartType = SeriesChartType::Line;
		chart1->Series[0]->Points->Clear(); //очистить 1ую компоненту приближ решения
		chart1->Series[1]->Points->Clear(); //очистить 2ую компоненту приближ решения
		//для графика 2
		using namespace System::Windows::Forms::DataVisualization::Charting;
		Series^ series21 = chart2->Series[0];
		Series^ series22 = chart2->Series[1];
		series21->ChartType = SeriesChartType::Line;
		series22->ChartType = SeriesChartType::Line;
		chart2->Series[0]->Points->Clear(); //очистить 1ую компоненту точного решения
		chart2->Series[1]->Points->Clear(); //очистить 2ую компоненту точного решения
		
		size_t count_row = 2; //матрица А из 2 строк
		size_t count_column = 2; //матрица А из 2 столбцов
		double** matrixA; // матрица А
		matrixA = new double* [count_row];
		matrixA[0] = new double[count_column];
		matrixA[1] = new double[count_column];
		matrixA[0][0] = -500.005;
		matrixA[0][1] = 499.995;
		matrixA[1][0] = 499.995;
		matrixA[1][1] = -500.005;
		std::vector<double> lambda; //собсвтенные числа матрицы А
		lambda.push_back(-1000);
		lambda.push_back(-0.01);
		Matrix A(count_row, count_column, matrixA, lambda); //Матрица А с данными о ней (собственные числа, кол-во строк, кол-во столбцов, ...)

		double H = Convert::ToDouble(textBox2->Text);

		double max_h = H;
		double min_h = H;
		double max_norm_S = 0;
		double max_E1 = 0;
		double max_E2 = 0;
		
		std::vector<double> h;
		std::vector<double> x;
		std::vector<double> u1; //первая компонента точного решения
		std::vector<double> u2; //вторая компонента точного решения
		std::vector<double> v1; //первая компонента приближ решения
		std::vector<double> v2; //вторая компонента приближ решения
		std::vector<double> E1; //глобальная погрешность первой компоненты
		std::vector<double> E2; //глобальная погрешность второй компоненты
		std::vector<double> k1_1; //~k1^(1)
		std::vector<double> k1_2; //~k1^(2)
		std::vector<double> k2_1; //~k2^(1)
		std::vector<double> k2_2; //~k2^(2)
		std::vector<double> S1; // ( (v_n+1)^ - v_n+1) / (2^p - 1)
		std::vector<double> S2;
		std::vector<double> S; // S
		std::vector<double> S_locErr; //S*
		std::vector<double> v1_cap; //первая компонента приближ решения v1^
		std::vector<double> v2_cap; //вторая компонента приближ решения v2^
		std::vector<double> k1_1_cap;
		std::vector<double> k1_2_cap;
		std::vector<double> k2_1_cap;
		std::vector<double> k2_2_cap;
		double Eps_up;
		double Eps_down;
		if(control_loc_err == 1)
		{
			 Eps_up = Convert::ToDouble(textBox3->Text);
			 Eps_down = Eps_up / (2 * 2 * 2);
		}

		int i = 1;
		//u1 = -C1*e^(-1000t) + C2*e^(-0.01t)
		//u2 = C1*e^(-1000t) + C2*e^(-0.01t)
		h.push_back(H);
		x.push_back(0);
		u1.push_back(7); //u0 = 7
		u2.push_back(13); //u0 = 13
		std::vector<double> c; //вектор констант для решения u1 = C1 * (...) + C2 * (...); u2 = ...
		c.push_back((u2[0] - u1[0]) / 2); // C1 = (13-7)/2 = 3 [находятся из решения u1 = C1 * (...) + C2 * (...); u2 = ..., подстановкой начальных условий]
		c.push_back(u2[0] - c[0]); // C2 = 13 - C1 = 10
		v1.push_back(u1[0]); //v1(0) = u1(0)
		v2.push_back(u2[0]); //v2(0) = u2(0)	
		E1.push_back(0);
		E2.push_back(0);
		v1_cap.push_back(u1[0]); //v1^(0) = u1(0)
		v2_cap.push_back(u2[0]); //v2^(0) = u2(0)	
		S1.push_back(0);
		S2.push_back(0);
		S.push_back(0);
		S_locErr.push_back(0);
		for (i; i < N; i++) // i = 1 to N 
		{
			h.push_back(H);
			x.push_back(x[i - 1] + h[i]); //x = x + h

			u1.push_back(-c[0] * (double)exp(A.lambda[0] * (x[i])) + c[1] * (double)exp(A.lambda[1] * (x[i]))); // u1 = -3 * (...) + 10 * (...)
			u2.push_back(c[0] * exp(A.lambda[0] * (x[i])) + c[1] * exp(A.lambda[1] * (x[i]))); //u2 = 3 * (...) + 10 * (...)

			k1_1.push_back(-500.005 * v1[i - 1] + 499.995 * v2[i - 1]); //~k1^(1) [xn] = f1(xn, v1(xn), v2(xn))
			k1_2.push_back(499.995 * v1[i - 1] - 500.005 * v2[i - 1]); //~k1^(2) [xn] = f2(xn, v1(xn), v2(xn))
			k2_1.push_back((-500.005 * (v1[i-1] + h[i] * 0.5 * k1_1[i - 1]) + 499.995 * (v2[i - 1] + h[i] * 0.5 * (k1_2[i - 1] + (499.995 * (v1[i - 1] + h[i] * 0.5 * k1_1[i - 1]) - 500.005 * (v2[i - 1] + h[i] * 0.5 * k1_2[i - 1])) / (1 + 500.005 * h[i] * 0.5)))) / (1 + 500.005 * h[i] * 0.5 - 499.995 * h[i] * 0.5 * (h[i] * 0.5 * 499.995) / (1 + 500.005 * h[i] * 0.5)));
			k2_2.push_back((499.995 * (v1[i - 1] + h[i] * 0.5 * (k1_1[i - 1] + k2_1[i-1])) - 500.005 * (v2[i - 1] + h[i] * 0.5 * k1_2[i - 1])) / (1 + 500.005 * h[i] * 0.5));

			v1.push_back(v1[i - 1] + h[i] * 0.5 * (k1_1[i - 1] + k2_1[i - 1])); // v1(xn+1) = v1(xn) + h * 0.5 * (k1^(1) + k2^(1))
			v2.push_back(v2[i - 1] + h[i] * 0.5 * (k1_2[i - 1] + k2_2[i - 1])); // v2(xn+1) = v2(xn) + h * 0.5 * (k1^(2) + k2^(2))

			E1.push_back(u1[i] - v1[i]);
			E2.push_back(u2[i] - v2[i]);

			if (control_loc_err == 1)
			{
				double tmp_k1_1_cap_to_half;
				double tmp_k1_2_cap_to_half;
				double tmp_k2_1_cap_to_half;
				double tmp_k2_2_cap_to_half;
				double tmp_v1_cap_to_half;
				double tmp_v2_cap_to_half;

				double tmp_k1_1_cap_to_2half;
				double tmp_k1_2_cap_to_2half;
				double tmp_k2_1_cap_to_2half;
				double tmp_k2_2_cap_to_2half;
				double tmp_v1_cap_to_2half;
				double tmp_v2_cap_to_2half;

				tmp_k1_1_cap_to_half = -500.005 * v1[i - 1] + 499.995 * v2[i - 1];
				tmp_k1_2_cap_to_half = 499.995 * v1[i - 1] - 500.005 * v2[i - 1];
				tmp_k2_1_cap_to_half = (-500.005 * (v1[i - 1] + h[i] * 0.5 * 0.5 * tmp_k1_1_cap_to_half) + 499.995 * (v2[i - 1] + h[i] * 0.5 * 0.5 * (tmp_k1_2_cap_to_half + (499.995 * (v1[i - 1] + h[i] * 0.5 * 0.5 * tmp_k1_1_cap_to_half) - 500.005 * (v2[i - 1] + h[i] * 0.5 * 0.5 * tmp_k1_2_cap_to_half)) / (1 + 500.005 * h[i] * 0.5 * 0.5)))) / (1 + 500.005 * h[i] * 0.5 * 0.5 - 499.995 * h[i] * 0.5 * 0.5 * (h[i] * 0.5 * 0.5 * 499.995) / (1 + 500.005 * h[i] * 0.5 * 0.5));
				tmp_k2_2_cap_to_half = (499.995 * (v1[i - 1] + h[i] * 0.5 * 0.5 * (tmp_k1_1_cap_to_half + tmp_k2_1_cap_to_half)) - 500.005 * (v2[i - 1] + h[i] * 0.5 * 0.5 * tmp_k1_2_cap_to_half)) / (1 + 500.005 * h[i] * 0.5 * 0.5);

				tmp_v1_cap_to_half = v1[i - 1] + h[i] * 0.5 * 0.5 * (tmp_k1_1_cap_to_half + tmp_k2_1_cap_to_half); // v1(xn+1) = v1(xn) + h * 0.5 * (k1^(1) + k2^(1))
				tmp_v2_cap_to_half = v2[i - 1] + h[i] * 0.5 * 0.5 * (tmp_k1_2_cap_to_half + tmp_k2_1_cap_to_half); // v2(xn+1) = v2(xn) + h * 0.5 * (k1^(2) + k2^(2)) 

				tmp_k1_1_cap_to_2half = -500.005 * tmp_v1_cap_to_half + 499.995 * tmp_v2_cap_to_half;
				tmp_k1_2_cap_to_2half = 499.995 * tmp_v1_cap_to_half - 500.005 * tmp_v2_cap_to_half;
				tmp_k2_1_cap_to_2half = (-500.005 * (tmp_v1_cap_to_half + h[i] * 0.5 * 0.5 * tmp_k1_1_cap_to_half) + 499.995 * (tmp_v2_cap_to_half + h[i] * 0.5 * 0.5 * (tmp_k1_2_cap_to_2half + (499.995 * (tmp_v1_cap_to_half + h[i] * 0.5 * 0.5 * tmp_k1_1_cap_to_half) - 500.005 * (tmp_v2_cap_to_half + h[i] * 0.5 * 0.5 * tmp_k1_2_cap_to_half)) / (1 + 500.005 * h[i] * 0.5 * 0.5)))) / (1 + 500.005 * h[i] * 0.5 * 0.5 - 499.995 * h[i] * 0.5 * 0.5 * (h[i] * 0.5 * 0.5 * 499.995) / (1 + 500.005 * h[i] * 0.5 * 0.5));
				tmp_k2_2_cap_to_2half = (499.995 * (tmp_v1_cap_to_half + h[i] * 0.5 * 0.5 * (tmp_k1_1_cap_to_half + tmp_k2_1_cap_to_half)) - 500.005 * (tmp_v2_cap_to_half + h[i] * 0.5 * 0.5 * tmp_k1_2_cap_to_2half)) / (1 + 500.005 * h[i] * 0.5 * 0.5);

				tmp_v1_cap_to_2half = tmp_v1_cap_to_half + h[i] * 0.5 * 0.5 * (tmp_k1_1_cap_to_2half + tmp_k2_1_cap_to_2half); // v1(xn+1) = v1(xn) + h * 0.5 * (k1^(1) + k2^(1))
				tmp_v2_cap_to_2half = tmp_v2_cap_to_half + h[i] * 0.5 * 0.5 * (tmp_k1_2_cap_to_2half + tmp_k2_1_cap_to_2half); // v2(xn+1) = v2(xn) + h * 0.5 * (k1^(2) + k2^(2)) 

				k1_1_cap.push_back(tmp_k1_1_cap_to_2half); //~k1^(1) [xn] = f1(xn, v1(xn), v2(xn))
				k1_2_cap.push_back(tmp_k1_2_cap_to_2half); //~k1^(2) [xn] = f2(xn, v1(xn), v2(xn))
				k2_1_cap.push_back(tmp_k2_1_cap_to_2half);
				k2_2_cap.push_back(tmp_k2_2_cap_to_2half);
				v1_cap.push_back(tmp_v1_cap_to_2half);
				v2_cap.push_back(tmp_v2_cap_to_2half);

				S1.push_back((v1_cap[i] - v1[i]) / (2 * 2 - 1));
				S2.push_back((v2_cap[i] - v2[i]) / (2 * 2 - 1));
				S.push_back(max(abs(S1[i]), abs(S2[i]))); //S
				S_locErr.push_back(S[i] * 2 * 2); //S*
				
				if (abs(S[i]) < Eps_down)
				{
					H = 2 * H;
				}
				else
				{
					if (Eps_down < abs(S[i]) < Eps_up)
					{
						//Все ок 
					}
					else //if (abs(S[i]) > Eps_up)
					{
						while(abs(S[i]) > Eps_up)
						{
						H = H / 2;
						h[i] = (H);
						x[i] = x[i - 1] + h[i]; //x = x + h

						u1[i] = (-c[0] * (double)exp(A.lambda[0] * (x[i])) + c[1] * (double)exp(A.lambda[1] * (x[i]))); // u1 = -3 * (...) + 10 * (...)
						u2[i] = (c[0] * exp(A.lambda[0] * (x[i])) + c[1] * exp(A.lambda[1] * (x[i]))); //u2 = 3 * (...) + 10 * (...)

						k1_1[i - 1] = (-500.005 * v1[i - 1] + 499.995 * v2[i - 1]); //~k1^(1) [xn] = f1(xn, v1(xn), v2(xn))
						k1_2[i - 1] = (499.995 * v1[i - 1] - 500.005 * v2[i - 1]); //~k1^(2) [xn] = f2(xn, v1(xn), v2(xn))
						k2_1[i - 1] = ((-500.005 * (v1[i - 1] + h[i] * 0.5 * k1_1[i - 1]) + 499.995 * (v2[i - 1] + h[i] * 0.5 * (k1_2[i - 1] + (499.995 * (v1[i - 1] + h[i] * 0.5 * k1_1[i - 1]) - 500.005 * (v2[i - 1] + h[i] * 0.5 * k1_2[i - 1])) / (1 + 500.005 * h[i] * 0.5)))) / (1 + 500.005 * h[i] * 0.5 - 499.995 * h[i] * 0.5 * (h[i] * 0.5 * 499.995) / (1 + 500.005 * h[i] * 0.5)));
						k2_2[i - 1] = ((499.995 * (v1[i - 1] + h[i] * 0.5 * (k1_1[i - 1] + k2_1[i - 1])) - 500.005 * (v2[i - 1] + h[i] * 0.5 * k1_2[i - 1])) / (1 + 500.005 * h[i] * 0.5));

						v1[i] = (v1[i - 1] + h[i] * 0.5 * (k1_1[i - 1] + k2_1[i - 1])); // v1(xn+1) = v1(xn) + h * 0.5 * (k1^(1) + k2^(1))
						v2[i] = (v2[i - 1] + h[i] * 0.5 * (k1_2[i - 1] + k2_2[i - 1])); // v2(xn+1) = v2(xn) + h * 0.5 * (k1^(2) + k2^(2))

						E1[i] = (u1[i] - v1[i]);
						E2[i] = (u2[i] - v2[i]);

						tmp_k1_1_cap_to_half = -500.005 * v1[i - 1] + 499.995 * v2[i - 1];
						tmp_k1_2_cap_to_half = 499.995 * v1[i - 1] - 500.005 * v2[i - 1];
						tmp_k2_1_cap_to_half = (-500.005 * (v1[i - 1] + h[i] * 0.5 * 0.5 * tmp_k1_1_cap_to_half) + 499.995 * (v2[i - 1] + h[i] * 0.5 * 0.5 * (tmp_k1_2_cap_to_half + (499.995 * (v1[i - 1] + h[i] * 0.5 * 0.5 * tmp_k1_1_cap_to_half) - 500.005 * (v2[i - 1] + h[i] * 0.5 * 0.5 * tmp_k1_2_cap_to_half)) / (1 + 500.005 * h[i] * 0.5 * 0.5)))) / (1 + 500.005 * h[i] * 0.5 * 0.5 - 499.995 * h[i] * 0.5 * 0.5 * (h[i] * 0.5 * 0.5 * 499.995) / (1 + 500.005 * h[i] * 0.5 * 0.5));
						tmp_k2_2_cap_to_half = (499.995 * (v1[i - 1] + h[i] * 0.5 * 0.5 * (tmp_k1_1_cap_to_half + tmp_k2_1_cap_to_half)) - 500.005 * (v2[i - 1] + h[i] * 0.5 * 0.5 * tmp_k1_2_cap_to_half)) / (1 + 500.005 * h[i] * 0.5 * 0.5);

						tmp_v1_cap_to_half = v1[i - 1] + h[i] * 0.5 * 0.5 * (tmp_k1_1_cap_to_half + tmp_k2_1_cap_to_half); // v1(xn+1) = v1(xn) + h * 0.5 * (k1^(1) + k2^(1))
						tmp_v2_cap_to_half = v2[i - 1] + h[i] * 0.5 * 0.5 * (tmp_k1_2_cap_to_half + tmp_k2_2_cap_to_half); // v2(xn+1) = v2(xn) + h * 0.5 * (k1^(2) + k2^(2)) 

						tmp_k1_1_cap_to_2half = -500.005 * tmp_v1_cap_to_half + 499.995 * tmp_v2_cap_to_half;
						tmp_k1_2_cap_to_2half = 499.995 * tmp_v1_cap_to_half - 500.005 * tmp_v2_cap_to_half;
						tmp_k2_1_cap_to_2half = (-500.005 * (tmp_v1_cap_to_half + h[i] * 0.5 * 0.5 * tmp_k1_1_cap_to_half) + 499.995 * (tmp_v2_cap_to_half + h[i] * 0.5 * 0.5 * (tmp_k1_2_cap_to_2half + (499.995 * (tmp_v1_cap_to_half + h[i] * 0.5 * 0.5 * tmp_k1_1_cap_to_half) - 500.005 * (tmp_v2_cap_to_half + h[i] * 0.5 * 0.5 * tmp_k1_2_cap_to_half)) / (1 + 500.005 * h[i] * 0.5 * 0.5)))) / (1 + 500.005 * h[i] * 0.5 * 0.5 - 499.995 * h[i] * 0.5 * 0.5 * (h[i] * 0.5 * 0.5 * 499.995) / (1 + 500.005 * h[i] * 0.5 * 0.5));
						tmp_k2_2_cap_to_2half = (499.995 * (tmp_v1_cap_to_half + h[i] * 0.5 * 0.5 * (tmp_k1_1_cap_to_half + tmp_k2_1_cap_to_half)) - 500.005 * (tmp_v2_cap_to_half + h[i] * 0.5 * 0.5 * tmp_k1_2_cap_to_2half)) / (1 + 500.005 * h[i] * 0.5 * 0.5);

						tmp_v1_cap_to_2half = tmp_v1_cap_to_half + h[i] * 0.5 * 0.5 * (tmp_k1_1_cap_to_2half + tmp_k2_1_cap_to_2half); // v1(xn+1) = v1(xn) + h * 0.5 * (k1^(1) + k2^(1))
						tmp_v2_cap_to_2half = tmp_v2_cap_to_half + h[i] * 0.5 * 0.5 * (tmp_k1_2_cap_to_2half + tmp_k2_2_cap_to_2half); // v2(xn+1) = v2(xn) + h * 0.5 * (k1^(2) + k2^(2)) 

						k1_1_cap[i - 1] = (tmp_k1_1_cap_to_2half); //~k1^(1) [xn] = f1(xn, v1(xn), v2(xn))
						k1_2_cap[i - 1] = (tmp_k1_2_cap_to_2half); //~k1^(2) [xn] = f2(xn, v1(xn), v2(xn))
						k2_1_cap[i - 1] = (tmp_k2_1_cap_to_2half);
						k2_2_cap[i - 1] = (tmp_k2_2_cap_to_2half);
						v1_cap[i] = (tmp_v1_cap_to_2half);
						v2_cap[i] = (tmp_v2_cap_to_2half);

						S1[i] = ((v1_cap[i] - v1[i]) / (2 * 2 - 1));
						S2[i] = ((v2_cap[i] - v2[i]) / (2 * 2 - 1));
						S[i] = (max(abs(S1[i]), abs(S2[i])));
						S_locErr[i] = 4 * S[i];
						}
					}
				}

				if (max_norm_S < S[i])
				{
					max_norm_S = S[i];
				}
			}

			if (max_E1 < abs(E1[i]))
			{
				max_E1 = abs(E1[i]);
			}
			if (max_E2 < abs(E2[i]))
			{
				max_E2 = abs(E2[i]);
			}

			if (max_h < h[i])
			{
				max_h = h[i];
			}

			if (min_h > h[i])
			{
				min_h = h[i];
			}

			/*
			if (v2[i] < b2 || v1[i] < b1)
			{
				//i--;
				break;
			}
			*/
		}
	
		for (size_t j = 0; j < i; j++) 	//заполнение таблицы
		{
			dataGridView1->Rows[j]->Cells[0]->Value = j;
			dataGridView1->Rows[j]->Cells[1]->Value = x[j];
			dataGridView1->Rows[j]->Cells[2]->Value = h[j];
			dataGridView1->Rows[j]->Cells[3]->Value = u1[j];
			dataGridView1->Rows[j]->Cells[4]->Value = u2[j];
			dataGridView1->Rows[j]->Cells[5]->Value = v1[j];
			dataGridView1->Rows[j]->Cells[6]->Value = v2[j];
			dataGridView1->Rows[j]->Cells[7]->Value = E1[j];
			dataGridView1->Rows[j]->Cells[8]->Value = E2[j];
			if (control_loc_err == 0)
			{
				dataGridView1->Rows[j]->Cells[9]->Value = "-";
				dataGridView1->Rows[j]->Cells[10]->Value = "-";
				dataGridView1->Rows[j]->Cells[11]->Value = "-";
			}
			else
			{
				dataGridView1->Rows[j]->Cells[9]->Value = S1[j];
				dataGridView1->Rows[j]->Cells[10]->Value = S2[j];
				dataGridView1->Rows[j]->Cells[11]->Value = S[j];
				dataGridView1->Rows[j]->Cells[12]->Value = S_locErr[j];
			}
		}

		dataGridView1->Rows[0]->Cells[2]->Value = "-";

		for (double j = 0; j < i; j++)
		{
			series11->Points->AddXY(x[j], v1[j]);
			series12->Points->AddXY(x[j], v2[j]);
		}

		for (double j = 0; j < i; j++)
		{
			series21->Points->AddXY(x[j], u1[j]);
			series22->Points->AddXY(x[j], u2[j]);
		}

		this->NResLabel->Text = Convert::ToString(N);
		this->label37->Text = Convert::ToString(x[N-1]);
		this->label38->Text = Convert::ToString(v1[N - 1]);
		this->label39->Text = Convert::ToString(v2[N - 1]);
		if (control_loc_err == 1)
		{
			this->label27->Text = Convert::ToString(max_norm_S);
		}
		else
		{
			this->label27->Text = "-";
		}
		this->label30->Text = Convert::ToString(max_E1);
		this->label33->Text = Convert::ToString(max_E2);
		this->label28->Text = Convert::ToString(max_h);
		this->label29->Text = Convert::ToString(min_h);
	}


	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NResLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}