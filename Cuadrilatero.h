#pragma once
#include "Poligono.h"
ref class Cuadrilatero :	public Poligono
{
public:
	Cuadrilatero(int lado);
	int ObtenerArea();
	int ObtenerPerimetro();
};

