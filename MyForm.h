#pragma once
#include "Triangulo.h"
#include "Cuadrilatero.h"
#include "Pentagono.h"
#include "Hexagono.h"
#include "Heptagono.h"
#include "Octagono.h"
#include "Eneagono.h"
#include "Decagono.h"

namespace ClasesAbstractas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLado;
	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::Label^ lblapotema;
	private: System::Windows::Forms::TextBox^ txtapotema;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLado = (gcnew System::Windows::Forms::TextBox());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->lblapotema = (gcnew System::Windows::Forms::Label());
			this->txtapotema = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triángulo", L"Cuadrilátero", L"Pentágono", L"Hexágono",
					L"Heptágono", L"Octágono", L"Eneágono", L"Decágono"
			});
			this->comboBox1->Location = System::Drawing::Point(26, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Escoge la figura a calcular:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingresa la longitud de uno de sus lados (sólo el número): ";
			// 
			// txtLado
			// 
			this->txtLado->Location = System::Drawing::Point(26, 110);
			this->txtLado->Name = L"txtLado";
			this->txtLado->Size = System::Drawing::Size(107, 20);
			this->txtLado->TabIndex = 3;
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(26, 203);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(129, 46);
			this->btnCalcular->TabIndex = 4;
			this->btnCalcular->Text = L"Calcular Área y Perímetro";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::btnCalcular_Click);
			// 
			// lblapotema
			// 
			this->lblapotema->AutoSize = true;
			this->lblapotema->Enabled = false;
			this->lblapotema->Location = System::Drawing::Point(23, 143);
			this->lblapotema->Name = L"lblapotema";
			this->lblapotema->Size = System::Drawing::Size(231, 13);
			this->lblapotema->TabIndex = 5;
			this->lblapotema->Text = L"Ingresa la longitud del apotema(sólo el número):";
			// 
			// txtapotema
			// 
			this->txtapotema->Enabled = false;
			this->txtapotema->Location = System::Drawing::Point(26, 167);
			this->txtapotema->Name = L"txtapotema";
			this->txtapotema->Size = System::Drawing::Size(107, 20);
			this->txtapotema->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 285);
			this->Controls->Add(this->txtapotema);
			this->Controls->Add(this->lblapotema);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->txtLado);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ perimetro = "";
		String^ area = "";
		int lado = System::Convert::ToInt16(txtLado->Text);
		int apotema = 0;
		switch (comboBox1->SelectedIndex)
		{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			apotema = System::Convert::ToInt16(txtapotema->Text);
			break;
		}
		Triangulo^ triangulo;
		Cuadrilatero^ cuadrilatero;
		Pentagono^ pentagono;
		Hexagono^ hexagono;
		Heptagono^ heptagono;
		Octagono^ octagono;
		Eneagono^ eneagono;
		Decagono^ decagono;

		switch (comboBox1->SelectedIndex)
		{
		case 0:
			triangulo = gcnew Triangulo(lado);
			perimetro = "El perímetro del triángulo es: " + (triangulo->ObtenerPerimetro()).ToString();
			area = "El área del triángulo es: " + (triangulo->ObtenerArea()).ToString();
			break;
		case 1:
			cuadrilatero = gcnew Cuadrilatero(lado);
			perimetro = "El perímetro del cuadrilátero es: " + (cuadrilatero->ObtenerPerimetro()).ToString();
			area = "El área del cuadrilátero es: " + (cuadrilatero->ObtenerArea()).ToString();
			break;
		case 2:
			pentagono = gcnew Pentagono(lado, apotema);
			perimetro = "El perímetro del pentágono es: " + (pentagono->ObtenerPerimetro()).ToString();
			area = "El área del pentágono es: " + (pentagono->ObtenerArea()).ToString();
			break;
		case 3:
			hexagono = gcnew Hexagono(lado, apotema);
			perimetro = "El perímetro del hexágono es: " + (hexagono->ObtenerPerimetro()).ToString();
			area = "El área del hexágono es: " + (hexagono->ObtenerArea()).ToString();
			break;
		case 4:
			heptagono = gcnew Heptagono(lado, apotema);
			perimetro = "El perímetro del heptágono es: " + (heptagono->ObtenerPerimetro()).ToString();
			area = "El área del heptágono es: " + (heptagono->ObtenerArea()).ToString();
			break;
		case 5:
			octagono = gcnew Octagono(lado, apotema);
			perimetro = "El perímetro del octágono es: " + (octagono->ObtenerPerimetro()).ToString();
			area = "El área del octágono es: " + (octagono->ObtenerArea()).ToString();
			break;
		case 6:
			eneagono = gcnew Eneagono(lado, apotema);
			perimetro = "El perímetro del eneágono es: " + (eneagono->ObtenerPerimetro()).ToString();
			area = "El área del eneágono es: " + (eneagono->ObtenerArea()).ToString();
			break;
		case 7:
			decagono = gcnew Decagono(lado, apotema);
			perimetro = "El perímetro del decágono es: " + (decagono->ObtenerPerimetro()).ToString();
			area = "El área del decágono es: " + (decagono->ObtenerArea()).ToString();
			break;
		}
		MessageBox::Show("La información de la figura es la siguiente: " + "\n" + perimetro + "unidades" + "\n" + area + "unidades cuadradas");
	}
	catch (...)
	{
		MessageBox::Show("Por favor ingrese datos válidos");
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox1->SelectedIndex)
	{
	case 0:
	case 1:
		lblapotema->Enabled = false;
		txtapotema->Enabled = false;
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		lblapotema->Enabled = true;
		txtapotema->Enabled = true;
		break;
	}
}
};
}
