#pragma once
#include <math.h>
#include "Poligono.h"
ref class Triangulo :	public Poligono
{
public:
	Triangulo(int lado);
	int ObtenerArea();
	int ObtenerPerimetro();
};

